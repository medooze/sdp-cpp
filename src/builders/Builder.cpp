/* -----------------------------------------------------------------------------
 * Builder.cpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */


#include <vector>
using std::vector;

#include "Builder.h"

#include "../abnf/Rule_session_description.hpp"
#include "../abnf/Rule_proto_version.hpp"
#include "../abnf/Rule_origin_field.hpp"
#include "../abnf/Rule_session_name_field.hpp"
#include "../abnf/Rule_information_field.hpp"
#include "../abnf/Rule_uri_field.hpp"
#include "../abnf/Rule_email_fields.hpp"
#include "../abnf/Rule_email_field.hpp"
#include "../abnf/Rule_phone_fields.hpp"
#include "../abnf/Rule_phone_field.hpp"
#include "../abnf/Rule_connection_field.hpp"
#include "../abnf/Rule_bandwidth_fields.hpp"
#include "../abnf/Rule_bandwidth_field.hpp"
#include "../abnf/Rule_time_fields.hpp"
#include "../abnf/Rule_time_repeat_field.hpp"
#include "../abnf/Rule_time_field.hpp"
#include "../abnf/Rule_repeat_field.hpp"
#include "../abnf/Rule_zone_adjustments.hpp"
#include "../abnf/Rule_key_field.hpp"
#include "../abnf/Rule_attribute_fields.hpp"
#include "../abnf/Rule_attribute_field.hpp"
#include "../abnf/Rule_gen_attribute.hpp"
#include "../abnf/Rule_sctpmap_attr.hpp"
#include "../abnf/Rule_sctpmap_number.hpp"
#include "../abnf/Rule_app.hpp"
#include "../abnf/Rule_streams.hpp"
#include "../abnf/Rule_fingerprint_attribute.hpp"
#include "../abnf/Rule_hash_func.hpp"
#include "../abnf/Rule_fingerprint.hpp"
#include "../abnf/Rule_extmap_attribute.hpp"
#include "../abnf/Rule_extension_identifier.hpp"
#include "../abnf/Rule_extension_name.hpp"
#include "../abnf/Rule_direction.hpp"
#include "../abnf/Rule_extension_attributes.hpp"
#include "../abnf/Rule_candidate_attribute.hpp"
#include "../abnf/Rule_foundation.hpp"
#include "../abnf/Rule_component_id.hpp"
#include "../abnf/Rule_transport.hpp"
#include "../abnf/Rule_transport_extension.hpp"
#include "../abnf/Rule_priority.hpp"
#include "../abnf/Rule_cand_type.hpp"
#include "../abnf/Rule_candidate_types.hpp"
#include "../abnf/Rule_rel_addr.hpp"
#include "../abnf/Rule_rel_port.hpp"
#include "../abnf/Rule_extension_att.hpp"
#include "../abnf/Rule_extension_att_name.hpp"
#include "../abnf/Rule_extension_att_value.hpp"
#include "../abnf/Rule_ice_char.hpp"
#include "../abnf/Rule_crypto_attribute.hpp"
#include "../abnf/Rule_tag.hpp"
#include "../abnf/Rule_crypto_suite.hpp"
#include "../abnf/Rule_key_params.hpp"
#include "../abnf/Rule_key_param.hpp"
#include "../abnf/Rule_key_method.hpp"
#include "../abnf/Rule_key_method_ext.hpp"
#include "../abnf/Rule_key_info.hpp"
#include "../abnf/Rule_key_salt.hpp"
#include "../abnf/Rule_key_lifetime.hpp"
#include "../abnf/Rule_key_mki.hpp"
#include "../abnf/Rule_key_mki_value.hpp"
#include "../abnf/Rule_key_mki_length.hpp"
#include "../abnf/Rule_session_param.hpp"
#include "../abnf/Rule_mid_attr.hpp"
#include "../abnf/Rule_identification_tag.hpp"
#include "../abnf/Rule_group_attr.hpp"
#include "../abnf/Rule_group_semantics.hpp"
#include "../abnf/Rule_ssrc_attr.hpp"
#include "../abnf/Rule_ssrc_id.hpp"
#include "../abnf/Rule_ssrc_group_attr.hpp"
#include "../abnf/Rule_ssrc_group_semantics.hpp"
#include "../abnf/Rule_cname_attr.hpp"
#include "../abnf/Rule_cname.hpp"
#include "../abnf/Rule_previous_ssrc_attr.hpp"
#include "../abnf/Rule_rtpmap_attr.hpp"
#include "../abnf/Rule_name.hpp"
#include "../abnf/Rule_rate.hpp"
#include "../abnf/Rule_parameters.hpp"
#include "../abnf/Rule_fmtp_attr.hpp"
#include "../abnf/Rule_param_list.hpp"
#include "../abnf/Rule_media_descriptions.hpp"
#include "../abnf/Rule_media_description.hpp"
#include "../abnf/Rule_media_field.hpp"
#include "../abnf/Rule_username.hpp"
#include "../abnf/Rule_sess_id.hpp"
#include "../abnf/Rule_sess_version.hpp"
#include "../abnf/Rule_nettype.hpp"
#include "../abnf/Rule_addrtype.hpp"
#include "../abnf/Rule_email_address.hpp"
#include "../abnf/Rule_address_and_comment.hpp"
#include "../abnf/Rule_dispname_and_address.hpp"
#include "../abnf/Rule_phone_number.hpp"
#include "../abnf/Rule_phone.hpp"
#include "../abnf/Rule_connection_address.hpp"
#include "../abnf/Rule_unicast_address.hpp"
#include "../abnf/Rule_bwtype.hpp"
#include "../abnf/Rule_bandwidth.hpp"
#include "../abnf/Rule_start_time.hpp"
#include "../abnf/Rule_stop_time.hpp"
#include "../abnf/Rule_time.hpp"
#include "../abnf/Rule_repeat_interval.hpp"
#include "../abnf/Rule_typed_time.hpp"
#include "../abnf/Rule_fixed_len_time_unit.hpp"
#include "../abnf/Rule_key_type.hpp"
#include "../abnf/Rule_prompt_key_type.hpp"
#include "../abnf/Rule_clear_key_type.hpp"
#include "../abnf/Rule_base64_key_type.hpp"
#include "../abnf/Rule_uri_key_type.hpp"
#include "../abnf/Rule_base64.hpp"
#include "../abnf/Rule_base64_unit.hpp"
#include "../abnf/Rule_base64_pad.hpp"
#include "../abnf/Rule_base64_char.hpp"
#include "../abnf/Rule_attribute.hpp"
#include "../abnf/Rule_att_field.hpp"
#include "../abnf/Rule_att_value.hpp"
#include "../abnf/Rule_media.hpp"
#include "../abnf/Rule_fmt.hpp"
#include "../abnf/Rule_proto.hpp"
#include "../abnf/Rule_port.hpp"
#include "../abnf/Rule_number_of_ports.hpp"
#include "../abnf/Rule_IP4_multicast.hpp"
#include "../abnf/Rule_m1.hpp"
#include "../abnf/Rule_IP6_multicast.hpp"
#include "../abnf/Rule_ttl.hpp"
#include "../abnf/Rule_FQDN.hpp"
#include "../abnf/Rule_email_safe.hpp"
#include "../abnf/Rule_URI.hpp"
#include "../abnf/Rule_hier_part.hpp"
#include "../abnf/Rule_URI_reference.hpp"
#include "../abnf/Rule_absolute_URI.hpp"
#include "../abnf/Rule_relative_ref.hpp"
#include "../abnf/Rule_relative_part.hpp"
#include "../abnf/Rule_scheme.hpp"
#include "../abnf/Rule_authority.hpp"
#include "../abnf/Rule_userinfo.hpp"
#include "../abnf/Rule_host.hpp"
#include "../abnf/Rule_IP_literal.hpp"
#include "../abnf/Rule_IPvFuture.hpp"
#include "../abnf/Rule_IPv6address.hpp"
#include "../abnf/Rule_h16.hpp"
#include "../abnf/Rule_ls32.hpp"
#include "../abnf/Rule_IPv4address.hpp"
#include "../abnf/Rule_dec_octet.hpp"
#include "../abnf/Rule_reg_name.hpp"
#include "../abnf/Rule_path.hpp"
#include "../abnf/Rule_path_abempty.hpp"
#include "../abnf/Rule_path_absolute.hpp"
#include "../abnf/Rule_path_noscheme.hpp"
#include "../abnf/Rule_path_rootless.hpp"
#include "../abnf/Rule_path_empty.hpp"
#include "../abnf/Rule_segment.hpp"
#include "../abnf/Rule_segment_nz.hpp"
#include "../abnf/Rule_segment_nz_nc.hpp"
#include "../abnf/Rule_pchar.hpp"
#include "../abnf/Rule_query.hpp"
#include "../abnf/Rule_fragment.hpp"
#include "../abnf/Rule_pct_encoded.hpp"
#include "../abnf/Rule_unreserved.hpp"
#include "../abnf/Rule_reserved.hpp"
#include "../abnf/Rule_gen_delims.hpp"
#include "../abnf/Rule_sub_delims.hpp"
#include "../abnf/Rule_addr_spec.hpp"
#include "../abnf/Rule_local_part.hpp"
#include "../abnf/Rule_domain.hpp"
#include "../abnf/Rule_domain_literal.hpp"
#include "../abnf/Rule_dcontent.hpp"
#include "../abnf/Rule_dtext.hpp"
#include "../abnf/Rule_NO_WS_CTL.hpp"
#include "../abnf/Rule_quoted_pair.hpp"
#include "../abnf/Rule_text.hpp"
#include "../abnf/Rule_FWS.hpp"
#include "../abnf/Rule_comment.hpp"
#include "../abnf/Rule_ccontent.hpp"
#include "../abnf/Rule_ctext.hpp"
#include "../abnf/Rule_dot_atom.hpp"
#include "../abnf/Rule_dot_atom_text.hpp"
#include "../abnf/Rule_atext.hpp"
#include "../abnf/Rule_integer.hpp"
#include "../abnf/Rule_alpha_numeric.hpp"
#include "../abnf/Rule_decimal_uchar.hpp"
#include "../abnf/Rule_decimal_uchar_1xx.hpp"
#include "../abnf/Rule_decimal_uchar_2xx.hpp"
#include "../abnf/Rule_decimal_uchar_25x.hpp"
#include "../abnf/Rule_BIT.hpp"
#include "../abnf/Rule_CHAR.hpp"
#include "../abnf/Rule_CR.hpp"
#include "../abnf/Rule_CTL.hpp"
#include "../abnf/Rule_HEXDIG.hpp"
#include "../abnf/Rule_HTAB.hpp"
#include "../abnf/Rule_LF.hpp"
#include "../abnf/Rule_LWSP.hpp"
#include "../abnf/Rule_OCTET.hpp"
#include "../abnf/Rule_SP.hpp"
#include "../abnf/Rule_VCHAR.hpp"
#include "../abnf/Rule_quoted_string.hpp"
#include "../abnf/Rule_qcontent.hpp"
#include "../abnf/Rule_qtext.hpp"
#include "../abnf/Rule_obs_local_part.hpp"
#include "../abnf/Rule_obs_domain.hpp"
#include "../abnf/Rule_obs_FWS.hpp"
#include "../abnf/Rule_obs_qp.hpp"
#include "../abnf/Rule_obs_text.hpp"
#include "../abnf/Rule_obs_char.hpp"
#include "../abnf/Rule_CFWS.hpp"
#include "../abnf/Rule_WSP.hpp"
#include "../abnf/Rule_atom.hpp"
#include "../abnf/Rule_word.hpp"
#include "../abnf/Rule_extn_addr.hpp"
#include "../abnf/Rule_non_ws_string.hpp"
#include "../abnf/Rule_byte_string.hpp"
#include "../abnf/Rule_CRLF.hpp"
#include "../abnf/Rule_token.hpp"
#include "../abnf/Rule_ALPHA.hpp"
#include "../abnf/Rule_DIGIT.hpp"
#include "../abnf/Rule_POS_DIGIT.hpp"
#include "../abnf/Rule_DQUOTE.hpp"
#include "../abnf/Rule_EQUALS.hpp"
#include "../abnf/Terminal_StringValue.hpp"
#include "../abnf/Terminal_NumericValue.hpp"

using namespace abnf;

void* Builder::visit(const Rule_session_description* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_proto_version* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_origin_field* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_session_name_field* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_information_field* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_uri_field* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_email_fields* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_email_field* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_phone_fields* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_phone_field* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_connection_field* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_bandwidth_fields* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_bandwidth_field* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_time_fields* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_time_repeat_field* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_time_field* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_repeat_field* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_zone_adjustments* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_key_field* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_attribute_fields* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_attribute_field* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_gen_attribute* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_sctpmap_attr* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_sctpmap_number* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_app* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_streams* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_fingerprint_attribute* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_hash_func* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_fingerprint* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_extmap_attribute* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_extension_identifier* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_extension_name* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_direction* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_extension_attributes* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_candidate_attribute* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_foundation* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_component_id* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_transport* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_transport_extension* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_priority* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_cand_type* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_candidate_types* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_rel_addr* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_rel_port* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_extension_att* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_extension_att_name* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_extension_att_value* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_ice_char* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_crypto_attribute* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_tag* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_crypto_suite* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_key_params* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_key_param* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_key_method* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_key_method_ext* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_key_info* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_key_salt* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_key_lifetime* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_key_mki* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_key_mki_value* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_key_mki_length* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_session_param* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_mid_attr* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_identification_tag* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_group_attr* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_group_semantics* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_ssrc_attr* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_ssrc_id* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_ssrc_group_attr* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_ssrc_group_semantics* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_cname_attr* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_cname* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_previous_ssrc_attr* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_rtpmap_attr* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_name* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_rate* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_parameters* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_fmtp_attr* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_param_list* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_media_descriptions* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_media_description* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_media_field* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_username* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_sess_id* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_sess_version* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_nettype* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_addrtype* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_email_address* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_address_and_comment* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_dispname_and_address* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_phone_number* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_phone* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_connection_address* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_unicast_address* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_bwtype* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_bandwidth* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_start_time* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_stop_time* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_time* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_repeat_interval* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_typed_time* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_fixed_len_time_unit* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_key_type* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_prompt_key_type* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_clear_key_type* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_base64_key_type* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_uri_key_type* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_base64* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_base64_unit* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_base64_pad* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_base64_char* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_attribute* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_att_field* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_att_value* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_media* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_fmt* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_proto* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_port* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_number_of_ports* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_IP4_multicast* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_m1* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_IP6_multicast* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_ttl* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_FQDN* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_email_safe* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_URI* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_hier_part* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_URI_reference* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_absolute_URI* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_relative_ref* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_relative_part* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_scheme* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_authority* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_userinfo* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_host* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_IP_literal* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_IPvFuture* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_IPv6address* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_h16* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_ls32* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_IPv4address* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_dec_octet* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_reg_name* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_path* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_path_abempty* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_path_absolute* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_path_noscheme* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_path_rootless* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_path_empty* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_segment* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_segment_nz* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_segment_nz_nc* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_pchar* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_query* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_fragment* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_pct_encoded* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_unreserved* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_reserved* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_gen_delims* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_sub_delims* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_addr_spec* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_local_part* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_domain* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_domain_literal* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_dcontent* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_dtext* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_NO_WS_CTL* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_quoted_pair* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_text* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_FWS* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_comment* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_ccontent* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_ctext* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_dot_atom* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_dot_atom_text* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_atext* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_integer* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_alpha_numeric* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_decimal_uchar* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_decimal_uchar_1xx* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_decimal_uchar_2xx* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_decimal_uchar_25x* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_BIT* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_CHAR* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_CR* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_CTL* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_HEXDIG* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_HTAB* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_LF* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_LWSP* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_OCTET* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_SP* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_VCHAR* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_quoted_string* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_qcontent* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_qtext* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_obs_local_part* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_obs_domain* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_obs_FWS* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_obs_qp* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_obs_text* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_obs_char* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_CFWS* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_WSP* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_atom* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_word* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_extn_addr* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_non_ws_string* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_byte_string* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_CRLF* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_token* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_ALPHA* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_DIGIT* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_POS_DIGIT* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_DQUOTE* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Rule_EQUALS* rule)
{
  return visitRules(rule->rules);
}

void* Builder::visit(const Terminal_StringValue* value)
{
  return NULL;
}

void* Builder::visit(const Terminal_NumericValue* value)
{
  return NULL;
}

void* Builder::visitRules(const vector<const Rule*>& rules)
{
  vector<const Rule*>::const_iterator i;
  for (i = rules.begin(); i != rules.end(); i++)
    (*i)->accept(*this);

  return NULL;
}
 