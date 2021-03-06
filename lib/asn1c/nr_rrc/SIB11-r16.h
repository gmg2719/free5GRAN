/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_SIB11_r16_H_
#define	_SIB11_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasIdleConfigSIB_r16;

/* SIB11-r16 */
typedef struct SIB11_r16 {
	struct MeasIdleConfigSIB_r16	*measIdleConfigSIB_r16	/* OPTIONAL */;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIB11_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SIB11_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_SIB11_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_SIB11_r16_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasIdleConfigSIB-r16.h"

#endif	/* _SIB11_r16_H_ */
#include "asn_internal.h"
