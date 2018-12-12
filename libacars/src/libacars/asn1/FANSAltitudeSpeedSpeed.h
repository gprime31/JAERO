/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_FANSAltitudeSpeedSpeed_H_
#define	_FANSAltitudeSpeedSpeed_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FANSAltitude.h"
#include "FANSSpeedSpeed.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FANSAltitudeSpeedSpeed */
typedef struct FANSAltitudeSpeedSpeed {
	FANSAltitude_t	 altitude;
	FANSSpeedSpeed_t	 speed_seqOf;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSAltitudeSpeedSpeed_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSAltitudeSpeedSpeed;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSAltitudeSpeedSpeed_H_ */
#include "asn_internal.h"
