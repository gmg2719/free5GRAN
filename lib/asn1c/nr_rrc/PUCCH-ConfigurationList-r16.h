/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_PUCCH_ConfigurationList_r16_H_
#define	_PUCCH_ConfigurationList_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PUCCH_Config;

/* PUCCH-ConfigurationList-r16 */
typedef struct PUCCH_ConfigurationList_r16 {
	A_SEQUENCE_OF(struct PUCCH_Config) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUCCH_ConfigurationList_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUCCH_ConfigurationList_r16;
extern asn_SET_OF_specifics_t asn_SPC_PUCCH_ConfigurationList_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_PUCCH_ConfigurationList_r16_1[1];
extern asn_per_constraints_t asn_PER_type_PUCCH_ConfigurationList_r16_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PUCCH-Config.h"

#endif	/* _PUCCH_ConfigurationList_r16_H_ */
#include "asn_internal.h"
