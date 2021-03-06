/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "BeamFailureRecoveryConfig.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_rootSequenceIndex_BFR_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 137)) {
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
memb_candidateBeamRSList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ra_ssb_OccasionMaskIndex_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_candidateBeamRSList_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_type_candidateBeamRSList_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ssb_perRACH_Occasion_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ssb_perRACH_Occasion_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_beamFailureRecoveryTimer_constr_19 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_beamFailureRecoveryTimer_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_candidateBeamRSListExt_v1610_constr_31 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_candidateBeamRSListExt_v1610_constr_31 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_rootSequenceIndex_BFR_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (0..137) */,
	-1};
static asn_per_constraints_t asn_PER_memb_rootSequenceIndex_BFR_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  137 }	/* (0..137) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_candidateBeamRSList_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_memb_candidateBeamRSList_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ra_ssb_OccasionMaskIndex_constr_16 CC_NOTUSED = {
	{ 1, 1 }	/* (0..15) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ra_ssb_OccasionMaskIndex_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_candidateBeamRSList_5[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_PRACH_ResourceDedicatedBFR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_candidateBeamRSList_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_candidateBeamRSList_specs_5 = {
	sizeof(struct BeamFailureRecoveryConfig__candidateBeamRSList),
	offsetof(struct BeamFailureRecoveryConfig__candidateBeamRSList, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_candidateBeamRSList_5 = {
	"candidateBeamRSList",
	"candidateBeamRSList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_candidateBeamRSList_tags_5,
	sizeof(asn_DEF_candidateBeamRSList_tags_5)
		/sizeof(asn_DEF_candidateBeamRSList_tags_5[0]) - 1, /* 1 */
	asn_DEF_candidateBeamRSList_tags_5,	/* Same as above */
	sizeof(asn_DEF_candidateBeamRSList_tags_5)
		/sizeof(asn_DEF_candidateBeamRSList_tags_5[0]), /* 2 */
	{ &asn_OER_type_candidateBeamRSList_constr_5, &asn_PER_type_candidateBeamRSList_constr_5, SEQUENCE_OF_constraint },
	asn_MBR_candidateBeamRSList_5,
	1,	/* Single element */
	&asn_SPC_candidateBeamRSList_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ssb_perRACH_Occasion_value2enum_7[] = {
	{ 0,	9,	"oneEighth" },
	{ 1,	9,	"oneFourth" },
	{ 2,	7,	"oneHalf" },
	{ 3,	3,	"one" },
	{ 4,	3,	"two" },
	{ 5,	4,	"four" },
	{ 6,	5,	"eight" },
	{ 7,	7,	"sixteen" }
};
static const unsigned int asn_MAP_ssb_perRACH_Occasion_enum2value_7[] = {
	6,	/* eight(6) */
	5,	/* four(5) */
	3,	/* one(3) */
	0,	/* oneEighth(0) */
	1,	/* oneFourth(1) */
	2,	/* oneHalf(2) */
	7,	/* sixteen(7) */
	4	/* two(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_ssb_perRACH_Occasion_specs_7 = {
	asn_MAP_ssb_perRACH_Occasion_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_ssb_perRACH_Occasion_enum2value_7,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ssb_perRACH_Occasion_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ssb_perRACH_Occasion_7 = {
	"ssb-perRACH-Occasion",
	"ssb-perRACH-Occasion",
	&asn_OP_NativeEnumerated,
	asn_DEF_ssb_perRACH_Occasion_tags_7,
	sizeof(asn_DEF_ssb_perRACH_Occasion_tags_7)
		/sizeof(asn_DEF_ssb_perRACH_Occasion_tags_7[0]) - 1, /* 1 */
	asn_DEF_ssb_perRACH_Occasion_tags_7,	/* Same as above */
	sizeof(asn_DEF_ssb_perRACH_Occasion_tags_7)
		/sizeof(asn_DEF_ssb_perRACH_Occasion_tags_7[0]), /* 2 */
	{ &asn_OER_type_ssb_perRACH_Occasion_constr_7, &asn_PER_type_ssb_perRACH_Occasion_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ssb_perRACH_Occasion_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_beamFailureRecoveryTimer_value2enum_19[] = {
	{ 0,	4,	"ms10" },
	{ 1,	4,	"ms20" },
	{ 2,	4,	"ms40" },
	{ 3,	4,	"ms60" },
	{ 4,	4,	"ms80" },
	{ 5,	5,	"ms100" },
	{ 6,	5,	"ms150" },
	{ 7,	5,	"ms200" }
};
static const unsigned int asn_MAP_beamFailureRecoveryTimer_enum2value_19[] = {
	0,	/* ms10(0) */
	5,	/* ms100(5) */
	6,	/* ms150(6) */
	1,	/* ms20(1) */
	7,	/* ms200(7) */
	2,	/* ms40(2) */
	3,	/* ms60(3) */
	4	/* ms80(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_beamFailureRecoveryTimer_specs_19 = {
	asn_MAP_beamFailureRecoveryTimer_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_beamFailureRecoveryTimer_enum2value_19,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_beamFailureRecoveryTimer_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_beamFailureRecoveryTimer_19 = {
	"beamFailureRecoveryTimer",
	"beamFailureRecoveryTimer",
	&asn_OP_NativeEnumerated,
	asn_DEF_beamFailureRecoveryTimer_tags_19,
	sizeof(asn_DEF_beamFailureRecoveryTimer_tags_19)
		/sizeof(asn_DEF_beamFailureRecoveryTimer_tags_19[0]) - 1, /* 1 */
	asn_DEF_beamFailureRecoveryTimer_tags_19,	/* Same as above */
	sizeof(asn_DEF_beamFailureRecoveryTimer_tags_19)
		/sizeof(asn_DEF_beamFailureRecoveryTimer_tags_19[0]), /* 2 */
	{ &asn_OER_type_beamFailureRecoveryTimer_constr_19, &asn_PER_type_beamFailureRecoveryTimer_constr_19, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_beamFailureRecoveryTimer_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_candidateBeamRSListExt_v1610_31[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BeamFailureRecoveryConfig__candidateBeamRSListExt_v1610, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BeamFailureRecoveryConfig__candidateBeamRSListExt_v1610, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CandidateBeamRSListExt_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_candidateBeamRSListExt_v1610_tag2el_31[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_candidateBeamRSListExt_v1610_specs_31 = {
	sizeof(struct BeamFailureRecoveryConfig__candidateBeamRSListExt_v1610),
	offsetof(struct BeamFailureRecoveryConfig__candidateBeamRSListExt_v1610, _asn_ctx),
	offsetof(struct BeamFailureRecoveryConfig__candidateBeamRSListExt_v1610, present),
	sizeof(((struct BeamFailureRecoveryConfig__candidateBeamRSListExt_v1610 *)0)->present),
	asn_MAP_candidateBeamRSListExt_v1610_tag2el_31,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_candidateBeamRSListExt_v1610_31 = {
	"candidateBeamRSListExt-v1610",
	"candidateBeamRSListExt-v1610",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_candidateBeamRSListExt_v1610_constr_31, &asn_PER_type_candidateBeamRSListExt_v1610_constr_31, CHOICE_constraint },
	asn_MBR_candidateBeamRSListExt_v1610_31,
	2,	/* Elements count */
	&asn_SPC_candidateBeamRSListExt_v1610_specs_31	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_BeamFailureRecoveryConfig_1[] = {
	{ ATF_POINTER, 12, offsetof(struct BeamFailureRecoveryConfig, rootSequenceIndex_BFR),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_rootSequenceIndex_BFR_constr_2, &asn_PER_memb_rootSequenceIndex_BFR_constr_2,  memb_rootSequenceIndex_BFR_constraint_1 },
		0, 0, /* No default value */
		"rootSequenceIndex-BFR"
		},
	{ ATF_POINTER, 11, offsetof(struct BeamFailureRecoveryConfig, rach_ConfigBFR),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RACH_ConfigGeneric,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rach-ConfigBFR"
		},
	{ ATF_POINTER, 10, offsetof(struct BeamFailureRecoveryConfig, rsrp_ThresholdSSB),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrp-ThresholdSSB"
		},
	{ ATF_POINTER, 9, offsetof(struct BeamFailureRecoveryConfig, candidateBeamRSList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_candidateBeamRSList_5,
		0,
		{ &asn_OER_memb_candidateBeamRSList_constr_5, &asn_PER_memb_candidateBeamRSList_constr_5,  memb_candidateBeamRSList_constraint_1 },
		0, 0, /* No default value */
		"candidateBeamRSList"
		},
	{ ATF_POINTER, 8, offsetof(struct BeamFailureRecoveryConfig, ssb_perRACH_Occasion),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ssb_perRACH_Occasion_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-perRACH-Occasion"
		},
	{ ATF_POINTER, 7, offsetof(struct BeamFailureRecoveryConfig, ra_ssb_OccasionMaskIndex),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ra_ssb_OccasionMaskIndex_constr_16, &asn_PER_memb_ra_ssb_OccasionMaskIndex_constr_16,  memb_ra_ssb_OccasionMaskIndex_constraint_1 },
		0, 0, /* No default value */
		"ra-ssb-OccasionMaskIndex"
		},
	{ ATF_POINTER, 6, offsetof(struct BeamFailureRecoveryConfig, recoverySearchSpaceId),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SearchSpaceId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"recoverySearchSpaceId"
		},
	{ ATF_POINTER, 5, offsetof(struct BeamFailureRecoveryConfig, ra_Prioritization),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RA_Prioritization,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ra-Prioritization"
		},
	{ ATF_POINTER, 4, offsetof(struct BeamFailureRecoveryConfig, beamFailureRecoveryTimer),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_beamFailureRecoveryTimer_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"beamFailureRecoveryTimer"
		},
	{ ATF_POINTER, 3, offsetof(struct BeamFailureRecoveryConfig, msg1_SubcarrierSpacing),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SubcarrierSpacing,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"msg1-SubcarrierSpacing"
		},
	{ ATF_POINTER, 2, offsetof(struct BeamFailureRecoveryConfig, ra_PrioritizationTwoStep_r16),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RA_Prioritization,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ra-PrioritizationTwoStep-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct BeamFailureRecoveryConfig, candidateBeamRSListExt_v1610),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_candidateBeamRSListExt_v1610_31,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"candidateBeamRSListExt-v1610"
		},
};
static const int asn_MAP_BeamFailureRecoveryConfig_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
static const ber_tlv_tag_t asn_DEF_BeamFailureRecoveryConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BeamFailureRecoveryConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rootSequenceIndex-BFR */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rach-ConfigBFR */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rsrp-ThresholdSSB */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* candidateBeamRSList */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ssb-perRACH-Occasion */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ra-ssb-OccasionMaskIndex */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* recoverySearchSpaceId */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ra-Prioritization */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* beamFailureRecoveryTimer */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* msg1-SubcarrierSpacing */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* ra-PrioritizationTwoStep-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* candidateBeamRSListExt-v1610 */
};
asn_SEQUENCE_specifics_t asn_SPC_BeamFailureRecoveryConfig_specs_1 = {
	sizeof(struct BeamFailureRecoveryConfig),
	offsetof(struct BeamFailureRecoveryConfig, _asn_ctx),
	asn_MAP_BeamFailureRecoveryConfig_tag2el_1,
	12,	/* Count of tags in the map */
	asn_MAP_BeamFailureRecoveryConfig_oms_1,	/* Optional members */
	9, 3,	/* Root/Additions */
	9,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BeamFailureRecoveryConfig = {
	"BeamFailureRecoveryConfig",
	"BeamFailureRecoveryConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_BeamFailureRecoveryConfig_tags_1,
	sizeof(asn_DEF_BeamFailureRecoveryConfig_tags_1)
		/sizeof(asn_DEF_BeamFailureRecoveryConfig_tags_1[0]), /* 1 */
	asn_DEF_BeamFailureRecoveryConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_BeamFailureRecoveryConfig_tags_1)
		/sizeof(asn_DEF_BeamFailureRecoveryConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BeamFailureRecoveryConfig_1,
	12,	/* Elements count */
	&asn_SPC_BeamFailureRecoveryConfig_specs_1	/* Additional specs */
};

