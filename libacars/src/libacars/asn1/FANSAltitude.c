/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#include "FANSAltitude.h"

static asn_per_constraints_t asn_PER_type_FANSAltitude_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_FANSAltitude_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FANSAltitude, choice.altitudeQNH),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSAltitudeQNH,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"altitudeQNH"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSAltitude, choice.altitudeQNHMeters),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSAltitudeQNHMeters,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"altitudeQNHMeters"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSAltitude, choice.altitudeQFE),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSAltitudeQFE,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"altitudeQFE"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSAltitude, choice.altitudeQFEMeters),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSAltitudeQFEMeters,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"altitudeQFEMeters"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSAltitude, choice.altitudeGNSSFeet),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSAltitudeGNSSFeet,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"altitudeGNSSFeet"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSAltitude, choice.altitudeGNSSMeters),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSAltitudeGNSSMeters,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"altitudeGNSSMeters"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSAltitude, choice.altitudeFlightLevel),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSAltitudeFlightLevel,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"altitudeFlightLevel"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSAltitude, choice.altitudeFlightLevelMetric),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSAltitudeFlightLevelMetric,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"altitudeFlightLevelMetric"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_FANSAltitude_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* altitudeQNH */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* altitudeQNHMeters */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* altitudeQFE */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* altitudeQFEMeters */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* altitudeGNSSFeet */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* altitudeGNSSMeters */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* altitudeFlightLevel */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* altitudeFlightLevelMetric */
};
static asn_CHOICE_specifics_t asn_SPC_FANSAltitude_specs_1 = {
	sizeof(struct FANSAltitude),
	offsetof(struct FANSAltitude, _asn_ctx),
	offsetof(struct FANSAltitude, present),
	sizeof(((struct FANSAltitude *)0)->present),
	asn_MAP_FANSAltitude_tag2el_1,
	8,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_FANSAltitude = {
	"FANSAltitude",
	"FANSAltitude",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_FANSAltitude_constr_1,
	asn_MBR_FANSAltitude_1,
	8,	/* Elements count */
	&asn_SPC_FANSAltitude_specs_1	/* Additional specs */
};

