/* -----------------------------------------------------------------------------
 * XmlDisplayer.cpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include "XmlDisplayer.hpp"

#include "Rule_session_description.hpp"
#include "Rule_proto_version.hpp"
#include "Rule_origin_field.hpp"
#include "Rule_session_name_field.hpp"
#include "Rule_information_field.hpp"
#include "Rule_uri_field.hpp"
#include "Rule_email_fields.hpp"
#include "Rule_email_field.hpp"
#include "Rule_phone_fields.hpp"
#include "Rule_phone_field.hpp"
#include "Rule_connection_field.hpp"
#include "Rule_bandwidth_fields.hpp"
#include "Rule_bandwidth_field.hpp"
#include "Rule_time_fields.hpp"
#include "Rule_time_repeat_field.hpp"
#include "Rule_time_field.hpp"
#include "Rule_repeat_field.hpp"
#include "Rule_zone_adjustments.hpp"
#include "Rule_key_field.hpp"
#include "Rule_attribute_fields.hpp"
#include "Rule_attribute_field.hpp"
#include "Rule_gen_attribute.hpp"
#include "Rule_sctpmap_attr.hpp"
#include "Rule_sctpmap_number.hpp"
#include "Rule_app.hpp"
#include "Rule_streams.hpp"
#include "Rule_fingerprint_attribute.hpp"
#include "Rule_hash_func.hpp"
#include "Rule_fingerprint.hpp"
#include "Rule_extmap_attribute.hpp"
#include "Rule_extension_identifier.hpp"
#include "Rule_extension_name.hpp"
#include "Rule_direction.hpp"
#include "Rule_extension_attributes.hpp"
#include "Rule_candidate_attribute.hpp"
#include "Rule_foundation.hpp"
#include "Rule_component_id.hpp"
#include "Rule_transport.hpp"
#include "Rule_transport_extension.hpp"
#include "Rule_priority.hpp"
#include "Rule_cand_type.hpp"
#include "Rule_candidate_types.hpp"
#include "Rule_rel_addr.hpp"
#include "Rule_rel_port.hpp"
#include "Rule_extension_att.hpp"
#include "Rule_extension_att_name.hpp"
#include "Rule_extension_att_value.hpp"
#include "Rule_ice_char.hpp"
#include "Rule_crypto_attribute.hpp"
#include "Rule_tag.hpp"
#include "Rule_crypto_suite.hpp"
#include "Rule_key_params.hpp"
#include "Rule_key_param.hpp"
#include "Rule_key_method.hpp"
#include "Rule_key_method_ext.hpp"
#include "Rule_key_info.hpp"
#include "Rule_key_salt.hpp"
#include "Rule_key_lifetime.hpp"
#include "Rule_key_mki.hpp"
#include "Rule_key_mki_value.hpp"
#include "Rule_key_mki_length.hpp"
#include "Rule_session_param.hpp"
#include "Rule_mid_attr.hpp"
#include "Rule_identification_tag.hpp"
#include "Rule_group_attr.hpp"
#include "Rule_group_semantics.hpp"
#include "Rule_ssrc_attr.hpp"
#include "Rule_ssrc_id.hpp"
#include "Rule_ssrc_group_attr.hpp"
#include "Rule_ssrc_group_semantics.hpp"
#include "Rule_cname_attr.hpp"
#include "Rule_cname.hpp"
#include "Rule_previous_ssrc_attr.hpp"
#include "Rule_rtpmap_attr.hpp"
#include "Rule_name.hpp"
#include "Rule_rate.hpp"
#include "Rule_parameters.hpp"
#include "Rule_fmtp_attr.hpp"
#include "Rule_param_list.hpp"
#include "Rule_media_descriptions.hpp"
#include "Rule_media_description.hpp"
#include "Rule_media_field.hpp"
#include "Rule_username.hpp"
#include "Rule_sess_id.hpp"
#include "Rule_sess_version.hpp"
#include "Rule_nettype.hpp"
#include "Rule_addrtype.hpp"
#include "Rule_email_address.hpp"
#include "Rule_address_and_comment.hpp"
#include "Rule_dispname_and_address.hpp"
#include "Rule_phone_number.hpp"
#include "Rule_phone.hpp"
#include "Rule_connection_address.hpp"
#include "Rule_unicast_address.hpp"
#include "Rule_bwtype.hpp"
#include "Rule_bandwidth.hpp"
#include "Rule_start_time.hpp"
#include "Rule_stop_time.hpp"
#include "Rule_time.hpp"
#include "Rule_repeat_interval.hpp"
#include "Rule_typed_time.hpp"
#include "Rule_fixed_len_time_unit.hpp"
#include "Rule_key_type.hpp"
#include "Rule_prompt_key_type.hpp"
#include "Rule_clear_key_type.hpp"
#include "Rule_base64_key_type.hpp"
#include "Rule_uri_key_type.hpp"
#include "Rule_base64.hpp"
#include "Rule_base64_unit.hpp"
#include "Rule_base64_pad.hpp"
#include "Rule_base64_char.hpp"
#include "Rule_attribute.hpp"
#include "Rule_att_field.hpp"
#include "Rule_att_value.hpp"
#include "Rule_media.hpp"
#include "Rule_fmt.hpp"
#include "Rule_proto.hpp"
#include "Rule_port.hpp"
#include "Rule_number_of_ports.hpp"
#include "Rule_IP4_multicast.hpp"
#include "Rule_m1.hpp"
#include "Rule_IP6_multicast.hpp"
#include "Rule_ttl.hpp"
#include "Rule_FQDN.hpp"
#include "Rule_email_safe.hpp"
#include "Rule_URI.hpp"
#include "Rule_hier_part.hpp"
#include "Rule_URI_reference.hpp"
#include "Rule_absolute_URI.hpp"
#include "Rule_relative_ref.hpp"
#include "Rule_relative_part.hpp"
#include "Rule_scheme.hpp"
#include "Rule_authority.hpp"
#include "Rule_userinfo.hpp"
#include "Rule_host.hpp"
#include "Rule_IP_literal.hpp"
#include "Rule_IPvFuture.hpp"
#include "Rule_IPv6address.hpp"
#include "Rule_h16.hpp"
#include "Rule_ls32.hpp"
#include "Rule_IPv4address.hpp"
#include "Rule_dec_octet.hpp"
#include "Rule_reg_name.hpp"
#include "Rule_path.hpp"
#include "Rule_path_abempty.hpp"
#include "Rule_path_absolute.hpp"
#include "Rule_path_noscheme.hpp"
#include "Rule_path_rootless.hpp"
#include "Rule_path_empty.hpp"
#include "Rule_segment.hpp"
#include "Rule_segment_nz.hpp"
#include "Rule_segment_nz_nc.hpp"
#include "Rule_pchar.hpp"
#include "Rule_query.hpp"
#include "Rule_fragment.hpp"
#include "Rule_pct_encoded.hpp"
#include "Rule_unreserved.hpp"
#include "Rule_reserved.hpp"
#include "Rule_gen_delims.hpp"
#include "Rule_sub_delims.hpp"
#include "Rule_addr_spec.hpp"
#include "Rule_local_part.hpp"
#include "Rule_domain.hpp"
#include "Rule_domain_literal.hpp"
#include "Rule_dcontent.hpp"
#include "Rule_dtext.hpp"
#include "Rule_NO_WS_CTL.hpp"
#include "Rule_quoted_pair.hpp"
#include "Rule_text.hpp"
#include "Rule_FWS.hpp"
#include "Rule_comment.hpp"
#include "Rule_ccontent.hpp"
#include "Rule_ctext.hpp"
#include "Rule_dot_atom.hpp"
#include "Rule_dot_atom_text.hpp"
#include "Rule_atext.hpp"
#include "Rule_integer.hpp"
#include "Rule_alpha_numeric.hpp"
#include "Rule_decimal_uchar.hpp"
#include "Rule_decimal_uchar_1xx.hpp"
#include "Rule_decimal_uchar_2xx.hpp"
#include "Rule_decimal_uchar_25x.hpp"
#include "Rule_BIT.hpp"
#include "Rule_CHAR.hpp"
#include "Rule_CR.hpp"
#include "Rule_CTL.hpp"
#include "Rule_HEXDIG.hpp"
#include "Rule_HTAB.hpp"
#include "Rule_LF.hpp"
#include "Rule_LWSP.hpp"
#include "Rule_OCTET.hpp"
#include "Rule_SP.hpp"
#include "Rule_VCHAR.hpp"
#include "Rule_quoted_string.hpp"
#include "Rule_qcontent.hpp"
#include "Rule_qtext.hpp"
#include "Rule_obs_local_part.hpp"
#include "Rule_obs_domain.hpp"
#include "Rule_obs_FWS.hpp"
#include "Rule_obs_qp.hpp"
#include "Rule_obs_text.hpp"
#include "Rule_obs_char.hpp"
#include "Rule_CFWS.hpp"
#include "Rule_WSP.hpp"
#include "Rule_atom.hpp"
#include "Rule_word.hpp"
#include "Rule_extn_addr.hpp"
#include "Rule_non_ws_string.hpp"
#include "Rule_byte_string.hpp"
#include "Rule_CRLF.hpp"
#include "Rule_token.hpp"
#include "Rule_ALPHA.hpp"
#include "Rule_DIGIT.hpp"
#include "Rule_POS_DIGIT.hpp"
#include "Rule_DQUOTE.hpp"
#include "Rule_EQUALS.hpp"
#include "org.murillo.abnf.precomp.CRLF.hpp"
#include "org.murillo.abnf.precomp.Token.hpp"
#include "org.murillo.abnf.precomp.ALPHA.hpp"
#include "org.murillo.abnf.precomp.ByteString.hpp"
#include "Terminal_StringValue.hpp"
#include "Terminal_NumericValue.hpp"

using namespace abnf;

void* XmlDisplayer::visit(const Rule_session_description* rule)
{
  if (!terminal) cout << endl;
  cout << "<session-description>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</session-description>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_proto_version* rule)
{
  if (!terminal) cout << endl;
  cout << "<proto-version>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</proto-version>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_origin_field* rule)
{
  if (!terminal) cout << endl;
  cout << "<origin-field>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</origin-field>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_session_name_field* rule)
{
  if (!terminal) cout << endl;
  cout << "<session-name-field>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</session-name-field>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_information_field* rule)
{
  if (!terminal) cout << endl;
  cout << "<information-field>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</information-field>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_uri_field* rule)
{
  if (!terminal) cout << endl;
  cout << "<uri-field>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</uri-field>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_email_fields* rule)
{
  if (!terminal) cout << endl;
  cout << "<email-fields>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</email-fields>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_email_field* rule)
{
  if (!terminal) cout << endl;
  cout << "<email-field>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</email-field>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_phone_fields* rule)
{
  if (!terminal) cout << endl;
  cout << "<phone-fields>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</phone-fields>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_phone_field* rule)
{
  if (!terminal) cout << endl;
  cout << "<phone-field>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</phone-field>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_connection_field* rule)
{
  if (!terminal) cout << endl;
  cout << "<connection-field>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</connection-field>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_bandwidth_fields* rule)
{
  if (!terminal) cout << endl;
  cout << "<bandwidth-fields>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</bandwidth-fields>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_bandwidth_field* rule)
{
  if (!terminal) cout << endl;
  cout << "<bandwidth-field>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</bandwidth-field>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_time_fields* rule)
{
  if (!terminal) cout << endl;
  cout << "<time-fields>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</time-fields>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_time_repeat_field* rule)
{
  if (!terminal) cout << endl;
  cout << "<time-repeat-field>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</time-repeat-field>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_time_field* rule)
{
  if (!terminal) cout << endl;
  cout << "<time-field>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</time-field>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_repeat_field* rule)
{
  if (!terminal) cout << endl;
  cout << "<repeat-field>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</repeat-field>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_zone_adjustments* rule)
{
  if (!terminal) cout << endl;
  cout << "<zone-adjustments>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</zone-adjustments>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_key_field* rule)
{
  if (!terminal) cout << endl;
  cout << "<key-field>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</key-field>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_attribute_fields* rule)
{
  if (!terminal) cout << endl;
  cout << "<attribute-fields>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</attribute-fields>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_attribute_field* rule)
{
  if (!terminal) cout << endl;
  cout << "<attribute-field>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</attribute-field>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_gen_attribute* rule)
{
  if (!terminal) cout << endl;
  cout << "<gen-attribute>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</gen-attribute>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_sctpmap_attr* rule)
{
  if (!terminal) cout << endl;
  cout << "<sctpmap-attr>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</sctpmap-attr>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_sctpmap_number* rule)
{
  if (!terminal) cout << endl;
  cout << "<sctpmap-number>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</sctpmap-number>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_app* rule)
{
  if (!terminal) cout << endl;
  cout << "<app>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</app>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_streams* rule)
{
  if (!terminal) cout << endl;
  cout << "<streams>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</streams>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_fingerprint_attribute* rule)
{
  if (!terminal) cout << endl;
  cout << "<fingerprint-attribute>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</fingerprint-attribute>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_hash_func* rule)
{
  if (!terminal) cout << endl;
  cout << "<hash-func>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</hash-func>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_fingerprint* rule)
{
  if (!terminal) cout << endl;
  cout << "<fingerprint>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</fingerprint>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_extmap_attribute* rule)
{
  if (!terminal) cout << endl;
  cout << "<extmap-attribute>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</extmap-attribute>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_extension_identifier* rule)
{
  if (!terminal) cout << endl;
  cout << "<extension-identifier>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</extension-identifier>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_extension_name* rule)
{
  if (!terminal) cout << endl;
  cout << "<extension-name>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</extension-name>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_direction* rule)
{
  if (!terminal) cout << endl;
  cout << "<direction>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</direction>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_extension_attributes* rule)
{
  if (!terminal) cout << endl;
  cout << "<extension-attributes>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</extension-attributes>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_candidate_attribute* rule)
{
  if (!terminal) cout << endl;
  cout << "<candidate-attribute>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</candidate-attribute>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_foundation* rule)
{
  if (!terminal) cout << endl;
  cout << "<foundation>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</foundation>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_component_id* rule)
{
  if (!terminal) cout << endl;
  cout << "<component-id>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</component-id>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_transport* rule)
{
  if (!terminal) cout << endl;
  cout << "<transport>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</transport>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_transport_extension* rule)
{
  if (!terminal) cout << endl;
  cout << "<transport-extension>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</transport-extension>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_priority* rule)
{
  if (!terminal) cout << endl;
  cout << "<priority>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</priority>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_cand_type* rule)
{
  if (!terminal) cout << endl;
  cout << "<cand-type>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</cand-type>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_candidate_types* rule)
{
  if (!terminal) cout << endl;
  cout << "<candidate-types>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</candidate-types>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_rel_addr* rule)
{
  if (!terminal) cout << endl;
  cout << "<rel-addr>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</rel-addr>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_rel_port* rule)
{
  if (!terminal) cout << endl;
  cout << "<rel-port>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</rel-port>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_extension_att* rule)
{
  if (!terminal) cout << endl;
  cout << "<extension-att>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</extension-att>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_extension_att_name* rule)
{
  if (!terminal) cout << endl;
  cout << "<extension-att-name>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</extension-att-name>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_extension_att_value* rule)
{
  if (!terminal) cout << endl;
  cout << "<extension-att-value>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</extension-att-value>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_ice_char* rule)
{
  if (!terminal) cout << endl;
  cout << "<ice-char>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</ice-char>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_crypto_attribute* rule)
{
  if (!terminal) cout << endl;
  cout << "<crypto-attribute>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</crypto-attribute>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_tag* rule)
{
  if (!terminal) cout << endl;
  cout << "<tag>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</tag>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_crypto_suite* rule)
{
  if (!terminal) cout << endl;
  cout << "<crypto-suite>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</crypto-suite>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_key_params* rule)
{
  if (!terminal) cout << endl;
  cout << "<key-params>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</key-params>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_key_param* rule)
{
  if (!terminal) cout << endl;
  cout << "<key-param>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</key-param>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_key_method* rule)
{
  if (!terminal) cout << endl;
  cout << "<key-method>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</key-method>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_key_method_ext* rule)
{
  if (!terminal) cout << endl;
  cout << "<key-method-ext>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</key-method-ext>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_key_info* rule)
{
  if (!terminal) cout << endl;
  cout << "<key-info>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</key-info>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_key_salt* rule)
{
  if (!terminal) cout << endl;
  cout << "<key-salt>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</key-salt>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_key_lifetime* rule)
{
  if (!terminal) cout << endl;
  cout << "<key-lifetime>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</key-lifetime>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_key_mki* rule)
{
  if (!terminal) cout << endl;
  cout << "<key-mki>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</key-mki>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_key_mki_value* rule)
{
  if (!terminal) cout << endl;
  cout << "<key-mki-value>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</key-mki-value>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_key_mki_length* rule)
{
  if (!terminal) cout << endl;
  cout << "<key-mki-length>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</key-mki-length>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_session_param* rule)
{
  if (!terminal) cout << endl;
  cout << "<session-param>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</session-param>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_mid_attr* rule)
{
  if (!terminal) cout << endl;
  cout << "<mid-attr>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</mid-attr>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_identification_tag* rule)
{
  if (!terminal) cout << endl;
  cout << "<identification-tag>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</identification-tag>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_group_attr* rule)
{
  if (!terminal) cout << endl;
  cout << "<group-attr>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</group-attr>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_group_semantics* rule)
{
  if (!terminal) cout << endl;
  cout << "<group-semantics>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</group-semantics>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_ssrc_attr* rule)
{
  if (!terminal) cout << endl;
  cout << "<ssrc-attr>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</ssrc-attr>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_ssrc_id* rule)
{
  if (!terminal) cout << endl;
  cout << "<ssrc-id>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</ssrc-id>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_ssrc_group_attr* rule)
{
  if (!terminal) cout << endl;
  cout << "<ssrc-group-attr>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</ssrc-group-attr>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_ssrc_group_semantics* rule)
{
  if (!terminal) cout << endl;
  cout << "<ssrc-group-semantics>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</ssrc-group-semantics>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_cname_attr* rule)
{
  if (!terminal) cout << endl;
  cout << "<cname-attr>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</cname-attr>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_cname* rule)
{
  if (!terminal) cout << endl;
  cout << "<cname>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</cname>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_previous_ssrc_attr* rule)
{
  if (!terminal) cout << endl;
  cout << "<previous-ssrc-attr>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</previous-ssrc-attr>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_rtpmap_attr* rule)
{
  if (!terminal) cout << endl;
  cout << "<rtpmap-attr>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</rtpmap-attr>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_name* rule)
{
  if (!terminal) cout << endl;
  cout << "<name>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</name>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_rate* rule)
{
  if (!terminal) cout << endl;
  cout << "<rate>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</rate>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_parameters* rule)
{
  if (!terminal) cout << endl;
  cout << "<parameters>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</parameters>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_fmtp_attr* rule)
{
  if (!terminal) cout << endl;
  cout << "<fmtp-attr>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</fmtp-attr>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_param_list* rule)
{
  if (!terminal) cout << endl;
  cout << "<param-list>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</param-list>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_media_descriptions* rule)
{
  if (!terminal) cout << endl;
  cout << "<media-descriptions>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</media-descriptions>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_media_description* rule)
{
  if (!terminal) cout << endl;
  cout << "<media-description>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</media-description>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_media_field* rule)
{
  if (!terminal) cout << endl;
  cout << "<media-field>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</media-field>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_username* rule)
{
  if (!terminal) cout << endl;
  cout << "<username>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</username>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_sess_id* rule)
{
  if (!terminal) cout << endl;
  cout << "<sess-id>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</sess-id>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_sess_version* rule)
{
  if (!terminal) cout << endl;
  cout << "<sess-version>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</sess-version>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_nettype* rule)
{
  if (!terminal) cout << endl;
  cout << "<nettype>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</nettype>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_addrtype* rule)
{
  if (!terminal) cout << endl;
  cout << "<addrtype>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</addrtype>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_email_address* rule)
{
  if (!terminal) cout << endl;
  cout << "<email-address>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</email-address>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_address_and_comment* rule)
{
  if (!terminal) cout << endl;
  cout << "<address-and-comment>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</address-and-comment>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_dispname_and_address* rule)
{
  if (!terminal) cout << endl;
  cout << "<dispname-and-address>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</dispname-and-address>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_phone_number* rule)
{
  if (!terminal) cout << endl;
  cout << "<phone-number>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</phone-number>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_phone* rule)
{
  if (!terminal) cout << endl;
  cout << "<phone>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</phone>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_connection_address* rule)
{
  if (!terminal) cout << endl;
  cout << "<connection-address>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</connection-address>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_unicast_address* rule)
{
  if (!terminal) cout << endl;
  cout << "<unicast-address>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</unicast-address>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_bwtype* rule)
{
  if (!terminal) cout << endl;
  cout << "<bwtype>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</bwtype>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_bandwidth* rule)
{
  if (!terminal) cout << endl;
  cout << "<bandwidth>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</bandwidth>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_start_time* rule)
{
  if (!terminal) cout << endl;
  cout << "<start-time>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</start-time>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_stop_time* rule)
{
  if (!terminal) cout << endl;
  cout << "<stop-time>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</stop-time>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_time* rule)
{
  if (!terminal) cout << endl;
  cout << "<time>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</time>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_repeat_interval* rule)
{
  if (!terminal) cout << endl;
  cout << "<repeat-interval>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</repeat-interval>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_typed_time* rule)
{
  if (!terminal) cout << endl;
  cout << "<typed-time>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</typed-time>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_fixed_len_time_unit* rule)
{
  if (!terminal) cout << endl;
  cout << "<fixed-len-time-unit>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</fixed-len-time-unit>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_key_type* rule)
{
  if (!terminal) cout << endl;
  cout << "<key-type>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</key-type>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_prompt_key_type* rule)
{
  if (!terminal) cout << endl;
  cout << "<prompt-key-type>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</prompt-key-type>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_clear_key_type* rule)
{
  if (!terminal) cout << endl;
  cout << "<clear-key-type>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</clear-key-type>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_base64_key_type* rule)
{
  if (!terminal) cout << endl;
  cout << "<base64-key-type>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</base64-key-type>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_uri_key_type* rule)
{
  if (!terminal) cout << endl;
  cout << "<uri-key-type>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</uri-key-type>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_base64* rule)
{
  if (!terminal) cout << endl;
  cout << "<base64>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</base64>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_base64_unit* rule)
{
  if (!terminal) cout << endl;
  cout << "<base64-unit>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</base64-unit>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_base64_pad* rule)
{
  if (!terminal) cout << endl;
  cout << "<base64-pad>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</base64-pad>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_base64_char* rule)
{
  if (!terminal) cout << endl;
  cout << "<base64-char>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</base64-char>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_attribute* rule)
{
  if (!terminal) cout << endl;
  cout << "<attribute>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</attribute>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_att_field* rule)
{
  if (!terminal) cout << endl;
  cout << "<att-field>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</att-field>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_att_value* rule)
{
  if (!terminal) cout << endl;
  cout << "<att-value>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</att-value>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_media* rule)
{
  if (!terminal) cout << endl;
  cout << "<media>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</media>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_fmt* rule)
{
  if (!terminal) cout << endl;
  cout << "<fmt>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</fmt>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_proto* rule)
{
  if (!terminal) cout << endl;
  cout << "<proto>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</proto>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_port* rule)
{
  if (!terminal) cout << endl;
  cout << "<port>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</port>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_number_of_ports* rule)
{
  if (!terminal) cout << endl;
  cout << "<number-of-ports>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</number-of-ports>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_IP4_multicast* rule)
{
  if (!terminal) cout << endl;
  cout << "<IP4-multicast>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</IP4-multicast>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_m1* rule)
{
  if (!terminal) cout << endl;
  cout << "<m1>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</m1>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_IP6_multicast* rule)
{
  if (!terminal) cout << endl;
  cout << "<IP6-multicast>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</IP6-multicast>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_ttl* rule)
{
  if (!terminal) cout << endl;
  cout << "<ttl>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</ttl>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_FQDN* rule)
{
  if (!terminal) cout << endl;
  cout << "<FQDN>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</FQDN>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_email_safe* rule)
{
  if (!terminal) cout << endl;
  cout << "<email-safe>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</email-safe>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_URI* rule)
{
  if (!terminal) cout << endl;
  cout << "<URI>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</URI>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_hier_part* rule)
{
  if (!terminal) cout << endl;
  cout << "<hier-part>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</hier-part>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_URI_reference* rule)
{
  if (!terminal) cout << endl;
  cout << "<URI-reference>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</URI-reference>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_absolute_URI* rule)
{
  if (!terminal) cout << endl;
  cout << "<absolute-URI>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</absolute-URI>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_relative_ref* rule)
{
  if (!terminal) cout << endl;
  cout << "<relative-ref>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</relative-ref>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_relative_part* rule)
{
  if (!terminal) cout << endl;
  cout << "<relative-part>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</relative-part>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_scheme* rule)
{
  if (!terminal) cout << endl;
  cout << "<scheme>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</scheme>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_authority* rule)
{
  if (!terminal) cout << endl;
  cout << "<authority>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</authority>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_userinfo* rule)
{
  if (!terminal) cout << endl;
  cout << "<userinfo>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</userinfo>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_host* rule)
{
  if (!terminal) cout << endl;
  cout << "<host>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</host>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_IP_literal* rule)
{
  if (!terminal) cout << endl;
  cout << "<IP-literal>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</IP-literal>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_IPvFuture* rule)
{
  if (!terminal) cout << endl;
  cout << "<IPvFuture>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</IPvFuture>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_IPv6address* rule)
{
  if (!terminal) cout << endl;
  cout << "<IPv6address>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</IPv6address>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_h16* rule)
{
  if (!terminal) cout << endl;
  cout << "<h16>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</h16>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_ls32* rule)
{
  if (!terminal) cout << endl;
  cout << "<ls32>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</ls32>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_IPv4address* rule)
{
  if (!terminal) cout << endl;
  cout << "<IPv4address>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</IPv4address>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_dec_octet* rule)
{
  if (!terminal) cout << endl;
  cout << "<dec-octet>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</dec-octet>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_reg_name* rule)
{
  if (!terminal) cout << endl;
  cout << "<reg-name>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</reg-name>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_path* rule)
{
  if (!terminal) cout << endl;
  cout << "<path>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</path>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_path_abempty* rule)
{
  if (!terminal) cout << endl;
  cout << "<path-abempty>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</path-abempty>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_path_absolute* rule)
{
  if (!terminal) cout << endl;
  cout << "<path-absolute>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</path-absolute>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_path_noscheme* rule)
{
  if (!terminal) cout << endl;
  cout << "<path-noscheme>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</path-noscheme>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_path_rootless* rule)
{
  if (!terminal) cout << endl;
  cout << "<path-rootless>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</path-rootless>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_path_empty* rule)
{
  if (!terminal) cout << endl;
  cout << "<path-empty>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</path-empty>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_segment* rule)
{
  if (!terminal) cout << endl;
  cout << "<segment>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</segment>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_segment_nz* rule)
{
  if (!terminal) cout << endl;
  cout << "<segment-nz>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</segment-nz>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_segment_nz_nc* rule)
{
  if (!terminal) cout << endl;
  cout << "<segment-nz-nc>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</segment-nz-nc>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_pchar* rule)
{
  if (!terminal) cout << endl;
  cout << "<pchar>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</pchar>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_query* rule)
{
  if (!terminal) cout << endl;
  cout << "<query>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</query>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_fragment* rule)
{
  if (!terminal) cout << endl;
  cout << "<fragment>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</fragment>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_pct_encoded* rule)
{
  if (!terminal) cout << endl;
  cout << "<pct-encoded>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</pct-encoded>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_unreserved* rule)
{
  if (!terminal) cout << endl;
  cout << "<unreserved>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</unreserved>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_reserved* rule)
{
  if (!terminal) cout << endl;
  cout << "<reserved>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</reserved>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_gen_delims* rule)
{
  if (!terminal) cout << endl;
  cout << "<gen-delims>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</gen-delims>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_sub_delims* rule)
{
  if (!terminal) cout << endl;
  cout << "<sub-delims>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</sub-delims>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_addr_spec* rule)
{
  if (!terminal) cout << endl;
  cout << "<addr-spec>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</addr-spec>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_local_part* rule)
{
  if (!terminal) cout << endl;
  cout << "<local-part>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</local-part>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_domain* rule)
{
  if (!terminal) cout << endl;
  cout << "<domain>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</domain>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_domain_literal* rule)
{
  if (!terminal) cout << endl;
  cout << "<domain-literal>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</domain-literal>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_dcontent* rule)
{
  if (!terminal) cout << endl;
  cout << "<dcontent>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</dcontent>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_dtext* rule)
{
  if (!terminal) cout << endl;
  cout << "<dtext>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</dtext>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_NO_WS_CTL* rule)
{
  if (!terminal) cout << endl;
  cout << "<NO-WS-CTL>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</NO-WS-CTL>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_quoted_pair* rule)
{
  if (!terminal) cout << endl;
  cout << "<quoted-pair>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</quoted-pair>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_text* rule)
{
  if (!terminal) cout << endl;
  cout << "<text>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</text>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_FWS* rule)
{
  if (!terminal) cout << endl;
  cout << "<FWS>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</FWS>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_comment* rule)
{
  if (!terminal) cout << endl;
  cout << "<comment>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</comment>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_ccontent* rule)
{
  if (!terminal) cout << endl;
  cout << "<ccontent>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</ccontent>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_ctext* rule)
{
  if (!terminal) cout << endl;
  cout << "<ctext>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</ctext>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_dot_atom* rule)
{
  if (!terminal) cout << endl;
  cout << "<dot-atom>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</dot-atom>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_dot_atom_text* rule)
{
  if (!terminal) cout << endl;
  cout << "<dot-atom-text>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</dot-atom-text>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_atext* rule)
{
  if (!terminal) cout << endl;
  cout << "<atext>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</atext>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_integer* rule)
{
  if (!terminal) cout << endl;
  cout << "<integer>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</integer>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_alpha_numeric* rule)
{
  if (!terminal) cout << endl;
  cout << "<alpha-numeric>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</alpha-numeric>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_decimal_uchar* rule)
{
  if (!terminal) cout << endl;
  cout << "<decimal-uchar>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</decimal-uchar>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_decimal_uchar_1xx* rule)
{
  if (!terminal) cout << endl;
  cout << "<decimal-uchar-1xx>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</decimal-uchar-1xx>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_decimal_uchar_2xx* rule)
{
  if (!terminal) cout << endl;
  cout << "<decimal-uchar-2xx>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</decimal-uchar-2xx>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_decimal_uchar_25x* rule)
{
  if (!terminal) cout << endl;
  cout << "<decimal-uchar-25x>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</decimal-uchar-25x>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_BIT* rule)
{
  if (!terminal) cout << endl;
  cout << "<BIT>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</BIT>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_CHAR* rule)
{
  if (!terminal) cout << endl;
  cout << "<CHAR>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</CHAR>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_CR* rule)
{
  if (!terminal) cout << endl;
  cout << "<CR>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</CR>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_CTL* rule)
{
  if (!terminal) cout << endl;
  cout << "<CTL>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</CTL>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_HEXDIG* rule)
{
  if (!terminal) cout << endl;
  cout << "<HEXDIG>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</HEXDIG>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_HTAB* rule)
{
  if (!terminal) cout << endl;
  cout << "<HTAB>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</HTAB>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_LF* rule)
{
  if (!terminal) cout << endl;
  cout << "<LF>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</LF>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_LWSP* rule)
{
  if (!terminal) cout << endl;
  cout << "<LWSP>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</LWSP>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_OCTET* rule)
{
  if (!terminal) cout << endl;
  cout << "<OCTET>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</OCTET>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_SP* rule)
{
  if (!terminal) cout << endl;
  cout << "<SP>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</SP>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_VCHAR* rule)
{
  if (!terminal) cout << endl;
  cout << "<VCHAR>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</VCHAR>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_quoted_string* rule)
{
  if (!terminal) cout << endl;
  cout << "<quoted-string>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</quoted-string>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_qcontent* rule)
{
  if (!terminal) cout << endl;
  cout << "<qcontent>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</qcontent>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_qtext* rule)
{
  if (!terminal) cout << endl;
  cout << "<qtext>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</qtext>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_obs_local_part* rule)
{
  if (!terminal) cout << endl;
  cout << "<obs-local-part>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</obs-local-part>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_obs_domain* rule)
{
  if (!terminal) cout << endl;
  cout << "<obs-domain>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</obs-domain>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_obs_FWS* rule)
{
  if (!terminal) cout << endl;
  cout << "<obs-FWS>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</obs-FWS>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_obs_qp* rule)
{
  if (!terminal) cout << endl;
  cout << "<obs-qp>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</obs-qp>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_obs_text* rule)
{
  if (!terminal) cout << endl;
  cout << "<obs-text>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</obs-text>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_obs_char* rule)
{
  if (!terminal) cout << endl;
  cout << "<obs-char>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</obs-char>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_CFWS* rule)
{
  if (!terminal) cout << endl;
  cout << "<CFWS>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</CFWS>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_WSP* rule)
{
  if (!terminal) cout << endl;
  cout << "<WSP>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</WSP>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_atom* rule)
{
  if (!terminal) cout << endl;
  cout << "<atom>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</atom>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_word* rule)
{
  if (!terminal) cout << endl;
  cout << "<word>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</word>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_extn_addr* rule)
{
  if (!terminal) cout << endl;
  cout << "<extn-addr>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</extn-addr>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_non_ws_string* rule)
{
  if (!terminal) cout << endl;
  cout << "<non-ws-string>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</non-ws-string>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_byte_string* rule)
{
  if (!terminal) cout << endl;
  cout << "<byte-string>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</byte-string>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_CRLF* rule)
{
  if (!terminal) cout << endl;
  cout << "<CRLF>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</CRLF>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_token* rule)
{
  if (!terminal) cout << endl;
  cout << "<token>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</token>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_ALPHA* rule)
{
  if (!terminal) cout << endl;
  cout << "<ALPHA>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</ALPHA>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_DIGIT* rule)
{
  if (!terminal) cout << endl;
  cout << "<DIGIT>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</DIGIT>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_POS_DIGIT* rule)
{
  if (!terminal) cout << endl;
  cout << "<POS-DIGIT>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</POS-DIGIT>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_DQUOTE* rule)
{
  if (!terminal) cout << endl;
  cout << "<DQUOTE>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</DQUOTE>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Rule_EQUALS* rule)
{
  if (!terminal) cout << endl;
  cout << "<EQUALS>";
  terminal = false;
  visitRules(rule->rules);
  if (!terminal) cout << endl;
  cout << "</EQUALS>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const org.murillo.abnf.precomp.CRLF* rule)
{
  if (!terminal) cout << endl;
  cout << "<org.murillo.abnf.precomp.CRLF>";
  cout << rule->spelling;
  cout << "</org.murillo.abnf.precomp.CRLF>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const org.murillo.abnf.precomp.Token* rule)
{
  if (!terminal) cout << endl;
  cout << "<org.murillo.abnf.precomp.Token>";
  cout << rule->spelling;
  cout << "</org.murillo.abnf.precomp.Token>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const org.murillo.abnf.precomp.ALPHA* rule)
{
  if (!terminal) cout << endl;
  cout << "<org.murillo.abnf.precomp.ALPHA>";
  cout << rule->spelling;
  cout << "</org.murillo.abnf.precomp.ALPHA>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const org.murillo.abnf.precomp.ByteString* rule)
{
  if (!terminal) cout << endl;
  cout << "<org.murillo.abnf.precomp.ByteString>";
  cout << rule->spelling;
  cout << "</org.murillo.abnf.precomp.ByteString>";
  terminal = false;
  return NULL;
}

void* XmlDisplayer::visit(const Terminal_StringValue* value)
{
  cout << value->spelling;
  terminal = true;
  return NULL;
}

void* XmlDisplayer::visit(const Terminal_NumericValue* value)
{
  cout << value->spelling;
  terminal = true;
  return NULL;
}

void* XmlDisplayer::visitRules(const vector<const Rule*>& rules)
{
  vector<const Rule*>::const_iterator i;
  for (i = rules.begin(); i != rules.end(); i++)
    (*i)->accept(*this);

  return NULL;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
