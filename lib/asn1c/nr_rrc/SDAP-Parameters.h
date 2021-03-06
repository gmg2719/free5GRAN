/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_SDAP_Parameters_H_
#define	_SDAP_Parameters_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SDAP_Parameters__as_ReflectiveQoS {
	SDAP_Parameters__as_ReflectiveQoS_true	= 0
} e_SDAP_Parameters__as_ReflectiveQoS;
typedef enum SDAP_Parameters__sdap_QOS_IAB_r16 {
	SDAP_Parameters__sdap_QOS_IAB_r16_supported	= 0
} e_SDAP_Parameters__sdap_QOS_IAB_r16;
typedef enum SDAP_Parameters__sdapHeaderIAB_r16 {
	SDAP_Parameters__sdapHeaderIAB_r16_supported	= 0
} e_SDAP_Parameters__sdapHeaderIAB_r16;

/* SDAP-Parameters */
typedef struct SDAP_Parameters {
	long	*as_ReflectiveQoS	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	long	*sdap_QOS_IAB_r16	/* OPTIONAL */;
	long	*sdapHeaderIAB_r16	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SDAP_Parameters_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_as_ReflectiveQoS_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sdap_QOS_IAB_r16_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sdapHeaderIAB_r16_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SDAP_Parameters;
extern asn_SEQUENCE_specifics_t asn_SPC_SDAP_Parameters_specs_1;
extern asn_TYPE_member_t asn_MBR_SDAP_Parameters_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SDAP_Parameters_H_ */
#include "asn_internal.h"
