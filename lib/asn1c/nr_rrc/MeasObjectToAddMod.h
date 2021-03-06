/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_MeasObjectToAddMod_H_
#define	_MeasObjectToAddMod_H_


#include "asn_application.h"

/* Including external dependencies */
#include "MeasObjectId.h"
#include "MeasObjectNR.h"
#include "MeasObjectEUTRA.h"
#include "MeasObjectUTRA-FDD-r16.h"
#include "MeasObjectNR-SL-r16.h"
#include "MeasObjectCLI-r16.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasObjectToAddMod__measObject_PR {
	MeasObjectToAddMod__measObject_PR_NOTHING,	/* No components present */
	MeasObjectToAddMod__measObject_PR_measObjectNR,
	/* Extensions may appear below */
	MeasObjectToAddMod__measObject_PR_measObjectEUTRA,
	MeasObjectToAddMod__measObject_PR_measObjectUTRA_FDD_r16,
	MeasObjectToAddMod__measObject_PR_measObjectNR_SL_r16,
	MeasObjectToAddMod__measObject_PR_measObjectCLI_r16
} MeasObjectToAddMod__measObject_PR;

/* MeasObjectToAddMod */
typedef struct MeasObjectToAddMod {
	MeasObjectId_t	 measObjectId;
	struct MeasObjectToAddMod__measObject {
		MeasObjectToAddMod__measObject_PR present;
		union MeasObjectToAddMod__measObject_u {
			MeasObjectNR_t	 measObjectNR;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			MeasObjectEUTRA_t	 measObjectEUTRA;
			MeasObjectUTRA_FDD_r16_t	 measObjectUTRA_FDD_r16;
			MeasObjectNR_SL_r16_t	 measObjectNR_SL_r16;
			MeasObjectCLI_r16_t	 measObjectCLI_r16;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measObject;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasObjectToAddMod_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasObjectToAddMod;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasObjectToAddMod_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasObjectToAddMod_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasObjectToAddMod_H_ */
#include "asn_internal.h"
