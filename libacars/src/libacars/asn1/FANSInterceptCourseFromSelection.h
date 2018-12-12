/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_FANSInterceptCourseFromSelection_H_
#define	_FANSInterceptCourseFromSelection_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FANSPublishedIdentifier.h"
#include "FANSLatitudeLongitude.h"
#include "FANSPlaceBearingPlaceBearing.h"
#include "FANSPlaceBearingDistance.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FANSInterceptCourseFromSelection_PR {
	FANSInterceptCourseFromSelection_PR_NOTHING,	/* No components present */
	FANSInterceptCourseFromSelection_PR_publishedIdentifier,
	FANSInterceptCourseFromSelection_PR_latitudeLongitude,
	FANSInterceptCourseFromSelection_PR_placeBearingPlaceBearing,
	FANSInterceptCourseFromSelection_PR_placeBearingDistance
} FANSInterceptCourseFromSelection_PR;

/* FANSInterceptCourseFromSelection */
typedef struct FANSInterceptCourseFromSelection {
	FANSInterceptCourseFromSelection_PR present;
	union FANSInterceptCourseFromSelection_u {
		FANSPublishedIdentifier_t	 publishedIdentifier;
		FANSLatitudeLongitude_t	 latitudeLongitude;
		FANSPlaceBearingPlaceBearing_t	 placeBearingPlaceBearing;
		FANSPlaceBearingDistance_t	 placeBearingDistance;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSInterceptCourseFromSelection_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSInterceptCourseFromSelection;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSInterceptCourseFromSelection_H_ */
#include "asn_internal.h"
