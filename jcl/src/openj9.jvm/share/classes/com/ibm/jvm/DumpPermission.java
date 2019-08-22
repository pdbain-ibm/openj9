/*[INCLUDE-IF Sidecar17]*/
package com.ibm.jvm;

import com.ibm.jvm.internal.DumpPermissionImpl;

/**
 * The permission class for operations on the com.ibm.jvm.Dump class.
 * Allowing code access to this permission will allow changes to be made
 * to system wide dump settings controlling which events cause dumps to be
 * and allow dumps to be triggered directly.
 * 
 * Triggering dumps may pause the application while the dump is taken. This pause
 * can potentially be minutes depending on the size of the application.
 * A dump file may be a complete image of the applications memory. Code with read
 * access to dump files produced by com.ibm.jvm.Dump should be considered as having
 * access to any information that was within the application at the time the dump
 * was taken. 
 */
public class DumpPermission extends DumpPermissionImpl {

	private static final long serialVersionUID = -7467700398466970030L;

	public DumpPermission() {
		super();
	}
}
