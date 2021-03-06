/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_MeasRSSI_ReportConfig_r16_H_
#define	_MeasRSSI_ReportConfig_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RSSI-Range-r16.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MeasRSSI-ReportConfig-r16 */
typedef struct MeasRSSI_ReportConfig_r16 {
	RSSI_Range_r16_t	*channelOccupancyThreshold_r16	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasRSSI_ReportConfig_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasRSSI_ReportConfig_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasRSSI_ReportConfig_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasRSSI_ReportConfig_r16_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasRSSI_ReportConfig_r16_H_ */
#include "asn_internal.h"
