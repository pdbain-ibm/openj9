/*******************************************************************************
 * Copyright (c) 1991, 2018 IBM Corp. and others
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

#include "j9.h"

const U_16 J9JavaBytecodeVerificationTable[] = {
		0x0100 /* JBnop - 0 */,
		0x0205 /* JBaconstnull - 1 */,
		0x0201 /* JBiconstm1 - 2 */,
		0x0201 /* JBiconst0 - 3 */,
		0x0201 /* JBiconst1 - 4 */,
		0x0201 /* JBiconst2 - 5 */,
		0x0201 /* JBiconst3 - 6 */,
		0x0201 /* JBiconst4 - 7 */,
		0x0201 /* JBiconst5 - 8 */,
		0x0204 /* JBlconst0 - 9 */,
		0x0204 /* JBlconst1 - 10 */,
		0x0202 /* JBfconst0 - 11 */,
		0x0202 /* JBfconst1 - 12 */,
		0x0202 /* JBfconst2 - 13 */,
		0x0203 /* JBdconst0 - 14 */,
		0x0203 /* JBdconst1 - 15 */,
		0x0201 /* JBbipush - 16 */,
		0x0201 /* JBsipush - 17 */,
		0x0300 /* JBldc - 18 */,
		0x0300 /* JBldcw - 19 */,
		0x0300 /* JBldc2lw - 20 */,
		0x0401 /* JBiload - 21 */,
		0x0404 /* JBlload - 22 */,
		0x0402 /* JBfload - 23 */,
		0x0403 /* JBdload - 24 */,
		0x0407 /* JBaload - 25 */,
		0x0481 /* JBiload0 - 26 */,
		0x0491 /* JBiload1 - 27 */,
		0x04A1 /* JBiload2 - 28 */,
		0x04B1 /* JBiload3 - 29 */,
		0x0484 /* JBlload0 - 30 */,
		0x0494 /* JBlload1 - 31 */,
		0x04A4 /* JBlload2 - 32 */,
		0x04B4 /* JBlload3 - 33 */,
		0x0482 /* JBfload0 - 34 */,
		0x0492 /* JBfload1 - 35 */,
		0x04A2 /* JBfload2 - 36 */,
		0x04B2 /* JBfload3 - 37 */,
		0x0483 /* JBdload0 - 38 */,
		0x0493 /* JBdload1 - 39 */,
		0x04A3 /* JBdload2 - 40 */,
		0x04B3 /* JBdload3 - 41 */,
		0x0487 /* JBaload0 - 42 */,
		0x0497 /* JBaload1 - 43 */,
		0x04A7 /* JBaload2 - 44 */,
		0x04B7 /* JBaload3 - 45 */,
		0x0501 /* JBiaload - 46 */,
		0x0504 /* JBlaload - 47 */,
		0x0502 /* JBfaload - 48 */,
		0x0503 /* JBdaload - 49 */,
		0x0505 /* JBaaload - 50 */,
		0x0501 /* JBbaload - 51 */,
		0x0501 /* JBcaload - 52 */,
		0x0501 /* JBsaload - 53 */,
		0x0601 /* JBistore - 54 */,
		0x0604 /* JBlstore - 55 */,
		0x0602 /* JBfstore - 56 */,
		0x0603 /* JBdstore - 57 */,
		0x0607 /* JBastore - 58 */,
		0x0681 /* JBistore0 - 59 */,
		0x0691 /* JBistore1 - 60 */,
		0x06A1 /* JBistore2 - 61 */,
		0x06B1 /* JBistore3 - 62 */,
		0x0684 /* JBlstore0 - 63 */,
		0x0694 /* JBlstore1 - 64 */,
		0x06A4 /* JBlstore2 - 65 */,
		0x06B4 /* JBlstore3 - 66 */,
		0x0682 /* JBfstore0 - 67 */,
		0x0692 /* JBfstore1 - 68 */,
		0x06A2 /* JBfstore2 - 69 */,
		0x06B2 /* JBfstore3 - 70 */,
		0x0683 /* JBdstore0 - 71 */,
		0x0693 /* JBdstore1 - 72 */,
		0x06A3 /* JBdstore2 - 73 */,
		0x06B3 /* JBdstore3 - 74 */,
		0x0687 /* JBastore0 - 75 */,
		0x0697 /* JBastore1 - 76 */,
		0x06A7 /* JBastore2 - 77 */,
		0x06B7 /* JBastore3 - 78 */,
		0x0701 /* JBiastore - 79 */,
		0x0704 /* JBlastore - 80 */,
		0x0702 /* JBfastore - 81 */,
		0x0703 /* JBdastore - 82 */,
		0x0707 /* JBaastore - 83 */,
		0x0701 /* JBbastore - 84 */,
		0x0701 /* JBcastore - 85 */,
		0x0701 /* JBsastore - 86 */,
		0x1800 /* JBpop - 87 */,
		0x1900 /* JBpop2 - 88 */,
		0x1A00 /* JBdup - 89 */,
		0x1B00 /* JBdupx1 - 90 */,
		0x1C00 /* JBdupx2 - 91 */,
		0x1D00 /* JBdup2 - 92 */,
		0x1E00 /* JBdup2x1 - 93 */,
		0x1F00 /* JBdup2x2 - 94 */,
		0x2000 /* JBswap - 95 */,
		0x0901 /* JBiadd - 96 */,
		0x0904 /* JBladd - 97 */,
		0x0902 /* JBfadd - 98 */,
		0x0903 /* JBdadd - 99 */,
		0x0901 /* JBisub - 100 */,
		0x0904 /* JBlsub - 101 */,
		0x0902 /* JBfsub - 102 */,
		0x0903 /* JBdsub - 103 */,
		0x0901 /* JBimul - 104 */,
		0x0904 /* JBlmul - 105 */,
		0x0902 /* JBfmul - 106 */,
		0x0903 /* JBdmul - 107 */,
		0x0901 /* JBidiv - 108 */,
		0x0904 /* JBldiv - 109 */,
		0x0902 /* JBfdiv - 110 */,
		0x0903 /* JBddiv - 111 */,
		0x0901 /* JBirem - 112 */,
		0x0904 /* JBlrem - 113 */,
		0x0902 /* JBfrem - 114 */,
		0x0903 /* JBdrem - 115 */,
		0x0A01 /* JBineg - 116 */,
		0x0A04 /* JBlneg - 117 */,
		0x0A02 /* JBfneg - 118 */,
		0x0A03 /* JBdneg - 119 */,
		0x0A11 /* JBishl - 120 */,
		0x0A14 /* JBlshl - 121 */,
		0x0A11 /* JBishr - 122 */,
		0x0A14 /* JBlshr - 123 */,
		0x0A11 /* JBiushr - 124 */,
		0x0A14 /* JBlushr - 125 */,
		0x0901 /* JBiand - 126 */,
		0x0904 /* JBland - 127 */,
		0x0901 /* JBior - 128 */,
		0x0904 /* JBlor - 129 */,
		0x0901 /* JBixor - 130 */,
		0x0904 /* JBlxor - 131 */,
		0x0800 /* JBiinc - 132 */,
		0x0B41 /* JBi2l - 133 */,
		0x0B21 /* JBi2f - 134 */,
		0x0B31 /* JBi2d - 135 */,
		0x0B14 /* JBl2i - 136 */,
		0x0B24 /* JBl2f - 137 */,
		0x0B34 /* JBl2d - 138 */,
		0x0B12 /* JBf2i - 139 */,
		0x0B42 /* JBf2l - 140 */,
		0x0B32 /* JBf2d - 141 */,
		0x0B13 /* JBd2i - 142 */,
		0x0B43 /* JBd2l - 143 */,
		0x0B23 /* JBd2f - 144 */,
		0x0A01 /* JBi2b - 145 */,
		0x0A01 /* JBi2c - 146 */,
		0x0A01 /* JBi2s - 147 */,
		0x1604 /* JBlcmp - 148 */,
		0x1602 /* JBfcmpl - 149 */,
		0x1602 /* JBfcmpg - 150 */,
		0x1603 /* JBdcmpl - 151 */,
		0x1603 /* JBdcmpg - 152 */,
		0x0E91 /* JBifeq - 153 */,
		0x0E91 /* JBifne - 154 */,
		0x0E91 /* JBiflt - 155 */,
		0x0E91 /* JBifge - 156 */,
		0x0E91 /* JBifgt - 157 */,
		0x0E91 /* JBifle - 158 */,
		0x0EA1 /* JBificmpeq - 159 */,
		0x0EA1 /* JBificmpne - 160 */,
		0x0EA1 /* JBificmplt - 161 */,
		0x0EA1 /* JBificmpge - 162 */,
		0x0EA1 /* JBificmpgt - 163 */,
		0x0EA1 /* JBificmple - 164 */,
		0x0EA7 /* JBifacmpeq - 165 */,
		0x0EA7 /* JBifacmpne - 166 */,
		0x0E85 /* JBgoto - 167 */,
		0x1700 /* JBunimplemented - 168 */,
		0x1700 /* JBunimplemented - 169 */,
		0x1300 /* JBtableswitch - 170 */,
		0x1300 /* JBlookupswitch - 171 */,
		0x0F00 /* JBreturn0 - 172 */,
		0x0F00 /* JBreturn1 - 173 */,
		0x0F00 /* JBreturn2 - 174 */,
		0x0F00 /* JBsyncReturn0 - 175 */,
		0x0F00 /* JBsyncReturn1 - 176 */,
		0x0F00 /* JBsyncReturn2 - 177 */,
		0x1000 /* JBgetstatic - 178 */,
		0x1000 /* JBputstatic - 179 */,
		0x1000 /* JBgetfield - 180 */,
		0x1000 /* JBputfield - 181 */,
		0x1100 /* JBinvokevirtual - 182 */,
		0x1100 /* JBinvokespecial - 183 */,
		0x1100 /* JBinvokestatic - 184 */,
		0x1100 /* JBinvokeinterface - 185 */,
		0x1100 /* JBinvokedynamic - 186 */,
		0x1200 /* JBnew - 187 */,
		0x1200 /* JBnewarray - 188 */,
		0x1200 /* JBanewarray - 189 */,
		0x1300 /* JBarraylength - 190 */,
		0x1300 /* JBathrow - 191 */,
		0x1300 /* JBcheckcast - 192 */,
		0x1300 /* JBinstanceof - 193 */,
		0x1300 /* JBmonitorenter - 194 */,
		0x1300 /* JBmonitorexit - 195 */,
		0x1700 /* JBunimplemented - 196 */,
		0x1200 /* JBmultianewarray - 197 */,
		0x0E97 /* JBifnull - 198 */,
		0x0E97 /* JBifnonnull - 199 */,
		0x0E85 /* JBgotow - 200 */,
		0x1700 /* JBunimplemented - 201 */,
		0x1700 /* JBbreakpoint - 202 */,
#ifdef PDB_DEBUG
		0x1200 /* JBdefaultvalue = 203 */,
		0x1000 /* JBwithfield = 204 */,
#else
		0x1700 /* JBunimplemented - 205 */,
		0x1700 /* JBunimplemented - 206 */,
#endif
		0x1700 /* JBunimplemented - 205 */,
		0x1700 /* JBunimplemented - 206 */,
		0x1700 /* JBunimplemented - 207 */,
		0x1700 /* JBunimplemented - 208 */,
		0x1700 /* JBunimplemented - 209 */,
		0x1700 /* JBunimplemented - 210 */,
		0x1700 /* JBunimplemented - 211 */,
		0x1700 /* JBunimplemented - 212 */,
		0x0800 /* JBiincw - 213 */,
		0x1700 /* JBunimplemented - 214 */,
		0x0487 /* JBaload0getfield - 215 */,
		0x1200 /* JBnewdup - 216 */,
		0x1401 /* JBiloadw - 217 */,
		0x1404 /* JBlloadw - 218 */,
		0x1402 /* JBfloadw - 219 */,
		0x1403 /* JBdloadw - 220 */,
		0x1407 /* JBaloadw - 221 */,
		0x1501 /* JBistorew - 222 */,
		0x1504 /* JBlstorew - 223 */,
		0x1502 /* JBfstorew - 224 */,
		0x1503 /* JBdstorew - 225 */,
		0x1507 /* JBastorew - 226 */,
		0x1700 /* JBunimplemented - 227 */,
		0x0F00 /* JBreturnFromConstructor - 228 */,
		0x0F00 /* JBgenericReturn - 229 */,
		0x1700 /* JBunimplemented - 230 */,
		0x1100 /* JBinvokeinterface2 - 231 */,
		0x1100 /* JBinvokehandle - 232 */,
		0x1100 /* JBinvokehandlegeneric - 233 */,
		0x1100 /* JBinvokestaticsplit - 234 */,
		0x1100 /* JBinvokespecialsplit - 235 */,
		0x0F00 /* JBreturnC - 236 */,
		0x0F00 /* JBreturnS - 237 */,
		0x0F00 /* JBreturnB - 238 */,
		0x0F00 /* JBreturnZ - 239 */,
		0x1700 /* JBunimplemented - 240 */,
		0x1700 /* JBunimplemented - 241 */,
		0x1700 /* JBunimplemented - 242 */,
		0x1700 /* JBunimplemented - 243 */,
		0x1700 /* JBretFromNative0 - 244 */,
		0x1700 /* JBretFromNative1 - 245 */,
		0x1700 /* JBretFromNativeF - 246 */,
		0x1700 /* JBretFromNativeD - 247 */,
		0x1700 /* JBretFromNativeJ - 248 */,
		0x0300 /* JBldc2dw - 249 */,
		0x0100 /* JBasyncCheck - 250 */,
		0x0100 /* JBreturnFromJ2I - 251 */,
		0x1700 /* JBunimplemented - 252 */,
		0x1700 /* JBunimplemented - 253 */,
		0x1700 /* JBimpdep1 - 254 */,
		0x1700 /* JBimpdep2 - 255 */
};


/* map the Java array types (T_BOOLEAN . . . T_LONG) to verification types */
const U_32 J9JavaArrayTypeVerificationTable[] = {
	0x00000402,
	0x00000802,
	0x00000042,
	0x00000102,
	0x00000402,
	0x00000202,
	0x00000022,
	0x00000082, };

/* map the array bytecodes to array types */
const U_32 J9JavaBytecodeArrayTypeTable[] = {
	0x00000022 ,
	0x00000082 ,
	0x00000042 ,
	0x00000102 ,
	0x00000002 ,
	0x00000402 ,
	0x00000802 ,
	0x00000202 ,  };

