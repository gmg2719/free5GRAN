/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "MAC-MainConfigSL-r16.h"

static int
memb_ul_PrioritizationThres_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_sl_PrioritizationThres_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_ul_PrioritizationThres_r16_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (1..16) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ul_PrioritizationThres_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (1..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sl_PrioritizationThres_r16_constr_4 CC_NOTUSED = {
	{ 1, 1 }	/* (1..8) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sl_PrioritizationThres_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_MAC_MainConfigSL_r16_1[] = {
	{ ATF_POINTER, 3, offsetof(struct MAC_MainConfigSL_r16, sl_BSR_Config_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BSR_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-BSR-Config-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct MAC_MainConfigSL_r16, ul_PrioritizationThres_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ul_PrioritizationThres_r16_constr_3, &asn_PER_memb_ul_PrioritizationThres_r16_constr_3,  memb_ul_PrioritizationThres_r16_constraint_1 },
		0, 0, /* No default value */
		"ul-PrioritizationThres-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct MAC_MainConfigSL_r16, sl_PrioritizationThres_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sl_PrioritizationThres_r16_constr_4, &asn_PER_memb_sl_PrioritizationThres_r16_constr_4,  memb_sl_PrioritizationThres_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-PrioritizationThres-r16"
		},
};
static const int asn_MAP_MAC_MainConfigSL_r16_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_MAC_MainConfigSL_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MAC_MainConfigSL_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-BSR-Config-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-PrioritizationThres-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* sl-PrioritizationThres-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_MAC_MainConfigSL_r16_specs_1 = {
	sizeof(struct MAC_MainConfigSL_r16),
	offsetof(struct MAC_MainConfigSL_r16, _asn_ctx),
	asn_MAP_MAC_MainConfigSL_r16_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MAC_MainConfigSL_r16_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MAC_MainConfigSL_r16 = {
	"MAC-MainConfigSL-r16",
	"MAC-MainConfigSL-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_MAC_MainConfigSL_r16_tags_1,
	sizeof(asn_DEF_MAC_MainConfigSL_r16_tags_1)
		/sizeof(asn_DEF_MAC_MainConfigSL_r16_tags_1[0]), /* 1 */
	asn_DEF_MAC_MainConfigSL_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_MAC_MainConfigSL_r16_tags_1)
		/sizeof(asn_DEF_MAC_MainConfigSL_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MAC_MainConfigSL_r16_1,
	3,	/* Elements count */
	&asn_SPC_MAC_MainConfigSL_r16_specs_1	/* Additional specs */
};

