/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_FANSDegrees_H_
#define	_FANSDegrees_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FANSDegreesMagnetic.h"
#include "FANSDegreesTrue.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FANSDegrees_PR {
	FANSDegrees_PR_NOTHING,	/* No components present */
	FANSDegrees_PR_degreesMagnetic,
	FANSDegrees_PR_degreesTrue
} FANSDegrees_PR;

/* FANSDegrees */
typedef struct FANSDegrees {
	FANSDegrees_PR present;
	union FANSDegrees_u {
		FANSDegreesMagnetic_t	 degreesMagnetic;
		FANSDegreesTrue_t	 degreesTrue;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSDegrees_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSDegrees;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSDegrees_H_ */
#include "asn_internal.h"
