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

#include "SessionDescriptionBuilder.h"
#include "MediaDescriptionBuilder.h"
#include "OriginBuilder.h"
#include "SessionNameBuilder.h"
#include "InformationBuilder.h"
#include "AttributeBuilder.h"
#include "ConnectionBuilder.h"
#include "TimeBuilder.h"




void* SessionDescriptionBuilder::visit(Rule_session_description* rule)
{
	//Create object
	sdp = new SessionDescription();
	//Parse all the rules
	visitRules(rule->rules);
	//Return sdp
	return sdp;
}


void* SessionDescriptionBuilder::visit(Rule_proto_version* rule)
{
	//Parse digit
	int version = std::stoi(rule->rules[2]->spelling);
	//Set it
	sdp->setVersion(version);
	//Return it
	return NULL;
}


void* SessionDescriptionBuilder::visit(Rule_origin_field* rule)
{
	//Create new origin object
	OriginBuilder builder;
	//Get origin
	auto origin = std::shared_ptr<Origin>((Origin*)builder.visit(rule));
	//Generate
	sdp->setOrigin(origin);
	//Return it
	return NULL;
}


void* SessionDescriptionBuilder::visit(Rule_session_name_field* rule)
{
	//Create builder
	SessionNameBuilder builder;
	//Generate
	auto name = std::shared_ptr<SessionName>((SessionName*)builder.visit(rule));
	//Add
	sdp->setSessionName(name);
	//Return it
	return NULL;
}


void* SessionDescriptionBuilder::visit(Rule_information_field* rule)
{
	//Create new session name
	InformationBuilder builder;
	//Generate
	auto info = std::shared_ptr<Information>((Information*)builder.visit(rule));
	//Set it
	sdp->setInformation(info);
	//Return it
	return NULL;
}


void* SessionDescriptionBuilder::visit(Rule_attribute_field* rule)
{
	//Create new session name
	AttributeBuilder builder;
	//Generate
	auto attr = std::shared_ptr<Attribute>((Attribute*)builder.visit(rule));
	//Set it
	sdp->addAttribute(attr);
	//Return it
	return NULL;
}


void* SessionDescriptionBuilder::visit(Rule_uri_field* rule)
{
	//Check size
	if (rule->rules.empty())
		//Noting
		return NULL;
	//Generate
	std::string uri = rule->rules[2]->spelling;
	//Set it
	sdp->setUri(uri);
	//Return it
	return NULL;
}


void* SessionDescriptionBuilder::visit(Rule_email_field* rule)
{
	//Check size
	if (rule->rules.empty())
		//Noting
		return NULL;
	//Parse it
	std::string email = rule->rules[2]->spelling;
	//Add it
	sdp->addEmail(email);
	//return it
	return NULL;
}


void* SessionDescriptionBuilder::visit(Rule_phone_field* rule)
{
	//Check size
	if (rule->rules.empty())
		//Noting
		return NULL;
	//Parse it
	std::string phone = rule->rules[2]->spelling;
	//Add it
	sdp->addPhone(phone);
	//return it
	return NULL;
}


void* SessionDescriptionBuilder::visit(Rule_connection_field* rule)
{
	//Create builder
	ConnectionBuilder builder;
	//Parse it
	auto connection = std::shared_ptr<Connection>((Connection*)builder.visit(rule));
	//Set it
	sdp->setConnection(connection);
	//Return connection
	return NULL;
}

void* SessionDescriptionBuilder::visit(Rule_bandwidth_field* rule)
{
	//Create builder
	BandwitdhBuilder builder;
	//Parse it
	auto bandwidth = std::shared_ptr<Bandwidth>((Bandwidth*)builder.visit(rule));
	//Set it
	sdp->addBandwidth(bandwidth);
	//Nothing
	return NULL;
}

void* SessionDescriptionBuilder::visit(Rule_time_repeat_field* rule)
{
	//Create builder
	TimeBuilder builder;
	//Parse it
	auto time = std::shared_ptr<Time>((Time*)builder.visit(rule));
	//Set it
	sdp->addTime(time);
	
	return NULL;
}

void* SessionDescriptionBuilder::visit(Rule_key_field* rule)
{
	//Create builder
	KeyBuilder builder;
	//Parse it
	auto key = std::shared_ptr<Key>((Key*)builder.visit(rule));
	//Set it
	sdp->setKey(key);
	
	return NULL;
}

void* SessionDescriptionBuilder::visit(Rule_media_description* rule)
{
	//Create builder
	MediaDescriptionBuilder builder;
	//Parse it
	auto media = std::shared_ptr<MediaDescription>((MediaDescription*)builder.visit(rule));
	//Set it
	sdp->addMedia(media);
	
	return NULL;
}