/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_CondReconfigToAddMod_r16_H_
#define	_CondReconfigToAddMod_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "CondReconfigId-r16.h"
#include "OCTET_STRING.h"
#include "MeasId.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CondReconfigToAddMod-r16 */
typedef struct CondReconfigToAddMod_r16 {
	CondReconfigId_r16_t	 condReconfigId_r16;
	struct CondReconfigToAddMod_r16__condExecutionCond_r16 {
		A_SEQUENCE_OF(MeasId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *condExecutionCond_r16;
	OCTET_STRING_t	*condRRCReconfig_r16	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CondReconfigToAddMod_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CondReconfigToAddMod_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_CondReconfigToAddMod_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_CondReconfigToAddMod_r16_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _CondReconfigToAddMod_r16_H_ */
#include "asn_internal.h"
