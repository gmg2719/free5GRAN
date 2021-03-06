/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_SIB4_H_
#define	_SIB4_H_


#include "asn_application.h"

/* Including external dependencies */
#include "InterFreqCarrierFreqList.h"
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterFreqCarrierFreqList_v1610;

/* SIB4 */
typedef struct SIB4 {
	InterFreqCarrierFreqList_t	 interFreqCarrierFreqList;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct InterFreqCarrierFreqList_v1610	*interFreqCarrierFreqList_v1610	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIB4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SIB4;
extern asn_SEQUENCE_specifics_t asn_SPC_SIB4_specs_1;
extern asn_TYPE_member_t asn_MBR_SIB4_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InterFreqCarrierFreqList-v1610.h"

#endif	/* _SIB4_H_ */
#include "asn_internal.h"
