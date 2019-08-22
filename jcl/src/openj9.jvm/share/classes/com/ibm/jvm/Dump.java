/*[INCLUDE-IF Sidecar18-SE]*/
/*******************************************************************************
 * Copyright (c) 2006, 2019 IBM Corp. and others
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

package com.ibm.jvm;

import com.ibm.jvm.internal.DumpImpl;

import openj9.management.internal.DumpConfigurationUnavailableExceptionBase;
import openj9.management.internal.InvalidDumpOptionExceptionBase;

/**
 * For documentation, see {@link com.ibm.jvm.internal.DumpImpl}
 *
 */
public class Dump extends DumpImpl {
	/*
	 * Dump should not be instantiated.
	 */
	private Dump() {
		/* empty */
	}

	public static void JavaDump() {
		DumpImpl.internalJavaDump();
	}

	public static void HeapDump() {
		DumpImpl.internalHeapDump();
	}

	public static void SnapDump() {
		DumpImpl.internalSnapDump();
	}

	public static void SystemDump() {
		DumpImpl.internalSystemDump();
	}

	public static String javaDumpToFile(String fileNamePattern) throws InvalidDumpOptionException {
		try {
			return DumpImpl.internalJavaDumpToFile(fileNamePattern);
		} catch (InvalidDumpOptionExceptionBase e) {
			throw new InvalidDumpOptionException(e);
		}
	}

	public static String javaDumpToFile() {
		return DumpImpl.internalJavaDumpToFile();
	}

	public static String heapDumpToFile(String fileNamePattern) throws InvalidDumpOptionException {
		try {
			return DumpImpl.internalHeapDumpToFile(fileNamePattern);
		} catch (InvalidDumpOptionExceptionBase e) {
			throw new InvalidDumpOptionException(e);
		}
	}

	public static String heapDumpToFile() {
		return DumpImpl.internalHeapDumpToFile();
	}

	public static String systemDumpToFile(String fileNamePattern) throws InvalidDumpOptionException {
		try {
			return DumpImpl.internalSystemDumpToFile(fileNamePattern);
		} catch (InvalidDumpOptionExceptionBase e) {
			throw new InvalidDumpOptionException(e);
		}
	}

	public static String systemDumpToFile() {
		return DumpImpl.internalSystemDumpToFile();
	}

	public static String snapDumpToFile(String fileNamePattern) throws InvalidDumpOptionException {
		try {
			return DumpImpl.internalSnapDumpToFile(fileNamePattern);
		} catch (InvalidDumpOptionExceptionBase e) {
			throw new InvalidDumpOptionException(e);
		}
	}

	public static String snapDumpToFile() {
		return DumpImpl.internalSnapDumpToFile();
	}

	public static String triggerDump(String dumpOptions) throws InvalidDumpOptionException {
		try {
			return DumpImpl.internalTriggerDump(dumpOptions);
		} catch (InvalidDumpOptionExceptionBase e) {
			throw new InvalidDumpOptionException(e);
		}
	}

	private static String triggerDump(String dumpSettings, String event) throws InvalidDumpOptionException {
		try {
			return DumpImpl.internalTriggerDump(dumpSettings, event);
		} catch (InvalidDumpOptionExceptionBase e) {
			throw new InvalidDumpOptionException(e);
		}
	}

	public static void setDumpOptions(String dumpOptions)
			throws InvalidDumpOptionException, DumpConfigurationUnavailableException {
		try {
			DumpImpl.internalSetDumpOptions(dumpOptions);
		} catch (InvalidDumpOptionExceptionBase e) {
			throw new InvalidDumpOptionException(e);
		} catch (DumpConfigurationUnavailableExceptionBase e) {
			throw new DumpConfigurationUnavailableException(e);
		}
	}

	public static String[] queryDumpOptions() {
		return DumpImpl.internalQueryDumpOptions();
	}

	public static void resetDumpOptions() throws DumpConfigurationUnavailableException {
		try {
			DumpImpl.internalResetDumpOptions();
		} catch (DumpConfigurationUnavailableExceptionBase e) {
			throw new DumpConfigurationUnavailableException(e);
		}
	}
}
