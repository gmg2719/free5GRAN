/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "LoggedMeasurementConfiguration-r16-IEs.h"

static int
memb_traceRecordingSessionRef_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 2)) {
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
memb_tce_Id_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_bt_NameList_r16_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_bt_NameList_r16_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_wlan_NameList_r16_constr_11 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_wlan_NameList_r16_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_sensor_NameList_r16_constr_14 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_sensor_NameList_r16_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_reportType_constr_18 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_reportType_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_traceRecordingSessionRef_r16_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	2	/* (SIZE(2..2)) */};
static asn_per_constraints_t asn_PER_memb_traceRecordingSessionRef_r16_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_tce_Id_r16_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	1	/* (SIZE(1..1)) */};
static asn_per_constraints_t asn_PER_memb_tce_Id_r16_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  1,  1 }	/* (SIZE(1..1)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_bt_NameList_r16_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasurementConfiguration_r16_IEs__bt_NameList_r16, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasurementConfiguration_r16_IEs__bt_NameList_r16, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_BT_NameList_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_bt_NameList_r16_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_bt_NameList_r16_specs_8 = {
	sizeof(struct LoggedMeasurementConfiguration_r16_IEs__bt_NameList_r16),
	offsetof(struct LoggedMeasurementConfiguration_r16_IEs__bt_NameList_r16, _asn_ctx),
	offsetof(struct LoggedMeasurementConfiguration_r16_IEs__bt_NameList_r16, present),
	sizeof(((struct LoggedMeasurementConfiguration_r16_IEs__bt_NameList_r16 *)0)->present),
	asn_MAP_bt_NameList_r16_tag2el_8,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bt_NameList_r16_8 = {
	"bt-NameList-r16",
	"bt-NameList-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_bt_NameList_r16_constr_8, &asn_PER_type_bt_NameList_r16_constr_8, CHOICE_constraint },
	asn_MBR_bt_NameList_r16_8,
	2,	/* Elements count */
	&asn_SPC_bt_NameList_r16_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_wlan_NameList_r16_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasurementConfiguration_r16_IEs__wlan_NameList_r16, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasurementConfiguration_r16_IEs__wlan_NameList_r16, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_WLAN_NameList_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_wlan_NameList_r16_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_wlan_NameList_r16_specs_11 = {
	sizeof(struct LoggedMeasurementConfiguration_r16_IEs__wlan_NameList_r16),
	offsetof(struct LoggedMeasurementConfiguration_r16_IEs__wlan_NameList_r16, _asn_ctx),
	offsetof(struct LoggedMeasurementConfiguration_r16_IEs__wlan_NameList_r16, present),
	sizeof(((struct LoggedMeasurementConfiguration_r16_IEs__wlan_NameList_r16 *)0)->present),
	asn_MAP_wlan_NameList_r16_tag2el_11,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_wlan_NameList_r16_11 = {
	"wlan-NameList-r16",
	"wlan-NameList-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_wlan_NameList_r16_constr_11, &asn_PER_type_wlan_NameList_r16_constr_11, CHOICE_constraint },
	asn_MBR_wlan_NameList_r16_11,
	2,	/* Elements count */
	&asn_SPC_wlan_NameList_r16_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_sensor_NameList_r16_14[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasurementConfiguration_r16_IEs__sensor_NameList_r16, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasurementConfiguration_r16_IEs__sensor_NameList_r16, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Sensor_NameList_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_sensor_NameList_r16_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_sensor_NameList_r16_specs_14 = {
	sizeof(struct LoggedMeasurementConfiguration_r16_IEs__sensor_NameList_r16),
	offsetof(struct LoggedMeasurementConfiguration_r16_IEs__sensor_NameList_r16, _asn_ctx),
	offsetof(struct LoggedMeasurementConfiguration_r16_IEs__sensor_NameList_r16, present),
	sizeof(((struct LoggedMeasurementConfiguration_r16_IEs__sensor_NameList_r16 *)0)->present),
	asn_MAP_sensor_NameList_r16_tag2el_14,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sensor_NameList_r16_14 = {
	"sensor-NameList-r16",
	"sensor-NameList-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_sensor_NameList_r16_constr_14, &asn_PER_type_sensor_NameList_r16_constr_14, CHOICE_constraint },
	asn_MBR_sensor_NameList_r16_14,
	2,	/* Elements count */
	&asn_SPC_sensor_NameList_r16_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_reportType_18[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasurementConfiguration_r16_IEs__reportType, choice.periodical),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LoggedPeriodicalReportConfig_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"periodical"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasurementConfiguration_r16_IEs__reportType, choice.eventTriggered),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LoggedEventTriggerConfig_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventTriggered"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_reportType_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* periodical */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eventTriggered */
};
static asn_CHOICE_specifics_t asn_SPC_reportType_specs_18 = {
	sizeof(struct LoggedMeasurementConfiguration_r16_IEs__reportType),
	offsetof(struct LoggedMeasurementConfiguration_r16_IEs__reportType, _asn_ctx),
	offsetof(struct LoggedMeasurementConfiguration_r16_IEs__reportType, present),
	sizeof(((struct LoggedMeasurementConfiguration_r16_IEs__reportType *)0)->present),
	asn_MAP_reportType_tag2el_18,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reportType_18 = {
	"reportType",
	"reportType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_reportType_constr_18, &asn_PER_type_reportType_constr_18, CHOICE_constraint },
	asn_MBR_reportType_18,
	2,	/* Elements count */
	&asn_SPC_reportType_specs_18	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_23 = {
	sizeof(struct LoggedMeasurementConfiguration_r16_IEs__nonCriticalExtension),
	offsetof(struct LoggedMeasurementConfiguration_r16_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_23 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_23,
	sizeof(asn_DEF_nonCriticalExtension_tags_23)
		/sizeof(asn_DEF_nonCriticalExtension_tags_23[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_23,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_23)
		/sizeof(asn_DEF_nonCriticalExtension_tags_23[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_23	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LoggedMeasurementConfiguration_r16_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasurementConfiguration_r16_IEs, traceReference_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TraceReference_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"traceReference-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasurementConfiguration_r16_IEs, traceRecordingSessionRef_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ &asn_OER_memb_traceRecordingSessionRef_r16_constr_3, &asn_PER_memb_traceRecordingSessionRef_r16_constr_3,  memb_traceRecordingSessionRef_r16_constraint_1 },
		0, 0, /* No default value */
		"traceRecordingSessionRef-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasurementConfiguration_r16_IEs, tce_Id_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ &asn_OER_memb_tce_Id_r16_constr_4, &asn_PER_memb_tce_Id_r16_constr_4,  memb_tce_Id_r16_constraint_1 },
		0, 0, /* No default value */
		"tce-Id-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasurementConfiguration_r16_IEs, absoluteTimeInfo_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AbsoluteTimeInfo_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"absoluteTimeInfo-r16"
		},
	{ ATF_POINTER, 5, offsetof(struct LoggedMeasurementConfiguration_r16_IEs, areaConfiguration_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AreaConfiguration_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"areaConfiguration-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct LoggedMeasurementConfiguration_r16_IEs, plmn_IdentityList_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_IdentityList2_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-IdentityList-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct LoggedMeasurementConfiguration_r16_IEs, bt_NameList_r16),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_bt_NameList_r16_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bt-NameList-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct LoggedMeasurementConfiguration_r16_IEs, wlan_NameList_r16),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_wlan_NameList_r16_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wlan-NameList-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct LoggedMeasurementConfiguration_r16_IEs, sensor_NameList_r16),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_sensor_NameList_r16_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sensor-NameList-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasurementConfiguration_r16_IEs, loggingDuration_r16),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LoggingDuration_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"loggingDuration-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasurementConfiguration_r16_IEs, reportType),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_reportType_18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportType"
		},
	{ ATF_POINTER, 2, offsetof(struct LoggedMeasurementConfiguration_r16_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct LoggedMeasurementConfiguration_r16_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LoggedMeasurementConfiguration_r16_IEs_oms_1[] = { 4, 5, 6, 7, 8, 11, 12 };
static const ber_tlv_tag_t asn_DEF_LoggedMeasurementConfiguration_r16_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LoggedMeasurementConfiguration_r16_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* traceReference-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* traceRecordingSessionRef-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* tce-Id-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* absoluteTimeInfo-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* areaConfiguration-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* plmn-IdentityList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* bt-NameList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* wlan-NameList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* sensor-NameList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* loggingDuration-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* reportType */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LoggedMeasurementConfiguration_r16_IEs_specs_1 = {
	sizeof(struct LoggedMeasurementConfiguration_r16_IEs),
	offsetof(struct LoggedMeasurementConfiguration_r16_IEs, _asn_ctx),
	asn_MAP_LoggedMeasurementConfiguration_r16_IEs_tag2el_1,
	13,	/* Count of tags in the map */
	asn_MAP_LoggedMeasurementConfiguration_r16_IEs_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LoggedMeasurementConfiguration_r16_IEs = {
	"LoggedMeasurementConfiguration-r16-IEs",
	"LoggedMeasurementConfiguration-r16-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LoggedMeasurementConfiguration_r16_IEs_tags_1,
	sizeof(asn_DEF_LoggedMeasurementConfiguration_r16_IEs_tags_1)
		/sizeof(asn_DEF_LoggedMeasurementConfiguration_r16_IEs_tags_1[0]), /* 1 */
	asn_DEF_LoggedMeasurementConfiguration_r16_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LoggedMeasurementConfiguration_r16_IEs_tags_1)
		/sizeof(asn_DEF_LoggedMeasurementConfiguration_r16_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LoggedMeasurementConfiguration_r16_IEs_1,
	13,	/* Elements count */
	&asn_SPC_LoggedMeasurementConfiguration_r16_IEs_specs_1	/* Additional specs */
};

