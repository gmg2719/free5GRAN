/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "RRCReconfiguration-v1610-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_dedicatedPosSysInfoDelivery_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		(void)st; /* Unused variable */
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_oer_constraints_t asn_OER_type_bap_Config_r16_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_bap_Config_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_daps_SourceRelease_r16_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_daps_SourceRelease_r16_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_t316_r16_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_t316_r16_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_needForGapsConfigNR_r16_constr_13 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_needForGapsConfigNR_r16_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_onDemandSIB_Request_r16_constr_16 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_onDemandSIB_Request_r16_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_sl_ConfigDedicatedNR_r16_constr_20 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_sl_ConfigDedicatedNR_r16_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_sl_ConfigDedicatedEUTRA_Info_r16_constr_23 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_sl_ConfigDedicatedEUTRA_Info_r16_constr_23 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_dedicatedPosSysInfoDelivery_r16_constr_19 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_memb_dedicatedPosSysInfoDelivery_r16_constr_19 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_bap_Config_r16_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCReconfiguration_v1610_IEs__bap_Config_r16, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCReconfiguration_v1610_IEs__bap_Config_r16, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_BAP_Config_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_bap_Config_r16_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_bap_Config_r16_specs_3 = {
	sizeof(struct RRCReconfiguration_v1610_IEs__bap_Config_r16),
	offsetof(struct RRCReconfiguration_v1610_IEs__bap_Config_r16, _asn_ctx),
	offsetof(struct RRCReconfiguration_v1610_IEs__bap_Config_r16, present),
	sizeof(((struct RRCReconfiguration_v1610_IEs__bap_Config_r16 *)0)->present),
	asn_MAP_bap_Config_r16_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bap_Config_r16_3 = {
	"bap-Config-r16",
	"bap-Config-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_bap_Config_r16_constr_3, &asn_PER_type_bap_Config_r16_constr_3, CHOICE_constraint },
	asn_MBR_bap_Config_r16_3,
	2,	/* Elements count */
	&asn_SPC_bap_Config_r16_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_daps_SourceRelease_r16_value2enum_8[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_daps_SourceRelease_r16_enum2value_8[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_daps_SourceRelease_r16_specs_8 = {
	asn_MAP_daps_SourceRelease_r16_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_daps_SourceRelease_r16_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_daps_SourceRelease_r16_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_daps_SourceRelease_r16_8 = {
	"daps-SourceRelease-r16",
	"daps-SourceRelease-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_daps_SourceRelease_r16_tags_8,
	sizeof(asn_DEF_daps_SourceRelease_r16_tags_8)
		/sizeof(asn_DEF_daps_SourceRelease_r16_tags_8[0]) - 1, /* 1 */
	asn_DEF_daps_SourceRelease_r16_tags_8,	/* Same as above */
	sizeof(asn_DEF_daps_SourceRelease_r16_tags_8)
		/sizeof(asn_DEF_daps_SourceRelease_r16_tags_8[0]), /* 2 */
	{ &asn_OER_type_daps_SourceRelease_r16_constr_8, &asn_PER_type_daps_SourceRelease_r16_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_daps_SourceRelease_r16_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_t316_r16_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCReconfiguration_v1610_IEs__t316_r16, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCReconfiguration_v1610_IEs__t316_r16, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_T316_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_t316_r16_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_t316_r16_specs_10 = {
	sizeof(struct RRCReconfiguration_v1610_IEs__t316_r16),
	offsetof(struct RRCReconfiguration_v1610_IEs__t316_r16, _asn_ctx),
	offsetof(struct RRCReconfiguration_v1610_IEs__t316_r16, present),
	sizeof(((struct RRCReconfiguration_v1610_IEs__t316_r16 *)0)->present),
	asn_MAP_t316_r16_tag2el_10,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t316_r16_10 = {
	"t316-r16",
	"t316-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_t316_r16_constr_10, &asn_PER_type_t316_r16_constr_10, CHOICE_constraint },
	asn_MBR_t316_r16_10,
	2,	/* Elements count */
	&asn_SPC_t316_r16_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_needForGapsConfigNR_r16_13[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCReconfiguration_v1610_IEs__needForGapsConfigNR_r16, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCReconfiguration_v1610_IEs__needForGapsConfigNR_r16, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NeedForGapsConfigNR_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_needForGapsConfigNR_r16_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_needForGapsConfigNR_r16_specs_13 = {
	sizeof(struct RRCReconfiguration_v1610_IEs__needForGapsConfigNR_r16),
	offsetof(struct RRCReconfiguration_v1610_IEs__needForGapsConfigNR_r16, _asn_ctx),
	offsetof(struct RRCReconfiguration_v1610_IEs__needForGapsConfigNR_r16, present),
	sizeof(((struct RRCReconfiguration_v1610_IEs__needForGapsConfigNR_r16 *)0)->present),
	asn_MAP_needForGapsConfigNR_r16_tag2el_13,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_needForGapsConfigNR_r16_13 = {
	"needForGapsConfigNR-r16",
	"needForGapsConfigNR-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_needForGapsConfigNR_r16_constr_13, &asn_PER_type_needForGapsConfigNR_r16_constr_13, CHOICE_constraint },
	asn_MBR_needForGapsConfigNR_r16_13,
	2,	/* Elements count */
	&asn_SPC_needForGapsConfigNR_r16_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_onDemandSIB_Request_r16_16[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCReconfiguration_v1610_IEs__onDemandSIB_Request_r16, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCReconfiguration_v1610_IEs__onDemandSIB_Request_r16, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_OnDemandSIB_Request_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_onDemandSIB_Request_r16_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_onDemandSIB_Request_r16_specs_16 = {
	sizeof(struct RRCReconfiguration_v1610_IEs__onDemandSIB_Request_r16),
	offsetof(struct RRCReconfiguration_v1610_IEs__onDemandSIB_Request_r16, _asn_ctx),
	offsetof(struct RRCReconfiguration_v1610_IEs__onDemandSIB_Request_r16, present),
	sizeof(((struct RRCReconfiguration_v1610_IEs__onDemandSIB_Request_r16 *)0)->present),
	asn_MAP_onDemandSIB_Request_r16_tag2el_16,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_onDemandSIB_Request_r16_16 = {
	"onDemandSIB-Request-r16",
	"onDemandSIB-Request-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_onDemandSIB_Request_r16_constr_16, &asn_PER_type_onDemandSIB_Request_r16_constr_16, CHOICE_constraint },
	asn_MBR_onDemandSIB_Request_r16_16,
	2,	/* Elements count */
	&asn_SPC_onDemandSIB_Request_r16_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_sl_ConfigDedicatedNR_r16_20[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCReconfiguration_v1610_IEs__sl_ConfigDedicatedNR_r16, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCReconfiguration_v1610_IEs__sl_ConfigDedicatedNR_r16, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SL_ConfigDedicatedNR_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_sl_ConfigDedicatedNR_r16_tag2el_20[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_sl_ConfigDedicatedNR_r16_specs_20 = {
	sizeof(struct RRCReconfiguration_v1610_IEs__sl_ConfigDedicatedNR_r16),
	offsetof(struct RRCReconfiguration_v1610_IEs__sl_ConfigDedicatedNR_r16, _asn_ctx),
	offsetof(struct RRCReconfiguration_v1610_IEs__sl_ConfigDedicatedNR_r16, present),
	sizeof(((struct RRCReconfiguration_v1610_IEs__sl_ConfigDedicatedNR_r16 *)0)->present),
	asn_MAP_sl_ConfigDedicatedNR_r16_tag2el_20,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_ConfigDedicatedNR_r16_20 = {
	"sl-ConfigDedicatedNR-r16",
	"sl-ConfigDedicatedNR-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_sl_ConfigDedicatedNR_r16_constr_20, &asn_PER_type_sl_ConfigDedicatedNR_r16_constr_20, CHOICE_constraint },
	asn_MBR_sl_ConfigDedicatedNR_r16_20,
	2,	/* Elements count */
	&asn_SPC_sl_ConfigDedicatedNR_r16_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_sl_ConfigDedicatedEUTRA_Info_r16_23[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCReconfiguration_v1610_IEs__sl_ConfigDedicatedEUTRA_Info_r16, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCReconfiguration_v1610_IEs__sl_ConfigDedicatedEUTRA_Info_r16, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SL_ConfigDedicatedEUTRA_Info_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_sl_ConfigDedicatedEUTRA_Info_r16_tag2el_23[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_sl_ConfigDedicatedEUTRA_Info_r16_specs_23 = {
	sizeof(struct RRCReconfiguration_v1610_IEs__sl_ConfigDedicatedEUTRA_Info_r16),
	offsetof(struct RRCReconfiguration_v1610_IEs__sl_ConfigDedicatedEUTRA_Info_r16, _asn_ctx),
	offsetof(struct RRCReconfiguration_v1610_IEs__sl_ConfigDedicatedEUTRA_Info_r16, present),
	sizeof(((struct RRCReconfiguration_v1610_IEs__sl_ConfigDedicatedEUTRA_Info_r16 *)0)->present),
	asn_MAP_sl_ConfigDedicatedEUTRA_Info_r16_tag2el_23,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_ConfigDedicatedEUTRA_Info_r16_23 = {
	"sl-ConfigDedicatedEUTRA-Info-r16",
	"sl-ConfigDedicatedEUTRA-Info-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_sl_ConfigDedicatedEUTRA_Info_r16_constr_23, &asn_PER_type_sl_ConfigDedicatedEUTRA_Info_r16_constr_23, CHOICE_constraint },
	asn_MBR_sl_ConfigDedicatedEUTRA_Info_r16_23,
	2,	/* Elements count */
	&asn_SPC_sl_ConfigDedicatedEUTRA_Info_r16_specs_23	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_27[] = {
	(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_27 = {
	sizeof(struct RRCReconfiguration_v1610_IEs__nonCriticalExtension),
	offsetof(struct RRCReconfiguration_v1610_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_27 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_27,
	sizeof(asn_DEF_nonCriticalExtension_tags_27)
		/sizeof(asn_DEF_nonCriticalExtension_tags_27[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_27,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_27)
		/sizeof(asn_DEF_nonCriticalExtension_tags_27[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_27	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRCReconfiguration_v1610_IEs_1[] = {
	{ ATF_POINTER, 13, offsetof(struct RRCReconfiguration_v1610_IEs, otherConfig_v1610),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OtherConfig_v1610,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"otherConfig-v1610"
		},
	{ ATF_POINTER, 12, offsetof(struct RRCReconfiguration_v1610_IEs, bap_Config_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_bap_Config_r16_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bap-Config-r16"
		},
	{ ATF_POINTER, 11, offsetof(struct RRCReconfiguration_v1610_IEs, iab_IP_AddressConfigurationList_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IAB_IP_AddressConfigurationList_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iab-IP-AddressConfigurationList-r16"
		},
	{ ATF_POINTER, 10, offsetof(struct RRCReconfiguration_v1610_IEs, conditionalReconfiguration_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ConditionalReconfiguration_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"conditionalReconfiguration-r16"
		},
	{ ATF_POINTER, 9, offsetof(struct RRCReconfiguration_v1610_IEs, daps_SourceRelease_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_daps_SourceRelease_r16_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"daps-SourceRelease-r16"
		},
	{ ATF_POINTER, 8, offsetof(struct RRCReconfiguration_v1610_IEs, t316_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_t316_r16_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t316-r16"
		},
	{ ATF_POINTER, 7, offsetof(struct RRCReconfiguration_v1610_IEs, needForGapsConfigNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_needForGapsConfigNR_r16_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"needForGapsConfigNR-r16"
		},
	{ ATF_POINTER, 6, offsetof(struct RRCReconfiguration_v1610_IEs, onDemandSIB_Request_r16),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_onDemandSIB_Request_r16_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"onDemandSIB-Request-r16"
		},
	{ ATF_POINTER, 5, offsetof(struct RRCReconfiguration_v1610_IEs, dedicatedPosSysInfoDelivery_r16),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ &asn_OER_memb_dedicatedPosSysInfoDelivery_r16_constr_19, &asn_PER_memb_dedicatedPosSysInfoDelivery_r16_constr_19,  memb_dedicatedPosSysInfoDelivery_r16_constraint_1 },
		0, 0, /* No default value */
		"dedicatedPosSysInfoDelivery-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct RRCReconfiguration_v1610_IEs, sl_ConfigDedicatedNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_sl_ConfigDedicatedNR_r16_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-ConfigDedicatedNR-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct RRCReconfiguration_v1610_IEs, sl_ConfigDedicatedEUTRA_Info_r16),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_sl_ConfigDedicatedEUTRA_Info_r16_23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-ConfigDedicatedEUTRA-Info-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCReconfiguration_v1610_IEs, smtc_r16),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSB_MTC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"smtc-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCReconfiguration_v1610_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_27,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_RRCReconfiguration_v1610_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
static const ber_tlv_tag_t asn_DEF_RRCReconfiguration_v1610_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCReconfiguration_v1610_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* otherConfig-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* bap-Config-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* iab-IP-AddressConfigurationList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* conditionalReconfiguration-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* daps-SourceRelease-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* t316-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* needForGapsConfigNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* onDemandSIB-Request-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* dedicatedPosSysInfoDelivery-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* sl-ConfigDedicatedNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* sl-ConfigDedicatedEUTRA-Info-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* smtc-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCReconfiguration_v1610_IEs_specs_1 = {
	sizeof(struct RRCReconfiguration_v1610_IEs),
	offsetof(struct RRCReconfiguration_v1610_IEs, _asn_ctx),
	asn_MAP_RRCReconfiguration_v1610_IEs_tag2el_1,
	13,	/* Count of tags in the map */
	asn_MAP_RRCReconfiguration_v1610_IEs_oms_1,	/* Optional members */
	13, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCReconfiguration_v1610_IEs = {
	"RRCReconfiguration-v1610-IEs",
	"RRCReconfiguration-v1610-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCReconfiguration_v1610_IEs_tags_1,
	sizeof(asn_DEF_RRCReconfiguration_v1610_IEs_tags_1)
		/sizeof(asn_DEF_RRCReconfiguration_v1610_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCReconfiguration_v1610_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCReconfiguration_v1610_IEs_tags_1)
		/sizeof(asn_DEF_RRCReconfiguration_v1610_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCReconfiguration_v1610_IEs_1,
	13,	/* Elements count */
	&asn_SPC_RRCReconfiguration_v1610_IEs_specs_1	/* Additional specs */
};

