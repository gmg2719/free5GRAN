/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "RLC-Parameters.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_am_WithShortSN_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_am_WithShortSN_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_um_WithShortSN_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_um_WithShortSN_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_um_WithLongSN_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_um_WithLongSN_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_extendedT_PollRetransmit_r16_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_extendedT_PollRetransmit_r16_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_extendedT_StatusProhibit_r16_constr_11 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_extendedT_StatusProhibit_r16_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_am_WithShortSN_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_am_WithShortSN_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_am_WithShortSN_specs_2 = {
	asn_MAP_am_WithShortSN_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_am_WithShortSN_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_am_WithShortSN_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_am_WithShortSN_2 = {
	"am-WithShortSN",
	"am-WithShortSN",
	&asn_OP_NativeEnumerated,
	asn_DEF_am_WithShortSN_tags_2,
	sizeof(asn_DEF_am_WithShortSN_tags_2)
		/sizeof(asn_DEF_am_WithShortSN_tags_2[0]) - 1, /* 1 */
	asn_DEF_am_WithShortSN_tags_2,	/* Same as above */
	sizeof(asn_DEF_am_WithShortSN_tags_2)
		/sizeof(asn_DEF_am_WithShortSN_tags_2[0]), /* 2 */
	{ &asn_OER_type_am_WithShortSN_constr_2, &asn_PER_type_am_WithShortSN_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_am_WithShortSN_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_um_WithShortSN_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_um_WithShortSN_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_um_WithShortSN_specs_4 = {
	asn_MAP_um_WithShortSN_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_um_WithShortSN_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_um_WithShortSN_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_um_WithShortSN_4 = {
	"um-WithShortSN",
	"um-WithShortSN",
	&asn_OP_NativeEnumerated,
	asn_DEF_um_WithShortSN_tags_4,
	sizeof(asn_DEF_um_WithShortSN_tags_4)
		/sizeof(asn_DEF_um_WithShortSN_tags_4[0]) - 1, /* 1 */
	asn_DEF_um_WithShortSN_tags_4,	/* Same as above */
	sizeof(asn_DEF_um_WithShortSN_tags_4)
		/sizeof(asn_DEF_um_WithShortSN_tags_4[0]), /* 2 */
	{ &asn_OER_type_um_WithShortSN_constr_4, &asn_PER_type_um_WithShortSN_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_um_WithShortSN_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_um_WithLongSN_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_um_WithLongSN_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_um_WithLongSN_specs_6 = {
	asn_MAP_um_WithLongSN_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_um_WithLongSN_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_um_WithLongSN_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_um_WithLongSN_6 = {
	"um-WithLongSN",
	"um-WithLongSN",
	&asn_OP_NativeEnumerated,
	asn_DEF_um_WithLongSN_tags_6,
	sizeof(asn_DEF_um_WithLongSN_tags_6)
		/sizeof(asn_DEF_um_WithLongSN_tags_6[0]) - 1, /* 1 */
	asn_DEF_um_WithLongSN_tags_6,	/* Same as above */
	sizeof(asn_DEF_um_WithLongSN_tags_6)
		/sizeof(asn_DEF_um_WithLongSN_tags_6[0]), /* 2 */
	{ &asn_OER_type_um_WithLongSN_constr_6, &asn_PER_type_um_WithLongSN_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_um_WithLongSN_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_extendedT_PollRetransmit_r16_value2enum_9[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_extendedT_PollRetransmit_r16_enum2value_9[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_extendedT_PollRetransmit_r16_specs_9 = {
	asn_MAP_extendedT_PollRetransmit_r16_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_extendedT_PollRetransmit_r16_enum2value_9,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_extendedT_PollRetransmit_r16_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_extendedT_PollRetransmit_r16_9 = {
	"extendedT-PollRetransmit-r16",
	"extendedT-PollRetransmit-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_extendedT_PollRetransmit_r16_tags_9,
	sizeof(asn_DEF_extendedT_PollRetransmit_r16_tags_9)
		/sizeof(asn_DEF_extendedT_PollRetransmit_r16_tags_9[0]) - 1, /* 1 */
	asn_DEF_extendedT_PollRetransmit_r16_tags_9,	/* Same as above */
	sizeof(asn_DEF_extendedT_PollRetransmit_r16_tags_9)
		/sizeof(asn_DEF_extendedT_PollRetransmit_r16_tags_9[0]), /* 2 */
	{ &asn_OER_type_extendedT_PollRetransmit_r16_constr_9, &asn_PER_type_extendedT_PollRetransmit_r16_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_extendedT_PollRetransmit_r16_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_extendedT_StatusProhibit_r16_value2enum_11[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_extendedT_StatusProhibit_r16_enum2value_11[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_extendedT_StatusProhibit_r16_specs_11 = {
	asn_MAP_extendedT_StatusProhibit_r16_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_extendedT_StatusProhibit_r16_enum2value_11,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_extendedT_StatusProhibit_r16_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_extendedT_StatusProhibit_r16_11 = {
	"extendedT-StatusProhibit-r16",
	"extendedT-StatusProhibit-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_extendedT_StatusProhibit_r16_tags_11,
	sizeof(asn_DEF_extendedT_StatusProhibit_r16_tags_11)
		/sizeof(asn_DEF_extendedT_StatusProhibit_r16_tags_11[0]) - 1, /* 1 */
	asn_DEF_extendedT_StatusProhibit_r16_tags_11,	/* Same as above */
	sizeof(asn_DEF_extendedT_StatusProhibit_r16_tags_11)
		/sizeof(asn_DEF_extendedT_StatusProhibit_r16_tags_11[0]), /* 2 */
	{ &asn_OER_type_extendedT_StatusProhibit_r16_constr_11, &asn_PER_type_extendedT_StatusProhibit_r16_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_extendedT_StatusProhibit_r16_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RLC_Parameters_1[] = {
	{ ATF_POINTER, 5, offsetof(struct RLC_Parameters, am_WithShortSN),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_am_WithShortSN_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"am-WithShortSN"
		},
	{ ATF_POINTER, 4, offsetof(struct RLC_Parameters, um_WithShortSN),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_um_WithShortSN_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"um-WithShortSN"
		},
	{ ATF_POINTER, 3, offsetof(struct RLC_Parameters, um_WithLongSN),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_um_WithLongSN_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"um-WithLongSN"
		},
	{ ATF_POINTER, 2, offsetof(struct RLC_Parameters, extendedT_PollRetransmit_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_extendedT_PollRetransmit_r16_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"extendedT-PollRetransmit-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct RLC_Parameters, extendedT_StatusProhibit_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_extendedT_StatusProhibit_r16_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"extendedT-StatusProhibit-r16"
		},
};
static const int asn_MAP_RLC_Parameters_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_RLC_Parameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RLC_Parameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* am-WithShortSN */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* um-WithShortSN */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* um-WithLongSN */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* extendedT-PollRetransmit-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* extendedT-StatusProhibit-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_RLC_Parameters_specs_1 = {
	sizeof(struct RLC_Parameters),
	offsetof(struct RLC_Parameters, _asn_ctx),
	asn_MAP_RLC_Parameters_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_RLC_Parameters_oms_1,	/* Optional members */
	3, 2,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RLC_Parameters = {
	"RLC-Parameters",
	"RLC-Parameters",
	&asn_OP_SEQUENCE,
	asn_DEF_RLC_Parameters_tags_1,
	sizeof(asn_DEF_RLC_Parameters_tags_1)
		/sizeof(asn_DEF_RLC_Parameters_tags_1[0]), /* 1 */
	asn_DEF_RLC_Parameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_RLC_Parameters_tags_1)
		/sizeof(asn_DEF_RLC_Parameters_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RLC_Parameters_1,
	5,	/* Elements count */
	&asn_SPC_RLC_Parameters_specs_1	/* Additional specs */
};

