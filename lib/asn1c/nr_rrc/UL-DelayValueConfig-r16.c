/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "UL-DelayValueConfig-r16.h"

static int
memb_delay_DRBlist_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 29)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_delay_DRBlist_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..29)) */};
static asn_per_constraints_t asn_PER_type_delay_DRBlist_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  29 }	/* (SIZE(1..29)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_delay_DRBlist_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..29)) */};
static asn_per_constraints_t asn_PER_memb_delay_DRBlist_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  29 }	/* (SIZE(1..29)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_delay_DRBlist_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_DRB_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_delay_DRBlist_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_delay_DRBlist_specs_2 = {
	sizeof(struct UL_DelayValueConfig_r16__delay_DRBlist),
	offsetof(struct UL_DelayValueConfig_r16__delay_DRBlist, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_delay_DRBlist_2 = {
	"delay-DRBlist",
	"delay-DRBlist",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_delay_DRBlist_tags_2,
	sizeof(asn_DEF_delay_DRBlist_tags_2)
		/sizeof(asn_DEF_delay_DRBlist_tags_2[0]) - 1, /* 1 */
	asn_DEF_delay_DRBlist_tags_2,	/* Same as above */
	sizeof(asn_DEF_delay_DRBlist_tags_2)
		/sizeof(asn_DEF_delay_DRBlist_tags_2[0]), /* 2 */
	{ &asn_OER_type_delay_DRBlist_constr_2, &asn_PER_type_delay_DRBlist_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_delay_DRBlist_2,
	1,	/* Single element */
	&asn_SPC_delay_DRBlist_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UL_DelayValueConfig_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DelayValueConfig_r16, delay_DRBlist),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_delay_DRBlist_2,
		0,
		{ &asn_OER_memb_delay_DRBlist_constr_2, &asn_PER_memb_delay_DRBlist_constr_2,  memb_delay_DRBlist_constraint_1 },
		0, 0, /* No default value */
		"delay-DRBlist"
		},
};
static const ber_tlv_tag_t asn_DEF_UL_DelayValueConfig_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UL_DelayValueConfig_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* delay-DRBlist */
};
asn_SEQUENCE_specifics_t asn_SPC_UL_DelayValueConfig_r16_specs_1 = {
	sizeof(struct UL_DelayValueConfig_r16),
	offsetof(struct UL_DelayValueConfig_r16, _asn_ctx),
	asn_MAP_UL_DelayValueConfig_r16_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UL_DelayValueConfig_r16 = {
	"UL-DelayValueConfig-r16",
	"UL-DelayValueConfig-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_UL_DelayValueConfig_r16_tags_1,
	sizeof(asn_DEF_UL_DelayValueConfig_r16_tags_1)
		/sizeof(asn_DEF_UL_DelayValueConfig_r16_tags_1[0]), /* 1 */
	asn_DEF_UL_DelayValueConfig_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_UL_DelayValueConfig_r16_tags_1)
		/sizeof(asn_DEF_UL_DelayValueConfig_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UL_DelayValueConfig_r16_1,
	1,	/* Elements count */
	&asn_SPC_UL_DelayValueConfig_r16_specs_1	/* Additional specs */
};

