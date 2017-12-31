/* -----------------------------------------------------------------------------
 * XmlDisplayer.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef XmlDisplayer_hpp
#define XmlDisplayer_hpp

#include <vector>

#include "Visitor.hpp"

namespace abnf {

class Rule;

class XmlDisplayer : public Visitor
{
public:
  XmlDisplayer() : terminal(true) {}

  void* visit(const Rule_session_description* rule);
  void* visit(const Rule_proto_version* rule);
  void* visit(const Rule_origin_field* rule);
  void* visit(const Rule_session_name_field* rule);
  void* visit(const Rule_information_field* rule);
  void* visit(const Rule_uri_field* rule);
  void* visit(const Rule_email_fields* rule);
  void* visit(const Rule_email_field* rule);
  void* visit(const Rule_phone_fields* rule);
  void* visit(const Rule_phone_field* rule);
  void* visit(const Rule_connection_field* rule);
  void* visit(const Rule_bandwidth_fields* rule);
  void* visit(const Rule_bandwidth_field* rule);
  void* visit(const Rule_time_fields* rule);
  void* visit(const Rule_time_repeat_field* rule);
  void* visit(const Rule_time_field* rule);
  void* visit(const Rule_repeat_field* rule);
  void* visit(const Rule_zone_adjustments* rule);
  void* visit(const Rule_key_field* rule);
  void* visit(const Rule_attribute_fields* rule);
  void* visit(const Rule_attribute_field* rule);
  void* visit(const Rule_gen_attribute* rule);
  void* visit(const Rule_sctpmap_attr* rule);
  void* visit(const Rule_sctpmap_number* rule);
  void* visit(const Rule_app* rule);
  void* visit(const Rule_streams* rule);
  void* visit(const Rule_fingerprint_attribute* rule);
  void* visit(const Rule_hash_func* rule);
  void* visit(const Rule_fingerprint* rule);
  void* visit(const Rule_extmap_attribute* rule);
  void* visit(const Rule_extension_identifier* rule);
  void* visit(const Rule_extension_name* rule);
  void* visit(const Rule_direction* rule);
  void* visit(const Rule_extension_attributes* rule);
  void* visit(const Rule_candidate_attribute* rule);
  void* visit(const Rule_foundation* rule);
  void* visit(const Rule_component_id* rule);
  void* visit(const Rule_transport* rule);
  void* visit(const Rule_transport_extension* rule);
  void* visit(const Rule_priority* rule);
  void* visit(const Rule_cand_type* rule);
  void* visit(const Rule_candidate_types* rule);
  void* visit(const Rule_rel_addr* rule);
  void* visit(const Rule_rel_port* rule);
  void* visit(const Rule_extension_att* rule);
  void* visit(const Rule_extension_att_name* rule);
  void* visit(const Rule_extension_att_value* rule);
  void* visit(const Rule_ice_char* rule);
  void* visit(const Rule_crypto_attribute* rule);
  void* visit(const Rule_tag* rule);
  void* visit(const Rule_crypto_suite* rule);
  void* visit(const Rule_key_params* rule);
  void* visit(const Rule_key_param* rule);
  void* visit(const Rule_key_method* rule);
  void* visit(const Rule_key_method_ext* rule);
  void* visit(const Rule_key_info* rule);
  void* visit(const Rule_key_salt* rule);
  void* visit(const Rule_key_lifetime* rule);
  void* visit(const Rule_key_mki* rule);
  void* visit(const Rule_key_mki_value* rule);
  void* visit(const Rule_key_mki_length* rule);
  void* visit(const Rule_session_param* rule);
  void* visit(const Rule_mid_attr* rule);
  void* visit(const Rule_identification_tag* rule);
  void* visit(const Rule_group_attr* rule);
  void* visit(const Rule_group_semantics* rule);
  void* visit(const Rule_ssrc_attr* rule);
  void* visit(const Rule_ssrc_id* rule);
  void* visit(const Rule_ssrc_group_attr* rule);
  void* visit(const Rule_ssrc_group_semantics* rule);
  void* visit(const Rule_cname_attr* rule);
  void* visit(const Rule_cname* rule);
  void* visit(const Rule_previous_ssrc_attr* rule);
  void* visit(const Rule_rtpmap_attr* rule);
  void* visit(const Rule_name* rule);
  void* visit(const Rule_rate* rule);
  void* visit(const Rule_parameters* rule);
  void* visit(const Rule_fmtp_attr* rule);
  void* visit(const Rule_param_list* rule);
  void* visit(const Rule_media_descriptions* rule);
  void* visit(const Rule_media_description* rule);
  void* visit(const Rule_media_field* rule);
  void* visit(const Rule_username* rule);
  void* visit(const Rule_sess_id* rule);
  void* visit(const Rule_sess_version* rule);
  void* visit(const Rule_nettype* rule);
  void* visit(const Rule_addrtype* rule);
  void* visit(const Rule_email_address* rule);
  void* visit(const Rule_address_and_comment* rule);
  void* visit(const Rule_dispname_and_address* rule);
  void* visit(const Rule_phone_number* rule);
  void* visit(const Rule_phone* rule);
  void* visit(const Rule_connection_address* rule);
  void* visit(const Rule_unicast_address* rule);
  void* visit(const Rule_bwtype* rule);
  void* visit(const Rule_bandwidth* rule);
  void* visit(const Rule_start_time* rule);
  void* visit(const Rule_stop_time* rule);
  void* visit(const Rule_time* rule);
  void* visit(const Rule_repeat_interval* rule);
  void* visit(const Rule_typed_time* rule);
  void* visit(const Rule_fixed_len_time_unit* rule);
  void* visit(const Rule_key_type* rule);
  void* visit(const Rule_prompt_key_type* rule);
  void* visit(const Rule_clear_key_type* rule);
  void* visit(const Rule_base64_key_type* rule);
  void* visit(const Rule_uri_key_type* rule);
  void* visit(const Rule_base64* rule);
  void* visit(const Rule_base64_unit* rule);
  void* visit(const Rule_base64_pad* rule);
  void* visit(const Rule_base64_char* rule);
  void* visit(const Rule_attribute* rule);
  void* visit(const Rule_att_field* rule);
  void* visit(const Rule_att_value* rule);
  void* visit(const Rule_media* rule);
  void* visit(const Rule_fmt* rule);
  void* visit(const Rule_proto* rule);
  void* visit(const Rule_port* rule);
  void* visit(const Rule_number_of_ports* rule);
  void* visit(const Rule_IP4_multicast* rule);
  void* visit(const Rule_m1* rule);
  void* visit(const Rule_IP6_multicast* rule);
  void* visit(const Rule_ttl* rule);
  void* visit(const Rule_FQDN* rule);
  void* visit(const Rule_email_safe* rule);
  void* visit(const Rule_URI* rule);
  void* visit(const Rule_hier_part* rule);
  void* visit(const Rule_URI_reference* rule);
  void* visit(const Rule_absolute_URI* rule);
  void* visit(const Rule_relative_ref* rule);
  void* visit(const Rule_relative_part* rule);
  void* visit(const Rule_scheme* rule);
  void* visit(const Rule_authority* rule);
  void* visit(const Rule_userinfo* rule);
  void* visit(const Rule_host* rule);
  void* visit(const Rule_IP_literal* rule);
  void* visit(const Rule_IPvFuture* rule);
  void* visit(const Rule_IPv6address* rule);
  void* visit(const Rule_h16* rule);
  void* visit(const Rule_ls32* rule);
  void* visit(const Rule_IPv4address* rule);
  void* visit(const Rule_dec_octet* rule);
  void* visit(const Rule_reg_name* rule);
  void* visit(const Rule_path* rule);
  void* visit(const Rule_path_abempty* rule);
  void* visit(const Rule_path_absolute* rule);
  void* visit(const Rule_path_noscheme* rule);
  void* visit(const Rule_path_rootless* rule);
  void* visit(const Rule_path_empty* rule);
  void* visit(const Rule_segment* rule);
  void* visit(const Rule_segment_nz* rule);
  void* visit(const Rule_segment_nz_nc* rule);
  void* visit(const Rule_pchar* rule);
  void* visit(const Rule_query* rule);
  void* visit(const Rule_fragment* rule);
  void* visit(const Rule_pct_encoded* rule);
  void* visit(const Rule_unreserved* rule);
  void* visit(const Rule_reserved* rule);
  void* visit(const Rule_gen_delims* rule);
  void* visit(const Rule_sub_delims* rule);
  void* visit(const Rule_addr_spec* rule);
  void* visit(const Rule_local_part* rule);
  void* visit(const Rule_domain* rule);
  void* visit(const Rule_domain_literal* rule);
  void* visit(const Rule_dcontent* rule);
  void* visit(const Rule_dtext* rule);
  void* visit(const Rule_NO_WS_CTL* rule);
  void* visit(const Rule_quoted_pair* rule);
  void* visit(const Rule_text* rule);
  void* visit(const Rule_FWS* rule);
  void* visit(const Rule_comment* rule);
  void* visit(const Rule_ccontent* rule);
  void* visit(const Rule_ctext* rule);
  void* visit(const Rule_dot_atom* rule);
  void* visit(const Rule_dot_atom_text* rule);
  void* visit(const Rule_atext* rule);
  void* visit(const Rule_integer* rule);
  void* visit(const Rule_alpha_numeric* rule);
  void* visit(const Rule_decimal_uchar* rule);
  void* visit(const Rule_decimal_uchar_1xx* rule);
  void* visit(const Rule_decimal_uchar_2xx* rule);
  void* visit(const Rule_decimal_uchar_25x* rule);
  void* visit(const Rule_BIT* rule);
  void* visit(const Rule_CHAR* rule);
  void* visit(const Rule_CR* rule);
  void* visit(const Rule_CTL* rule);
  void* visit(const Rule_HEXDIG* rule);
  void* visit(const Rule_HTAB* rule);
  void* visit(const Rule_LF* rule);
  void* visit(const Rule_LWSP* rule);
  void* visit(const Rule_OCTET* rule);
  void* visit(const Rule_SP* rule);
  void* visit(const Rule_VCHAR* rule);
  void* visit(const Rule_quoted_string* rule);
  void* visit(const Rule_qcontent* rule);
  void* visit(const Rule_qtext* rule);
  void* visit(const Rule_obs_local_part* rule);
  void* visit(const Rule_obs_domain* rule);
  void* visit(const Rule_obs_FWS* rule);
  void* visit(const Rule_obs_qp* rule);
  void* visit(const Rule_obs_text* rule);
  void* visit(const Rule_obs_char* rule);
  void* visit(const Rule_CFWS* rule);
  void* visit(const Rule_WSP* rule);
  void* visit(const Rule_atom* rule);
  void* visit(const Rule_word* rule);
  void* visit(const Rule_extn_addr* rule);
  void* visit(const Rule_non_ws_string* rule);
  void* visit(const Rule_byte_string* rule);
  void* visit(const Rule_CRLF* rule);
  void* visit(const Rule_token* rule);
  void* visit(const Rule_ALPHA* rule);
  void* visit(const Rule_DIGIT* rule);
  void* visit(const Rule_POS_DIGIT* rule);
  void* visit(const Rule_DQUOTE* rule);
  void* visit(const Rule_EQUALS* rule);
  void* visit(const org.murillo.abnf.precomp.CRLF* rule);
  void* visit(const org.murillo.abnf.precomp.Token* rule);
  void* visit(const org.murillo.abnf.precomp.ALPHA* rule);
  void* visit(const org.murillo.abnf.precomp.ByteString* rule);

  void* visit(const Terminal_StringValue* value);
  void* visit(const Terminal_NumericValue* value);

private:
  bool terminal;

  void* visitRules(const std::vector<const Rule*>& rules);
};

}

#endif

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
