// This file contains build options to enable/disable the custom
// modifications to this fork of the 'convertf' utility from the Eigensoft package.
//
// The original Eigensoft source code is property of the David Reich Lab at
// Harvard University (https://reich.hms.harvard.edu) and is available at
// https://github.com/DReichLab/EIG
//
// The modifications in this fork are made by David Smith (https://github.com/300bps) at
// https://github.com/300bps/Eigensoft-EIG-
// All changes made to this software are released to the public domain via the MIT license.
//
// David Smith
// 1/9/2023
//
// Modified Version: M1.0.0
//
// Changes:
//  * Added build flag to force ANCESTRYMAP (not PACKEDANCESTRYMAP) outputs to be unpacked regardless of resulting file size.
//  * Added build flags to specify ANCESTRYMAP geno, ind, and snp files be tab ('\t') separated instead of whitespace-separated to greatly reduce unpacked output file size.



// ** MODIFICATION BUILD CONFIGURATION OPTIONS **
// NOTE: These options can be enabled/disabled by setting the define to YES or NO respectively

// Prevent automatically switching to PACKEDANCESTRYMAP format for large files when ANCESTRYMAP is specified as the 'outputformat' in the .par file
#define FORCE_UNPACKED_ANCESTRYMAP              YES

// Use tab separated ANCESTRYMAP geno file output instead of discrete spaces. Greatly reduces resulting file size.
#define TAB_SEPARATED_ANCESTRYMAP_GENO          YES

// Use tab separated ANCESTRYMAP ind file output instead of discrete spaces. Greatly reduces resulting file size.
#define TAB_SEPARATED_ANCESTRYMAP_IND           YES

// Use tab separated ANCESTRYMAP snp file output instead of discrete spaces. Greatly reduces resulting file size.
#define TAB_SEPARATED_ANCESTRYMAP_SNP           YES
