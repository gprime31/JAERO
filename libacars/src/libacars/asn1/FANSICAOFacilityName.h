/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_FANSICAOFacilityName_H_
#define	_FANSICAOFacilityName_H_


#include "asn_application.h"

/* Including external dependencies */
#include "IA5String.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FANSICAOFacilityName */
typedef IA5String_t	 FANSICAOFacilityName_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSICAOFacilityName;
asn_struct_free_f FANSICAOFacilityName_free;
asn_struct_print_f FANSICAOFacilityName_print;
asn_constr_check_f FANSICAOFacilityName_constraint;
ber_type_decoder_f FANSICAOFacilityName_decode_ber;
der_type_encoder_f FANSICAOFacilityName_encode_der;
xer_type_decoder_f FANSICAOFacilityName_decode_xer;
xer_type_encoder_f FANSICAOFacilityName_encode_xer;
per_type_decoder_f FANSICAOFacilityName_decode_uper;
per_type_encoder_f FANSICAOFacilityName_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSICAOFacilityName_H_ */
#include "asn_internal.h"
