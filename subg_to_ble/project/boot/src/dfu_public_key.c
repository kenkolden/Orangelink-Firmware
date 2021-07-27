
/* This file was automatically generated by nrfutil on 2019-02-14 (YY-MM-DD) at 14:06:19 */

#include "sdk_config.h"
#include "stdint.h"
#include "compiler_abstraction.h"

#if NRF_CRYPTO_BACKEND_OBERON_ENABLED
/* Oberon backend is changing endianness thus public key must be kept in RAM. */
#define _PK_CONST
#else
#define _PK_CONST const
#endif


/* This file was generated with a throwaway private key, that is only inteded for a debug version of the DFU project.
  Please see https://github.com/NordicSemiconductor/pc-nrfutil/blob/master/README.md to generate a valid public key. */

#ifdef NRF_DFU_DEBUG_VERSION 

/** @brief Public key used to verify DFU images */
__ALIGN(4) _PK_CONST uint8_t pk[64] =
{
    0x0e, 0xdf, 0x9f, 0xc8, 0xe6, 0x7b, 0x4e, 0x1a, 0xce, 0xe8, 0x6f, 0x86, 0xe2, 0x91, 0xc2, 0x98, 0x42, 0xc0, 0x23, 0x72, 0xfc, 0x76, 0xe6, 0xd2, 0xf7, 0x74, 0xfc, 0x09, 0x9f, 0xbf, 0x88, 0x5a, 
    0x79, 0x78, 0xd4, 0x2f, 0xcb, 0x27, 0x84, 0xb1, 0xd1, 0x82, 0x70, 0xf9, 0xe0, 0x14, 0xf9, 0x49, 0xa4, 0x47, 0xe9, 0x33, 0xaf, 0x7d, 0x07, 0x1d, 0xd0, 0x93, 0x4b, 0xd2, 0x93, 0x8b, 0xe6, 0x20
};

#else
/** @brief Public key used to verify DFU images */

	#ifdef BOARD_XH601 
	__ALIGN(4) const uint8_t pk[64] =
	{
	    0xcf, 0x4c, 0x65, 0x0d, 0x0b, 0x44, 0x48, 0x77, 0x63, 0x9e, 0xd2, 0x5f, 0x70, 0xc2, 0xd7, 0x38, 0xd0, 0x93, 0xb5, 0x39, 0xad, 0xfe, 0xd5, 0xfc, 0x4b, 0xdb, 0x25, 0x6f, 0xb4, 0x14, 0xe0, 0x33, 
	    0xbe, 0xf3, 0x3a, 0x7d, 0x78, 0xef, 0x46, 0xd7, 0xfe, 0xcf, 0xda, 0x49, 0xd0, 0x5c, 0x10, 0x74, 0x50, 0x17, 0xe1, 0x80, 0x53, 0xc3, 0xb1, 0xd5, 0xf7, 0xdf, 0x19, 0x18, 0xa6, 0x14, 0x1d, 0xec
	};
	#elif defined(BOARD_XH_5102)
	__ALIGN(4) const uint8_t pk[64] =
	{
	    0xe4, 0xa5, 0x29, 0x33, 0x3e, 0x15, 0x34, 0x7c, 0xc3, 0x7c, 0x01, 0xb2, 0xab, 0xd3, 0x7a, 0xfe, 0x66, 0x4f, 0xa2, 0x05, 0xfe, 0x68, 0xce, 0xf5, 0x42, 0xb2, 0x9f, 0x0b, 0xe8, 0x48, 0xe9, 0xfb, 
	    0x36, 0x8a, 0xe8, 0x4c, 0x1d, 0xa7, 0x30, 0x63, 0x52, 0xdc, 0x1f, 0x7e, 0x34, 0x42, 0x1e, 0x24, 0xba, 0x08, 0x66, 0xb1, 0xb6, 0xa6, 0x89, 0x79, 0x01, 0x0d, 0x47, 0x47, 0xb5, 0xfb, 0x49, 0xcf
	};
	#else
	#error
	#endif
	
#endif
