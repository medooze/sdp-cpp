/* -----------------------------------------------------------------------------
 * Parser.cpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <map>
using std::map;

#include <iostream>
using std::istream;

#include <algorithm>
using std::transform;

#include "Parser.hpp"

#include "ParserContext.hpp"
#include "ParserException.hpp"

#include "Rule.hpp"
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
#include "Rule_source_filter_attr.hpp"
#include "Rule_filter_mode.hpp"
#include "Rule_filter_spec.hpp"
#include "Rule_address_types.hpp"
#include "Rule_dest_address.hpp"
#include "Rule_src_list.hpp"
#include "Rule_rtpmap_attr.hpp"
#include "Rule_name.hpp"
#include "Rule_rate.hpp"
#include "Rule_parameters.hpp"
#include "Rule_fmtp_attr.hpp"
#include "Rule_param_list.hpp"
#include "Rule_timestamp_refclk_attr.hpp"
#include "Rule_clksrc.hpp"
#include "Rule_clksrc_ext.hpp"
#include "Rule_clksrc_param_name.hpp"
#include "Rule_clksrc_param_value.hpp"
#include "Rule_ntp.hpp"
#include "Rule_ntp_server_addr.hpp"
#include "Rule_ptp.hpp"
#include "Rule_ptp_version.hpp"
#include "Rule_ptp_version_ext.hpp"
#include "Rule_ptp_server.hpp"
#include "Rule_ptp_gmid.hpp"
#include "Rule_ptp_domain.hpp"
#include "Rule_ptp_domain_name.hpp"
#include "Rule_ptp_domain_char.hpp"
#include "Rule_ptp_domain_nmbr.hpp"
#include "Rule_ptp_domain_dgts.hpp"
#include "Rule_ptp_domain_n1.hpp"
#include "Rule_ptp_domain_n2.hpp"
#include "Rule_ptp_domain_n3.hpp"
#include "Rule_gps.hpp"
#include "Rule_gal.hpp"
#include "Rule_glonass.hpp"
#include "Rule_local.hpp"
#include "Rule_private.hpp"
#include "Rule_media_clksrc_attr.hpp"
#include "Rule_media_clkid.hpp"
#include "Rule_media_clktag.hpp"
#include "Rule_mediaclock.hpp"
#include "Rule_mediaclock_ext.hpp"
#include "Rule_mediaclock_param_name.hpp"
#include "Rule_mediaclock_param_value.hpp"
#include "Rule_sender.hpp"
#include "Rule_direct.hpp"
#include "Rule_fsrate.hpp"
#include "Rule_ieee1722_streamid.hpp"
#include "Rule_avb_stream_id.hpp"
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
#include "Rule_hostport.hpp"
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
#include "Rule_EUI64.hpp"
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

using namespace abnf;

typedef Rule* (*pParser)(ParserContext&);

static map<string, pParser> buildParserMap(void)
{
  map<string, pParser> parsers;

  parsers["session_description"] = (pParser)Rule_session_description::parse;
  parsers["proto_version"] = (pParser)Rule_proto_version::parse;
  parsers["origin_field"] = (pParser)Rule_origin_field::parse;
  parsers["session_name_field"] = (pParser)Rule_session_name_field::parse;
  parsers["information_field"] = (pParser)Rule_information_field::parse;
  parsers["uri_field"] = (pParser)Rule_uri_field::parse;
  parsers["email_fields"] = (pParser)Rule_email_fields::parse;
  parsers["email_field"] = (pParser)Rule_email_field::parse;
  parsers["phone_fields"] = (pParser)Rule_phone_fields::parse;
  parsers["phone_field"] = (pParser)Rule_phone_field::parse;
  parsers["connection_field"] = (pParser)Rule_connection_field::parse;
  parsers["bandwidth_fields"] = (pParser)Rule_bandwidth_fields::parse;
  parsers["bandwidth_field"] = (pParser)Rule_bandwidth_field::parse;
  parsers["time_fields"] = (pParser)Rule_time_fields::parse;
  parsers["time_repeat_field"] = (pParser)Rule_time_repeat_field::parse;
  parsers["time_field"] = (pParser)Rule_time_field::parse;
  parsers["repeat_field"] = (pParser)Rule_repeat_field::parse;
  parsers["zone_adjustments"] = (pParser)Rule_zone_adjustments::parse;
  parsers["key_field"] = (pParser)Rule_key_field::parse;
  parsers["attribute_fields"] = (pParser)Rule_attribute_fields::parse;
  parsers["attribute_field"] = (pParser)Rule_attribute_field::parse;
  parsers["gen_attribute"] = (pParser)Rule_gen_attribute::parse;
  parsers["sctpmap_attr"] = (pParser)Rule_sctpmap_attr::parse;
  parsers["sctpmap_number"] = (pParser)Rule_sctpmap_number::parse;
  parsers["app"] = (pParser)Rule_app::parse;
  parsers["streams"] = (pParser)Rule_streams::parse;
  parsers["fingerprint_attribute"] = (pParser)Rule_fingerprint_attribute::parse;
  parsers["hash_func"] = (pParser)Rule_hash_func::parse;
  parsers["fingerprint"] = (pParser)Rule_fingerprint::parse;
  parsers["extmap_attribute"] = (pParser)Rule_extmap_attribute::parse;
  parsers["extension_identifier"] = (pParser)Rule_extension_identifier::parse;
  parsers["extension_name"] = (pParser)Rule_extension_name::parse;
  parsers["direction"] = (pParser)Rule_direction::parse;
  parsers["extension_attributes"] = (pParser)Rule_extension_attributes::parse;
  parsers["candidate_attribute"] = (pParser)Rule_candidate_attribute::parse;
  parsers["foundation"] = (pParser)Rule_foundation::parse;
  parsers["component_id"] = (pParser)Rule_component_id::parse;
  parsers["transport"] = (pParser)Rule_transport::parse;
  parsers["transport_extension"] = (pParser)Rule_transport_extension::parse;
  parsers["priority"] = (pParser)Rule_priority::parse;
  parsers["cand_type"] = (pParser)Rule_cand_type::parse;
  parsers["candidate_types"] = (pParser)Rule_candidate_types::parse;
  parsers["rel_addr"] = (pParser)Rule_rel_addr::parse;
  parsers["rel_port"] = (pParser)Rule_rel_port::parse;
  parsers["extension_att"] = (pParser)Rule_extension_att::parse;
  parsers["extension_att_name"] = (pParser)Rule_extension_att_name::parse;
  parsers["extension_att_value"] = (pParser)Rule_extension_att_value::parse;
  parsers["ice_char"] = (pParser)Rule_ice_char::parse;
  parsers["crypto_attribute"] = (pParser)Rule_crypto_attribute::parse;
  parsers["tag"] = (pParser)Rule_tag::parse;
  parsers["crypto_suite"] = (pParser)Rule_crypto_suite::parse;
  parsers["key_params"] = (pParser)Rule_key_params::parse;
  parsers["key_param"] = (pParser)Rule_key_param::parse;
  parsers["key_method"] = (pParser)Rule_key_method::parse;
  parsers["key_method_ext"] = (pParser)Rule_key_method_ext::parse;
  parsers["key_info"] = (pParser)Rule_key_info::parse;
  parsers["key_salt"] = (pParser)Rule_key_salt::parse;
  parsers["key_lifetime"] = (pParser)Rule_key_lifetime::parse;
  parsers["key_mki"] = (pParser)Rule_key_mki::parse;
  parsers["key_mki_value"] = (pParser)Rule_key_mki_value::parse;
  parsers["key_mki_length"] = (pParser)Rule_key_mki_length::parse;
  parsers["session_param"] = (pParser)Rule_session_param::parse;
  parsers["mid_attr"] = (pParser)Rule_mid_attr::parse;
  parsers["identification_tag"] = (pParser)Rule_identification_tag::parse;
  parsers["group_attr"] = (pParser)Rule_group_attr::parse;
  parsers["group_semantics"] = (pParser)Rule_group_semantics::parse;
  parsers["ssrc_attr"] = (pParser)Rule_ssrc_attr::parse;
  parsers["ssrc_id"] = (pParser)Rule_ssrc_id::parse;
  parsers["ssrc_group_attr"] = (pParser)Rule_ssrc_group_attr::parse;
  parsers["ssrc_group_semantics"] = (pParser)Rule_ssrc_group_semantics::parse;
  parsers["cname_attr"] = (pParser)Rule_cname_attr::parse;
  parsers["cname"] = (pParser)Rule_cname::parse;
  parsers["previous_ssrc_attr"] = (pParser)Rule_previous_ssrc_attr::parse;
  parsers["source_filter_attr"] = (pParser)Rule_source_filter_attr::parse;
  parsers["filter_mode"] = (pParser)Rule_filter_mode::parse;
  parsers["filter_spec"] = (pParser)Rule_filter_spec::parse;
  parsers["address_types"] = (pParser)Rule_address_types::parse;
  parsers["dest_address"] = (pParser)Rule_dest_address::parse;
  parsers["src_list"] = (pParser)Rule_src_list::parse;
  parsers["rtpmap_attr"] = (pParser)Rule_rtpmap_attr::parse;
  parsers["name"] = (pParser)Rule_name::parse;
  parsers["rate"] = (pParser)Rule_rate::parse;
  parsers["parameters"] = (pParser)Rule_parameters::parse;
  parsers["fmtp_attr"] = (pParser)Rule_fmtp_attr::parse;
  parsers["param_list"] = (pParser)Rule_param_list::parse;
  parsers["timestamp_refclk_attr"] = (pParser)Rule_timestamp_refclk_attr::parse;
  parsers["clksrc"] = (pParser)Rule_clksrc::parse;
  parsers["clksrc_ext"] = (pParser)Rule_clksrc_ext::parse;
  parsers["clksrc_param_name"] = (pParser)Rule_clksrc_param_name::parse;
  parsers["clksrc_param_value"] = (pParser)Rule_clksrc_param_value::parse;
  parsers["ntp"] = (pParser)Rule_ntp::parse;
  parsers["ntp_server_addr"] = (pParser)Rule_ntp_server_addr::parse;
  parsers["ptp"] = (pParser)Rule_ptp::parse;
  parsers["ptp_version"] = (pParser)Rule_ptp_version::parse;
  parsers["ptp_version_ext"] = (pParser)Rule_ptp_version_ext::parse;
  parsers["ptp_server"] = (pParser)Rule_ptp_server::parse;
  parsers["ptp_gmid"] = (pParser)Rule_ptp_gmid::parse;
  parsers["ptp_domain"] = (pParser)Rule_ptp_domain::parse;
  parsers["ptp_domain_name"] = (pParser)Rule_ptp_domain_name::parse;
  parsers["ptp_domain_char"] = (pParser)Rule_ptp_domain_char::parse;
  parsers["ptp_domain_nmbr"] = (pParser)Rule_ptp_domain_nmbr::parse;
  parsers["ptp_domain_dgts"] = (pParser)Rule_ptp_domain_dgts::parse;
  parsers["ptp_domain_n1"] = (pParser)Rule_ptp_domain_n1::parse;
  parsers["ptp_domain_n2"] = (pParser)Rule_ptp_domain_n2::parse;
  parsers["ptp_domain_n3"] = (pParser)Rule_ptp_domain_n3::parse;
  parsers["gps"] = (pParser)Rule_gps::parse;
  parsers["gal"] = (pParser)Rule_gal::parse;
  parsers["glonass"] = (pParser)Rule_glonass::parse;
  parsers["local"] = (pParser)Rule_local::parse;
  parsers["private"] = (pParser)Rule_private::parse;
  parsers["media_clksrc_attr"] = (pParser)Rule_media_clksrc_attr::parse;
  parsers["media_clkid"] = (pParser)Rule_media_clkid::parse;
  parsers["media_clktag"] = (pParser)Rule_media_clktag::parse;
  parsers["mediaclock"] = (pParser)Rule_mediaclock::parse;
  parsers["mediaclock_ext"] = (pParser)Rule_mediaclock_ext::parse;
  parsers["mediaclock_param_name"] = (pParser)Rule_mediaclock_param_name::parse;
  parsers["mediaclock_param_value"] = (pParser)Rule_mediaclock_param_value::parse;
  parsers["sender"] = (pParser)Rule_sender::parse;
  parsers["direct"] = (pParser)Rule_direct::parse;
  parsers["fsrate"] = (pParser)Rule_fsrate::parse;
  parsers["ieee1722_streamid"] = (pParser)Rule_ieee1722_streamid::parse;
  parsers["avb_stream_id"] = (pParser)Rule_avb_stream_id::parse;
  parsers["media_descriptions"] = (pParser)Rule_media_descriptions::parse;
  parsers["media_description"] = (pParser)Rule_media_description::parse;
  parsers["media_field"] = (pParser)Rule_media_field::parse;
  parsers["username"] = (pParser)Rule_username::parse;
  parsers["sess_id"] = (pParser)Rule_sess_id::parse;
  parsers["sess_version"] = (pParser)Rule_sess_version::parse;
  parsers["nettype"] = (pParser)Rule_nettype::parse;
  parsers["addrtype"] = (pParser)Rule_addrtype::parse;
  parsers["email_address"] = (pParser)Rule_email_address::parse;
  parsers["address_and_comment"] = (pParser)Rule_address_and_comment::parse;
  parsers["dispname_and_address"] = (pParser)Rule_dispname_and_address::parse;
  parsers["phone_number"] = (pParser)Rule_phone_number::parse;
  parsers["phone"] = (pParser)Rule_phone::parse;
  parsers["connection_address"] = (pParser)Rule_connection_address::parse;
  parsers["unicast_address"] = (pParser)Rule_unicast_address::parse;
  parsers["bwtype"] = (pParser)Rule_bwtype::parse;
  parsers["bandwidth"] = (pParser)Rule_bandwidth::parse;
  parsers["start_time"] = (pParser)Rule_start_time::parse;
  parsers["stop_time"] = (pParser)Rule_stop_time::parse;
  parsers["time"] = (pParser)Rule_time::parse;
  parsers["repeat_interval"] = (pParser)Rule_repeat_interval::parse;
  parsers["typed_time"] = (pParser)Rule_typed_time::parse;
  parsers["fixed_len_time_unit"] = (pParser)Rule_fixed_len_time_unit::parse;
  parsers["key_type"] = (pParser)Rule_key_type::parse;
  parsers["prompt_key_type"] = (pParser)Rule_prompt_key_type::parse;
  parsers["clear_key_type"] = (pParser)Rule_clear_key_type::parse;
  parsers["base64_key_type"] = (pParser)Rule_base64_key_type::parse;
  parsers["uri_key_type"] = (pParser)Rule_uri_key_type::parse;
  parsers["base64"] = (pParser)Rule_base64::parse;
  parsers["base64_unit"] = (pParser)Rule_base64_unit::parse;
  parsers["base64_pad"] = (pParser)Rule_base64_pad::parse;
  parsers["base64_char"] = (pParser)Rule_base64_char::parse;
  parsers["attribute"] = (pParser)Rule_attribute::parse;
  parsers["att_field"] = (pParser)Rule_att_field::parse;
  parsers["att_value"] = (pParser)Rule_att_value::parse;
  parsers["media"] = (pParser)Rule_media::parse;
  parsers["fmt"] = (pParser)Rule_fmt::parse;
  parsers["proto"] = (pParser)Rule_proto::parse;
  parsers["port"] = (pParser)Rule_port::parse;
  parsers["number_of_ports"] = (pParser)Rule_number_of_ports::parse;
  parsers["ip4_multicast"] = (pParser)Rule_IP4_multicast::parse;
  parsers["m1"] = (pParser)Rule_m1::parse;
  parsers["ip6_multicast"] = (pParser)Rule_IP6_multicast::parse;
  parsers["ttl"] = (pParser)Rule_ttl::parse;
  parsers["fqdn"] = (pParser)Rule_FQDN::parse;
  parsers["email_safe"] = (pParser)Rule_email_safe::parse;
  parsers["uri"] = (pParser)Rule_URI::parse;
  parsers["hier_part"] = (pParser)Rule_hier_part::parse;
  parsers["uri_reference"] = (pParser)Rule_URI_reference::parse;
  parsers["absolute_uri"] = (pParser)Rule_absolute_URI::parse;
  parsers["relative_ref"] = (pParser)Rule_relative_ref::parse;
  parsers["relative_part"] = (pParser)Rule_relative_part::parse;
  parsers["scheme"] = (pParser)Rule_scheme::parse;
  parsers["authority"] = (pParser)Rule_authority::parse;
  parsers["userinfo"] = (pParser)Rule_userinfo::parse;
  parsers["hostport"] = (pParser)Rule_hostport::parse;
  parsers["host"] = (pParser)Rule_host::parse;
  parsers["ip_literal"] = (pParser)Rule_IP_literal::parse;
  parsers["ipvfuture"] = (pParser)Rule_IPvFuture::parse;
  parsers["ipv6address"] = (pParser)Rule_IPv6address::parse;
  parsers["h16"] = (pParser)Rule_h16::parse;
  parsers["ls32"] = (pParser)Rule_ls32::parse;
  parsers["ipv4address"] = (pParser)Rule_IPv4address::parse;
  parsers["dec_octet"] = (pParser)Rule_dec_octet::parse;
  parsers["reg_name"] = (pParser)Rule_reg_name::parse;
  parsers["path"] = (pParser)Rule_path::parse;
  parsers["path_abempty"] = (pParser)Rule_path_abempty::parse;
  parsers["path_absolute"] = (pParser)Rule_path_absolute::parse;
  parsers["path_noscheme"] = (pParser)Rule_path_noscheme::parse;
  parsers["path_rootless"] = (pParser)Rule_path_rootless::parse;
  parsers["path_empty"] = (pParser)Rule_path_empty::parse;
  parsers["segment"] = (pParser)Rule_segment::parse;
  parsers["segment_nz"] = (pParser)Rule_segment_nz::parse;
  parsers["segment_nz_nc"] = (pParser)Rule_segment_nz_nc::parse;
  parsers["pchar"] = (pParser)Rule_pchar::parse;
  parsers["query"] = (pParser)Rule_query::parse;
  parsers["fragment"] = (pParser)Rule_fragment::parse;
  parsers["pct_encoded"] = (pParser)Rule_pct_encoded::parse;
  parsers["unreserved"] = (pParser)Rule_unreserved::parse;
  parsers["reserved"] = (pParser)Rule_reserved::parse;
  parsers["gen_delims"] = (pParser)Rule_gen_delims::parse;
  parsers["sub_delims"] = (pParser)Rule_sub_delims::parse;
  parsers["addr_spec"] = (pParser)Rule_addr_spec::parse;
  parsers["local_part"] = (pParser)Rule_local_part::parse;
  parsers["domain"] = (pParser)Rule_domain::parse;
  parsers["domain_literal"] = (pParser)Rule_domain_literal::parse;
  parsers["dcontent"] = (pParser)Rule_dcontent::parse;
  parsers["dtext"] = (pParser)Rule_dtext::parse;
  parsers["no_ws_ctl"] = (pParser)Rule_NO_WS_CTL::parse;
  parsers["quoted_pair"] = (pParser)Rule_quoted_pair::parse;
  parsers["text"] = (pParser)Rule_text::parse;
  parsers["fws"] = (pParser)Rule_FWS::parse;
  parsers["comment"] = (pParser)Rule_comment::parse;
  parsers["ccontent"] = (pParser)Rule_ccontent::parse;
  parsers["ctext"] = (pParser)Rule_ctext::parse;
  parsers["dot_atom"] = (pParser)Rule_dot_atom::parse;
  parsers["dot_atom_text"] = (pParser)Rule_dot_atom_text::parse;
  parsers["atext"] = (pParser)Rule_atext::parse;
  parsers["integer"] = (pParser)Rule_integer::parse;
  parsers["alpha_numeric"] = (pParser)Rule_alpha_numeric::parse;
  parsers["decimal_uchar"] = (pParser)Rule_decimal_uchar::parse;
  parsers["decimal_uchar_1xx"] = (pParser)Rule_decimal_uchar_1xx::parse;
  parsers["decimal_uchar_2xx"] = (pParser)Rule_decimal_uchar_2xx::parse;
  parsers["decimal_uchar_25x"] = (pParser)Rule_decimal_uchar_25x::parse;
  parsers["bit"] = (pParser)Rule_BIT::parse;
  parsers["char"] = (pParser)Rule_CHAR::parse;
  parsers["cr"] = (pParser)Rule_CR::parse;
  parsers["ctl"] = (pParser)Rule_CTL::parse;
  parsers["eui64"] = (pParser)Rule_EUI64::parse;
  parsers["hexdig"] = (pParser)Rule_HEXDIG::parse;
  parsers["htab"] = (pParser)Rule_HTAB::parse;
  parsers["lf"] = (pParser)Rule_LF::parse;
  parsers["lwsp"] = (pParser)Rule_LWSP::parse;
  parsers["octet"] = (pParser)Rule_OCTET::parse;
  parsers["sp"] = (pParser)Rule_SP::parse;
  parsers["vchar"] = (pParser)Rule_VCHAR::parse;
  parsers["quoted_string"] = (pParser)Rule_quoted_string::parse;
  parsers["qcontent"] = (pParser)Rule_qcontent::parse;
  parsers["qtext"] = (pParser)Rule_qtext::parse;
  parsers["obs_local_part"] = (pParser)Rule_obs_local_part::parse;
  parsers["obs_domain"] = (pParser)Rule_obs_domain::parse;
  parsers["obs_fws"] = (pParser)Rule_obs_FWS::parse;
  parsers["obs_qp"] = (pParser)Rule_obs_qp::parse;
  parsers["obs_text"] = (pParser)Rule_obs_text::parse;
  parsers["obs_char"] = (pParser)Rule_obs_char::parse;
  parsers["cfws"] = (pParser)Rule_CFWS::parse;
  parsers["wsp"] = (pParser)Rule_WSP::parse;
  parsers["atom"] = (pParser)Rule_atom::parse;
  parsers["word"] = (pParser)Rule_word::parse;
  parsers["extn_addr"] = (pParser)Rule_extn_addr::parse;
  parsers["non_ws_string"] = (pParser)Rule_non_ws_string::parse;
  parsers["byte_string"] = (pParser)Rule_byte_string::parse;
  parsers["crlf"] = (pParser)Rule_CRLF::parse;
  parsers["token"] = (pParser)Rule_token::parse;
  parsers["alpha"] = (pParser)Rule_ALPHA::parse;
  parsers["digit"] = (pParser)Rule_DIGIT::parse;
  parsers["pos_digit"] = (pParser)Rule_POS_DIGIT::parse;
  parsers["dquote"] = (pParser)Rule_DQUOTE::parse;
  parsers["equals"] = (pParser)Rule_EQUALS::parse;

  return parsers;
}

static map<string, pParser> parsers = buildParserMap();

Rule* Parser::parse(const string& rulename, const string& text)
{
  return parse(rulename, text, false);
}

Rule* Parser::parse(const string& rulename, istream& in)
{
  return parse(rulename, in, false);
}

Rule* Parser::parse(const string& rulename, const string& text, bool trace)
{
  string lcRulename(rulename);
  transform(lcRulename.begin(), lcRulename.end(), lcRulename.begin(), tolower);

  ParserContext context(text, trace);

  Rule* rule = NULL;

  pParser parser = parsers[lcRulename];

  if (parser != NULL)
  {
    rule = parser(context);
  }
  else
  {
    throw ParserException(
      string("unknown rule \"") + rulename + "\"",
      context.text,
      context.getErrorIndex(),
      context.getErrorStack());
  }

  if (rule == NULL)
  {
    throw ParserException(
      string("rule \"") + context.getErrorStack().back() + "\" failed",
      context.text,
      context.getErrorIndex(),
      context.getErrorStack());
  }

  if (context.text.length() > context.index)
  {
    ParserException primaryError(
      "extra data found",
      context.text,
      context.index,
      vector<string>());

    if (context.getErrorIndex() > context.index)
    {
      ParserException secondaryError(
        "rule \"" + context.getErrorStack().back() + "\" failed",
        context.text,
        context.getErrorIndex(),
        context.getErrorStack());

      primaryError.setCause(secondaryError);
    }

    throw primaryError;
  }

  return rule;
}

Rule* Parser::parse(const string& rulename, istream& in, bool trace)
{
  string out;
  int ch;

  while ((ch = in.get()) != EOF)
    out += ch;

  return parse(rulename, out, trace);
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
