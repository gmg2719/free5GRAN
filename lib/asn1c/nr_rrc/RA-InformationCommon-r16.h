/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_RA_InformationCommon_r16_H_
#define	_RA_InformationCommon_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ARFCN-ValueNR.h"
#include "NativeInteger.h"
#include "SubcarrierSpacing.h"
#include "NativeEnumerated.h"
#include "PerRAInfoList-r16.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RA_InformationCommon_r16__msg1_FDM_r16 {
	RA_InformationCommon_r16__msg1_FDM_r16_one	= 0,
	RA_InformationCommon_r16__msg1_FDM_r16_two	= 1,
	RA_InformationCommon_r16__msg1_FDM_r16_four	= 2,
	RA_InformationCommon_r16__msg1_FDM_r16_eight	= 3
} e_RA_InformationCommon_r16__msg1_FDM_r16;
typedef enum RA_InformationCommon_r16__msg1_FDMCFRA_r16 {
	RA_InformationCommon_r16__msg1_FDMCFRA_r16_one	= 0,
	RA_InformationCommon_r16__msg1_FDMCFRA_r16_two	= 1,
	RA_InformationCommon_r16__msg1_FDMCFRA_r16_four	= 2,
	RA_InformationCommon_r16__msg1_FDMCFRA_r16_eight	= 3
} e_RA_InformationCommon_r16__msg1_FDMCFRA_r16;

/* RA-InformationCommon-r16 */
typedef struct RA_InformationCommon_r16 {
	ARFCN_ValueNR_t	 absoluteFrequencyPointA_r16;
	long	 locationAndBandwidth_r16;
	SubcarrierSpacing_t	 subcarrierSpacing_r16;
	long	*msg1_FrequencyStart_r16	/* OPTIONAL */;
	long	*msg1_FrequencyStartCFRA_r16	/* OPTIONAL */;
	SubcarrierSpacing_t	*msg1_SubcarrierSpacing_r16	/* OPTIONAL */;
	SubcarrierSpacing_t	*msg1_SubcarrierSpacingCFRA_r16	/* OPTIONAL */;
	long	*msg1_FDM_r16	/* OPTIONAL */;
	long	*msg1_FDMCFRA_r16	/* OPTIONAL */;
	PerRAInfoList_r16_t	 perRAInfoList_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RA_InformationCommon_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_msg1_FDM_r16_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_msg1_FDMCFRA_r16_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RA_InformationCommon_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_RA_InformationCommon_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_RA_InformationCommon_r16_1[10];

#ifdef __cplusplus
}
#endif

#endif	/* _RA_InformationCommon_r16_H_ */
#include "asn_internal.h"
