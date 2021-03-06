/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_RRCReconfigurationComplete_v1610_IEs_H_
#define	_RRCReconfigurationComplete_v1610_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_MeasurementsAvailable_r16;
struct NeedForGapsInfoNR_r16;

/* RRCReconfigurationComplete-v1610-IEs */
typedef struct RRCReconfigurationComplete_v1610_IEs {
	struct UE_MeasurementsAvailable_r16	*ue_MeasurementsAvailable_r16	/* OPTIONAL */;
	struct NeedForGapsInfoNR_r16	*needForGapsInfoNR_r16	/* OPTIONAL */;
	struct RRCReconfigurationComplete_v1610_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCReconfigurationComplete_v1610_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCReconfigurationComplete_v1610_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCReconfigurationComplete_v1610_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCReconfigurationComplete_v1610_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-MeasurementsAvailable-r16.h"
#include "NeedForGapsInfoNR-r16.h"

#endif	/* _RRCReconfigurationComplete_v1610_IEs_H_ */
#include "asn_internal.h"
