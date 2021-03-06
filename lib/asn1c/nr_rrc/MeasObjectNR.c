/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "MeasObjectNR.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_nrofSS_BlocksToAverage_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 16)) {
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
memb_nrofCSI_RS_ResourcesToAverage_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 16)) {
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
memb_quantityConfigIndex_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 2)) {
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
memb_blackCellsToAddModList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 8)) {
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
memb_whiteCellsToAddModList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_blackCellsToAddModList_constr_17 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_type_blackCellsToAddModList_constr_17 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_whiteCellsToAddModList_constr_20 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_type_whiteCellsToAddModList_constr_20 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_measCycleSCell_constr_24 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_measCycleSCell_constr_24 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_rmtc_Config_r16_constr_33 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_rmtc_Config_r16_constr_33 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_t312_r16_constr_36 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_t312_r16_constr_36 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_nrofSS_BlocksToAverage_constr_10 CC_NOTUSED = {
	{ 1, 1 }	/* (2..16) */,
	-1};
static asn_per_constraints_t asn_PER_memb_nrofSS_BlocksToAverage_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  2,  16 }	/* (2..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_nrofCSI_RS_ResourcesToAverage_constr_11 CC_NOTUSED = {
	{ 1, 1 }	/* (2..16) */,
	-1};
static asn_per_constraints_t asn_PER_memb_nrofCSI_RS_ResourcesToAverage_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  2,  16 }	/* (2..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_quantityConfigIndex_constr_12 CC_NOTUSED = {
	{ 1, 1 }	/* (1..2) */,
	-1};
static asn_per_constraints_t asn_PER_memb_quantityConfigIndex_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (1..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_blackCellsToAddModList_constr_17 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_memb_blackCellsToAddModList_constr_17 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_whiteCellsToAddModList_constr_20 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_memb_whiteCellsToAddModList_constr_20 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_blackCellsToAddModList_17[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_PCI_RangeElement,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_blackCellsToAddModList_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_blackCellsToAddModList_specs_17 = {
	sizeof(struct MeasObjectNR__blackCellsToAddModList),
	offsetof(struct MeasObjectNR__blackCellsToAddModList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_blackCellsToAddModList_17 = {
	"blackCellsToAddModList",
	"blackCellsToAddModList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_blackCellsToAddModList_tags_17,
	sizeof(asn_DEF_blackCellsToAddModList_tags_17)
		/sizeof(asn_DEF_blackCellsToAddModList_tags_17[0]) - 1, /* 1 */
	asn_DEF_blackCellsToAddModList_tags_17,	/* Same as above */
	sizeof(asn_DEF_blackCellsToAddModList_tags_17)
		/sizeof(asn_DEF_blackCellsToAddModList_tags_17[0]), /* 2 */
	{ &asn_OER_type_blackCellsToAddModList_constr_17, &asn_PER_type_blackCellsToAddModList_constr_17, SEQUENCE_OF_constraint },
	asn_MBR_blackCellsToAddModList_17,
	1,	/* Single element */
	&asn_SPC_blackCellsToAddModList_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_whiteCellsToAddModList_20[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_PCI_RangeElement,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_whiteCellsToAddModList_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_whiteCellsToAddModList_specs_20 = {
	sizeof(struct MeasObjectNR__whiteCellsToAddModList),
	offsetof(struct MeasObjectNR__whiteCellsToAddModList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_whiteCellsToAddModList_20 = {
	"whiteCellsToAddModList",
	"whiteCellsToAddModList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_whiteCellsToAddModList_tags_20,
	sizeof(asn_DEF_whiteCellsToAddModList_tags_20)
		/sizeof(asn_DEF_whiteCellsToAddModList_tags_20[0]) - 1, /* 1 */
	asn_DEF_whiteCellsToAddModList_tags_20,	/* Same as above */
	sizeof(asn_DEF_whiteCellsToAddModList_tags_20)
		/sizeof(asn_DEF_whiteCellsToAddModList_tags_20[0]), /* 2 */
	{ &asn_OER_type_whiteCellsToAddModList_constr_20, &asn_PER_type_whiteCellsToAddModList_constr_20, SEQUENCE_OF_constraint },
	asn_MBR_whiteCellsToAddModList_20,
	1,	/* Single element */
	&asn_SPC_whiteCellsToAddModList_specs_20	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_measCycleSCell_value2enum_24[] = {
	{ 0,	5,	"sf160" },
	{ 1,	5,	"sf256" },
	{ 2,	5,	"sf320" },
	{ 3,	5,	"sf512" },
	{ 4,	5,	"sf640" },
	{ 5,	6,	"sf1024" },
	{ 6,	6,	"sf1280" }
};
static const unsigned int asn_MAP_measCycleSCell_enum2value_24[] = {
	5,	/* sf1024(5) */
	6,	/* sf1280(6) */
	0,	/* sf160(0) */
	1,	/* sf256(1) */
	2,	/* sf320(2) */
	3,	/* sf512(3) */
	4	/* sf640(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_measCycleSCell_specs_24 = {
	asn_MAP_measCycleSCell_value2enum_24,	/* "tag" => N; sorted by tag */
	asn_MAP_measCycleSCell_enum2value_24,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_measCycleSCell_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measCycleSCell_24 = {
	"measCycleSCell",
	"measCycleSCell",
	&asn_OP_NativeEnumerated,
	asn_DEF_measCycleSCell_tags_24,
	sizeof(asn_DEF_measCycleSCell_tags_24)
		/sizeof(asn_DEF_measCycleSCell_tags_24[0]) - 1, /* 1 */
	asn_DEF_measCycleSCell_tags_24,	/* Same as above */
	sizeof(asn_DEF_measCycleSCell_tags_24)
		/sizeof(asn_DEF_measCycleSCell_tags_24[0]), /* 2 */
	{ &asn_OER_type_measCycleSCell_constr_24, &asn_PER_type_measCycleSCell_constr_24, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_measCycleSCell_specs_24	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_rmtc_Config_r16_33[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectNR__rmtc_Config_r16, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectNR__rmtc_Config_r16, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RMTC_Config_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_rmtc_Config_r16_tag2el_33[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_rmtc_Config_r16_specs_33 = {
	sizeof(struct MeasObjectNR__rmtc_Config_r16),
	offsetof(struct MeasObjectNR__rmtc_Config_r16, _asn_ctx),
	offsetof(struct MeasObjectNR__rmtc_Config_r16, present),
	sizeof(((struct MeasObjectNR__rmtc_Config_r16 *)0)->present),
	asn_MAP_rmtc_Config_r16_tag2el_33,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rmtc_Config_r16_33 = {
	"rmtc-Config-r16",
	"rmtc-Config-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_rmtc_Config_r16_constr_33, &asn_PER_type_rmtc_Config_r16_constr_33, CHOICE_constraint },
	asn_MBR_rmtc_Config_r16_33,
	2,	/* Elements count */
	&asn_SPC_rmtc_Config_r16_specs_33	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_t312_r16_36[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectNR__t312_r16, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectNR__t312_r16, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_T312_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_t312_r16_tag2el_36[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_t312_r16_specs_36 = {
	sizeof(struct MeasObjectNR__t312_r16),
	offsetof(struct MeasObjectNR__t312_r16, _asn_ctx),
	offsetof(struct MeasObjectNR__t312_r16, present),
	sizeof(((struct MeasObjectNR__t312_r16 *)0)->present),
	asn_MAP_t312_r16_tag2el_36,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t312_r16_36 = {
	"t312-r16",
	"t312-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_t312_r16_constr_36, &asn_PER_type_t312_r16_constr_36, CHOICE_constraint },
	asn_MBR_t312_r16_36,
	2,	/* Elements count */
	&asn_SPC_t312_r16_specs_36	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasObjectNR_1[] = {
	{ ATF_POINTER, 5, offsetof(struct MeasObjectNR, ssbFrequency),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssbFrequency"
		},
	{ ATF_POINTER, 4, offsetof(struct MeasObjectNR, ssbSubcarrierSpacing),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SubcarrierSpacing,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssbSubcarrierSpacing"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasObjectNR, smtc1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSB_MTC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"smtc1"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasObjectNR, smtc2),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSB_MTC2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"smtc2"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasObjectNR, refFreqCSI_RS),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"refFreqCSI-RS"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectNR, referenceSignalConfig),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReferenceSignalConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"referenceSignalConfig"
		},
	{ ATF_POINTER, 4, offsetof(struct MeasObjectNR, absThreshSS_BlocksConsolidation),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ThresholdNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"absThreshSS-BlocksConsolidation"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasObjectNR, absThreshCSI_RS_Consolidation),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ThresholdNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"absThreshCSI-RS-Consolidation"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasObjectNR, nrofSS_BlocksToAverage),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_nrofSS_BlocksToAverage_constr_10, &asn_PER_memb_nrofSS_BlocksToAverage_constr_10,  memb_nrofSS_BlocksToAverage_constraint_1 },
		0, 0, /* No default value */
		"nrofSS-BlocksToAverage"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasObjectNR, nrofCSI_RS_ResourcesToAverage),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_nrofCSI_RS_ResourcesToAverage_constr_11, &asn_PER_memb_nrofCSI_RS_ResourcesToAverage_constr_11,  memb_nrofCSI_RS_ResourcesToAverage_constraint_1 },
		0, 0, /* No default value */
		"nrofCSI-RS-ResourcesToAverage"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectNR, quantityConfigIndex),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_quantityConfigIndex_constr_12, &asn_PER_memb_quantityConfigIndex_constr_12,  memb_quantityConfigIndex_constraint_1 },
		0, 0, /* No default value */
		"quantityConfigIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectNR, offsetMO),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_OffsetRangeList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"offsetMO"
		},
	{ ATF_POINTER, 11, offsetof(struct MeasObjectNR, cellsToRemoveList),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PCI_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellsToRemoveList"
		},
	{ ATF_POINTER, 10, offsetof(struct MeasObjectNR, cellsToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellsToAddModList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellsToAddModList"
		},
	{ ATF_POINTER, 9, offsetof(struct MeasObjectNR, blackCellsToRemoveList),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PCI_RangeIndexList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"blackCellsToRemoveList"
		},
	{ ATF_POINTER, 8, offsetof(struct MeasObjectNR, blackCellsToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		0,
		&asn_DEF_blackCellsToAddModList_17,
		0,
		{ &asn_OER_memb_blackCellsToAddModList_constr_17, &asn_PER_memb_blackCellsToAddModList_constr_17,  memb_blackCellsToAddModList_constraint_1 },
		0, 0, /* No default value */
		"blackCellsToAddModList"
		},
	{ ATF_POINTER, 7, offsetof(struct MeasObjectNR, whiteCellsToRemoveList),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PCI_RangeIndexList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"whiteCellsToRemoveList"
		},
	{ ATF_POINTER, 6, offsetof(struct MeasObjectNR, whiteCellsToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		0,
		&asn_DEF_whiteCellsToAddModList_20,
		0,
		{ &asn_OER_memb_whiteCellsToAddModList_constr_20, &asn_PER_memb_whiteCellsToAddModList_constr_20,  memb_whiteCellsToAddModList_constraint_1 },
		0, 0, /* No default value */
		"whiteCellsToAddModList"
		},
	{ ATF_POINTER, 5, offsetof(struct MeasObjectNR, freqBandIndicatorNR),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqBandIndicatorNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freqBandIndicatorNR"
		},
	{ ATF_POINTER, 4, offsetof(struct MeasObjectNR, measCycleSCell),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_measCycleSCell_24,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measCycleSCell"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasObjectNR, smtc3list_r16),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSB_MTC3List_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"smtc3list-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasObjectNR, rmtc_Config_r16),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_rmtc_Config_r16_33,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rmtc-Config-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasObjectNR, t312_r16),
		(ASN_TAG_CLASS_CONTEXT | (22 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_t312_r16_36,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t312-r16"
		},
};
static const int asn_MAP_MeasObjectNR_oms_1[] = { 0, 1, 2, 3, 4, 6, 7, 8, 9, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22 };
static const ber_tlv_tag_t asn_DEF_MeasObjectNR_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasObjectNR_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ssbFrequency */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ssbSubcarrierSpacing */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* smtc1 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* smtc2 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* refFreqCSI-RS */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* referenceSignalConfig */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* absThreshSS-BlocksConsolidation */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* absThreshCSI-RS-Consolidation */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* nrofSS-BlocksToAverage */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* nrofCSI-RS-ResourcesToAverage */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* quantityConfigIndex */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* offsetMO */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* cellsToRemoveList */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* cellsToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* blackCellsToRemoveList */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* blackCellsToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* whiteCellsToRemoveList */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* whiteCellsToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* freqBandIndicatorNR */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 }, /* measCycleSCell */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 20, 0, 0 }, /* smtc3list-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 21, 0, 0 }, /* rmtc-Config-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 22, 0, 0 } /* t312-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasObjectNR_specs_1 = {
	sizeof(struct MeasObjectNR),
	offsetof(struct MeasObjectNR, _asn_ctx),
	asn_MAP_MeasObjectNR_tag2el_1,
	23,	/* Count of tags in the map */
	asn_MAP_MeasObjectNR_oms_1,	/* Optional members */
	15, 5,	/* Root/Additions */
	18,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasObjectNR = {
	"MeasObjectNR",
	"MeasObjectNR",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasObjectNR_tags_1,
	sizeof(asn_DEF_MeasObjectNR_tags_1)
		/sizeof(asn_DEF_MeasObjectNR_tags_1[0]), /* 1 */
	asn_DEF_MeasObjectNR_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasObjectNR_tags_1)
		/sizeof(asn_DEF_MeasObjectNR_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasObjectNR_1,
	23,	/* Elements count */
	&asn_SPC_MeasObjectNR_specs_1	/* Additional specs */
};

