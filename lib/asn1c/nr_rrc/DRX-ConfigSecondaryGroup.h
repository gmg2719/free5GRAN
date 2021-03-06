/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_DRX_ConfigSecondaryGroup_H_
#define	_DRX_ConfigSecondaryGroup_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "NativeInteger.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DRX_ConfigSecondaryGroup__drx_onDurationTimer_PR {
	DRX_ConfigSecondaryGroup__drx_onDurationTimer_PR_NOTHING,	/* No components present */
	DRX_ConfigSecondaryGroup__drx_onDurationTimer_PR_subMilliSeconds,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer_PR_milliSeconds
} DRX_ConfigSecondaryGroup__drx_onDurationTimer_PR;
typedef enum DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds {
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_ms1	= 0,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_ms2	= 1,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_ms3	= 2,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_ms4	= 3,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_ms5	= 4,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_ms6	= 5,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_ms8	= 6,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_ms10	= 7,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_ms20	= 8,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_ms30	= 9,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_ms40	= 10,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_ms50	= 11,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_ms60	= 12,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_ms80	= 13,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_ms100	= 14,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_ms200	= 15,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_ms300	= 16,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_ms400	= 17,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_ms500	= 18,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_ms600	= 19,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_ms800	= 20,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_ms1000	= 21,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_ms1200	= 22,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_ms1600	= 23,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_spare8	= 24,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_spare7	= 25,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_spare6	= 26,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_spare5	= 27,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_spare4	= 28,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_spare3	= 29,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_spare2	= 30,
	DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds_spare1	= 31
} e_DRX_ConfigSecondaryGroup__drx_onDurationTimer__milliSeconds;
typedef enum DRX_ConfigSecondaryGroup__drx_InactivityTimer {
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_ms0	= 0,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_ms1	= 1,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_ms2	= 2,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_ms3	= 3,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_ms4	= 4,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_ms5	= 5,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_ms6	= 6,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_ms8	= 7,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_ms10	= 8,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_ms20	= 9,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_ms30	= 10,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_ms40	= 11,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_ms50	= 12,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_ms60	= 13,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_ms80	= 14,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_ms100	= 15,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_ms200	= 16,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_ms300	= 17,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_ms500	= 18,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_ms750	= 19,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_ms1280	= 20,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_ms1920	= 21,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_ms2560	= 22,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_spare9	= 23,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_spare8	= 24,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_spare7	= 25,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_spare6	= 26,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_spare5	= 27,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_spare4	= 28,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_spare3	= 29,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_spare2	= 30,
	DRX_ConfigSecondaryGroup__drx_InactivityTimer_spare1	= 31
} e_DRX_ConfigSecondaryGroup__drx_InactivityTimer;

/* DRX-ConfigSecondaryGroup */
typedef struct DRX_ConfigSecondaryGroup {
	struct DRX_ConfigSecondaryGroup__drx_onDurationTimer {
		DRX_ConfigSecondaryGroup__drx_onDurationTimer_PR present;
		union DRX_ConfigSecondaryGroup__drx_onDurationTimer_u {
			long	 subMilliSeconds;
			long	 milliSeconds;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} drx_onDurationTimer;
	long	 drx_InactivityTimer;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRX_ConfigSecondaryGroup_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_milliSeconds_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_drx_InactivityTimer_37;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DRX_ConfigSecondaryGroup;
extern asn_SEQUENCE_specifics_t asn_SPC_DRX_ConfigSecondaryGroup_specs_1;
extern asn_TYPE_member_t asn_MBR_DRX_ConfigSecondaryGroup_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _DRX_ConfigSecondaryGroup_H_ */
#include "asn_internal.h"
