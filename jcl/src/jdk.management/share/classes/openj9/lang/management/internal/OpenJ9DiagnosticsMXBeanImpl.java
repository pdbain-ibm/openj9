/*[INCLUDE-IF Sidecar17]*/
/*******************************************************************************
 * Copyright (c) 2018, 2019 IBM Corp. and others
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at https://www.eclipse.org/legal/epl-2.0/
 * or the Apache License, Version 2.0 which accompanies this distribution and
 * is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following
 * Secondary Licenses when the conditions for such availability set
 * forth in the Eclipse Public License, v. 2.0 are satisfied: GNU
 * General Public License, version 2 with the GNU Classpath
 * Exception [1] and GNU General Public License, version 2 with the
 * OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] http://openjdk.java.net/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0 OR GPL-2.0 WITH Classpath-exception-2.0 OR LicenseRef-GPL-2.0 WITH Assembly-exception
 *******************************************************************************/
package openj9.lang.management.internal;

import javax.management.MalformedObjectNameException;
import javax.management.ObjectName;
import com.ibm.jvm.internal.DumpImpl;
import com.ibm.java.lang.management.internal.ManagementPermissionHelper;

import openj9.lang.management.ConfigurationUnavailableException;
import openj9.lang.management.InvalidOptionException;
import openj9.lang.management.OpenJ9DiagnosticsMXBean;
import openj9.management.internal.DumpConfigurationUnavailableExceptionBase;
import openj9.management.internal.InvalidDumpOptionExceptionBase;

/**
 * Runtime type for {@link OpenJ9DiagnosticsMXBean}.
 * <p>
 * Implements functionality to dynamically configure dump options and to trigger supported dump agents.
 * </p>
 */
public final class OpenJ9DiagnosticsMXBeanImpl extends DumpImpl implements OpenJ9DiagnosticsMXBean {

	private static final OpenJ9DiagnosticsMXBean instance = createInstance();

	private static OpenJ9DiagnosticsMXBean createInstance() {
		return new OpenJ9DiagnosticsMXBeanImpl();
	}

	/**
	 * {@inheritDoc}
	 */
	@Override
	public void resetDumpOptions() throws ConfigurationUnavailableException {
		checkManagementSecurityPermission();
		try {
			internalResetDumpOptions();
		} catch (Exception e) {
			handleDumpConfigurationUnavailableException(e);
			throw handleError(e);
		}
	}

	/**
	 * {@inheritDoc}
	 */
	@Override
	public void setDumpOptions(String dumpOptions) throws InvalidOptionException, ConfigurationUnavailableException {
		checkManagementSecurityPermission();
		try {
			internalSetDumpOptions(dumpOptions);
		} catch (Exception e) {
			handleInvalidDumpOptionException(e);
			handleDumpConfigurationUnavailableException(e);
			throw handleError(e);
		}
	}

	/**
	 * {@inheritDoc}
	 */
	@Override
	public void triggerDump(String dumpAgent) throws IllegalArgumentException {
		checkManagementSecurityPermission();
		boolean valid = true;
		try {
			switch (dumpAgent) {
			case "java": //$NON-NLS-1$
				internalJavaDump();
				break;
			case "heap": //$NON-NLS-1$
				internalHeapDump();
				break;
			case "system": //$NON-NLS-1$
				internalSystemDump();
				break;
			case "snap": //$NON-NLS-1$
				internalSnapDump();
				break;
			default:
				valid = false;
				break;
			}
		} catch (Exception e) {
			throw handleError(e);
		}
		if (!valid) {
			/*[MSG "K0663", "Invalid or Unsupported Dump Agent cannot be triggered"]*/
			throw new IllegalArgumentException(com.ibm.oti.util.Msg.getString("K0663")); //$NON-NLS-1$
		}
	}

	/**
	 * {@inheritDoc}
	 */
	@Override
	public String triggerDumpToFile(String dumpAgent, String fileNamePattern)
			throws IllegalArgumentException, InvalidOptionException {
		String fileName = null;
		checkManagementSecurityPermission();
		boolean valid = true;
		try {
			switch (dumpAgent) {
			case "java": //$NON-NLS-1$
				fileName = internalJavaDumpToFile(fileNamePattern);
				break;
			case "heap": //$NON-NLS-1$
				fileName = internalHeapDumpToFile(fileNamePattern);
				break;
			case "system": //$NON-NLS-1$
				fileName = internalSystemDumpToFile(fileNamePattern);
				break;
			case "snap": //$NON-NLS-1$
				fileName = internalSnapDumpToFile(fileNamePattern);
				break;
			default:
				valid = false;
				break;
			}
		} catch (Exception e) {
			handleInvalidDumpOptionException(e);
			throw handleError(e);
		}
		if (!valid) {
			/* [MSG "K0663", "Invalid or Unsupported Dump Agent cannot be triggered"] */
			throw new IllegalArgumentException(com.ibm.oti.util.Msg.getString("K0663")); //$NON-NLS-1$
		}
		return fileName;
	}

	/**
	 * {@inheritDoc}
	 */
	@Override
	public String triggerClassicHeapDump() throws InvalidOptionException {
		String dumpOptions = "heap:opts=CLASSIC"; //$NON-NLS-1$
		checkManagementSecurityPermission();
		try {
			String fileName = internalTriggerDump(dumpOptions);
			return fileName;
		} catch (Exception e) {
			handleInvalidDumpOptionException(e);
			throw handleError(e);
		}
	}

	private static void checkManagementSecurityPermission() {
		/* Check the caller has Management Permission. */
		SecurityManager manager = System.getSecurityManager();
		if (manager != null) {
			manager.checkPermission(ManagementPermissionHelper.MPCONTROL);
		}
	}

	/**
	 * Singleton accessor method. Returns an instance of {@link OpenJ9DiagnosticsMXBeanImpl}.
	 *
	 * @return a static instance of {@link OpenJ9DiagnosticsMXBeanImpl}.
	 */
	public static OpenJ9DiagnosticsMXBean getInstance() {
		return instance;
	}

	/**
	 * Private constructor to prevent instantiation by others.
	 */
	private OpenJ9DiagnosticsMXBeanImpl() {
		super();
	}

	/**
	 * Returns the object name of the MXBean.
	 *
	 * @return objectName representing the MXBean.
	 */
	@Override
	public ObjectName getObjectName() {
		try {
			return ObjectName.getInstance("openj9.lang.management:type=OpenJ9Diagnostics"); //$NON-NLS-1$
		} catch (MalformedObjectNameException e) {
			throw new InternalError(e);
		}
	}

	private static InternalError handleError(Exception error) {
		throw new InternalError(error.toString(), error);
	}

	private void handleInvalidDumpOptionException(Exception cause) throws InvalidOptionException {
		if (cause instanceof InvalidDumpOptionExceptionBase) {
			throw new InvalidOptionException("Error in dump options specified", cause); //$NON-NLS-1$
		}
	}

	private void handleDumpConfigurationUnavailableException(Exception cause) throws ConfigurationUnavailableException {
		if (cause instanceof DumpConfigurationUnavailableExceptionBase) {
			throw new ConfigurationUnavailableException("Dump configuration cannot be changed while a dump is in progress", cause); //$NON-NLS-1$
		}
	}

}
