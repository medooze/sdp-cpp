#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU_LENOVO-Linux
CND_DLIB_EXT=so
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/src/SessionDescription.o \
	${OBJECTDIR}/src/abnf/Parser.o \
	${OBJECTDIR}/src/abnf/ParserAlternative.o \
	${OBJECTDIR}/src/abnf/ParserContext.o \
	${OBJECTDIR}/src/abnf/ParserException.o \
	${OBJECTDIR}/src/abnf/Rule.o \
	${OBJECTDIR}/src/abnf/Rule_ALPHA.o \
	${OBJECTDIR}/src/abnf/Rule_BIT.o \
	${OBJECTDIR}/src/abnf/Rule_CFWS.o \
	${OBJECTDIR}/src/abnf/Rule_CHAR.o \
	${OBJECTDIR}/src/abnf/Rule_CR.o \
	${OBJECTDIR}/src/abnf/Rule_CRLF.o \
	${OBJECTDIR}/src/abnf/Rule_CTL.o \
	${OBJECTDIR}/src/abnf/Rule_DIGIT.o \
	${OBJECTDIR}/src/abnf/Rule_DQUOTE.o \
	${OBJECTDIR}/src/abnf/Rule_EQUALS.o \
	${OBJECTDIR}/src/abnf/Rule_FQDN.o \
	${OBJECTDIR}/src/abnf/Rule_FWS.o \
	${OBJECTDIR}/src/abnf/Rule_HEXDIG.o \
	${OBJECTDIR}/src/abnf/Rule_HTAB.o \
	${OBJECTDIR}/src/abnf/Rule_IP4_multicast.o \
	${OBJECTDIR}/src/abnf/Rule_IP6_multicast.o \
	${OBJECTDIR}/src/abnf/Rule_IP_literal.o \
	${OBJECTDIR}/src/abnf/Rule_IPv4address.o \
	${OBJECTDIR}/src/abnf/Rule_IPv6address.o \
	${OBJECTDIR}/src/abnf/Rule_IPvFuture.o \
	${OBJECTDIR}/src/abnf/Rule_LF.o \
	${OBJECTDIR}/src/abnf/Rule_LWSP.o \
	${OBJECTDIR}/src/abnf/Rule_NO_WS_CTL.o \
	${OBJECTDIR}/src/abnf/Rule_OCTET.o \
	${OBJECTDIR}/src/abnf/Rule_POS_DIGIT.o \
	${OBJECTDIR}/src/abnf/Rule_SP.o \
	${OBJECTDIR}/src/abnf/Rule_URI.o \
	${OBJECTDIR}/src/abnf/Rule_URI_reference.o \
	${OBJECTDIR}/src/abnf/Rule_VCHAR.o \
	${OBJECTDIR}/src/abnf/Rule_WSP.o \
	${OBJECTDIR}/src/abnf/Rule_absolute_URI.o \
	${OBJECTDIR}/src/abnf/Rule_addr_spec.o \
	${OBJECTDIR}/src/abnf/Rule_address_and_comment.o \
	${OBJECTDIR}/src/abnf/Rule_addrtype.o \
	${OBJECTDIR}/src/abnf/Rule_alpha_numeric.o \
	${OBJECTDIR}/src/abnf/Rule_app.o \
	${OBJECTDIR}/src/abnf/Rule_atext.o \
	${OBJECTDIR}/src/abnf/Rule_atom.o \
	${OBJECTDIR}/src/abnf/Rule_att_field.o \
	${OBJECTDIR}/src/abnf/Rule_att_value.o \
	${OBJECTDIR}/src/abnf/Rule_attribute.o \
	${OBJECTDIR}/src/abnf/Rule_attribute_field.o \
	${OBJECTDIR}/src/abnf/Rule_attribute_fields.o \
	${OBJECTDIR}/src/abnf/Rule_authority.o \
	${OBJECTDIR}/src/abnf/Rule_bandwidth.o \
	${OBJECTDIR}/src/abnf/Rule_bandwidth_field.o \
	${OBJECTDIR}/src/abnf/Rule_bandwidth_fields.o \
	${OBJECTDIR}/src/abnf/Rule_base64.o \
	${OBJECTDIR}/src/abnf/Rule_base64_char.o \
	${OBJECTDIR}/src/abnf/Rule_base64_key_type.o \
	${OBJECTDIR}/src/abnf/Rule_base64_pad.o \
	${OBJECTDIR}/src/abnf/Rule_base64_unit.o \
	${OBJECTDIR}/src/abnf/Rule_bwtype.o \
	${OBJECTDIR}/src/abnf/Rule_byte_string.o \
	${OBJECTDIR}/src/abnf/Rule_cand_type.o \
	${OBJECTDIR}/src/abnf/Rule_candidate_attribute.o \
	${OBJECTDIR}/src/abnf/Rule_candidate_types.o \
	${OBJECTDIR}/src/abnf/Rule_ccontent.o \
	${OBJECTDIR}/src/abnf/Rule_clear_key_type.o \
	${OBJECTDIR}/src/abnf/Rule_cname.o \
	${OBJECTDIR}/src/abnf/Rule_cname_attr.o \
	${OBJECTDIR}/src/abnf/Rule_comment.o \
	${OBJECTDIR}/src/abnf/Rule_component_id.o \
	${OBJECTDIR}/src/abnf/Rule_connection_address.o \
	${OBJECTDIR}/src/abnf/Rule_connection_field.o \
	${OBJECTDIR}/src/abnf/Rule_crypto_attribute.o \
	${OBJECTDIR}/src/abnf/Rule_crypto_suite.o \
	${OBJECTDIR}/src/abnf/Rule_ctext.o \
	${OBJECTDIR}/src/abnf/Rule_dcontent.o \
	${OBJECTDIR}/src/abnf/Rule_dec_octet.o \
	${OBJECTDIR}/src/abnf/Rule_decimal_uchar.o \
	${OBJECTDIR}/src/abnf/Rule_decimal_uchar_1xx.o \
	${OBJECTDIR}/src/abnf/Rule_decimal_uchar_25x.o \
	${OBJECTDIR}/src/abnf/Rule_decimal_uchar_2xx.o \
	${OBJECTDIR}/src/abnf/Rule_direction.o \
	${OBJECTDIR}/src/abnf/Rule_dispname_and_address.o \
	${OBJECTDIR}/src/abnf/Rule_domain.o \
	${OBJECTDIR}/src/abnf/Rule_domain_literal.o \
	${OBJECTDIR}/src/abnf/Rule_dot_atom.o \
	${OBJECTDIR}/src/abnf/Rule_dot_atom_text.o \
	${OBJECTDIR}/src/abnf/Rule_dtext.o \
	${OBJECTDIR}/src/abnf/Rule_email_address.o \
	${OBJECTDIR}/src/abnf/Rule_email_field.o \
	${OBJECTDIR}/src/abnf/Rule_email_fields.o \
	${OBJECTDIR}/src/abnf/Rule_email_safe.o \
	${OBJECTDIR}/src/abnf/Rule_extension_att.o \
	${OBJECTDIR}/src/abnf/Rule_extension_att_name.o \
	${OBJECTDIR}/src/abnf/Rule_extension_att_value.o \
	${OBJECTDIR}/src/abnf/Rule_extension_attributes.o \
	${OBJECTDIR}/src/abnf/Rule_extension_identifier.o \
	${OBJECTDIR}/src/abnf/Rule_extension_name.o \
	${OBJECTDIR}/src/abnf/Rule_extmap_attribute.o \
	${OBJECTDIR}/src/abnf/Rule_extn_addr.o \
	${OBJECTDIR}/src/abnf/Rule_fingerprint.o \
	${OBJECTDIR}/src/abnf/Rule_fingerprint_attribute.o \
	${OBJECTDIR}/src/abnf/Rule_fixed_len_time_unit.o \
	${OBJECTDIR}/src/abnf/Rule_fmt.o \
	${OBJECTDIR}/src/abnf/Rule_fmtp_attr.o \
	${OBJECTDIR}/src/abnf/Rule_foundation.o \
	${OBJECTDIR}/src/abnf/Rule_fragment.o \
	${OBJECTDIR}/src/abnf/Rule_gen_attribute.o \
	${OBJECTDIR}/src/abnf/Rule_gen_delims.o \
	${OBJECTDIR}/src/abnf/Rule_group_attr.o \
	${OBJECTDIR}/src/abnf/Rule_group_semantics.o \
	${OBJECTDIR}/src/abnf/Rule_h16.o \
	${OBJECTDIR}/src/abnf/Rule_hash_func.o \
	${OBJECTDIR}/src/abnf/Rule_hier_part.o \
	${OBJECTDIR}/src/abnf/Rule_host.o \
	${OBJECTDIR}/src/abnf/Rule_ice_char.o \
	${OBJECTDIR}/src/abnf/Rule_identification_tag.o \
	${OBJECTDIR}/src/abnf/Rule_information_field.o \
	${OBJECTDIR}/src/abnf/Rule_integer.o \
	${OBJECTDIR}/src/abnf/Rule_key_field.o \
	${OBJECTDIR}/src/abnf/Rule_key_info.o \
	${OBJECTDIR}/src/abnf/Rule_key_lifetime.o \
	${OBJECTDIR}/src/abnf/Rule_key_method.o \
	${OBJECTDIR}/src/abnf/Rule_key_method_ext.o \
	${OBJECTDIR}/src/abnf/Rule_key_mki.o \
	${OBJECTDIR}/src/abnf/Rule_key_mki_length.o \
	${OBJECTDIR}/src/abnf/Rule_key_mki_value.o \
	${OBJECTDIR}/src/abnf/Rule_key_param.o \
	${OBJECTDIR}/src/abnf/Rule_key_params.o \
	${OBJECTDIR}/src/abnf/Rule_key_salt.o \
	${OBJECTDIR}/src/abnf/Rule_key_type.o \
	${OBJECTDIR}/src/abnf/Rule_local_part.o \
	${OBJECTDIR}/src/abnf/Rule_ls32.o \
	${OBJECTDIR}/src/abnf/Rule_m1.o \
	${OBJECTDIR}/src/abnf/Rule_media.o \
	${OBJECTDIR}/src/abnf/Rule_media_description.o \
	${OBJECTDIR}/src/abnf/Rule_media_descriptions.o \
	${OBJECTDIR}/src/abnf/Rule_media_field.o \
	${OBJECTDIR}/src/abnf/Rule_mid_attr.o \
	${OBJECTDIR}/src/abnf/Rule_name.o \
	${OBJECTDIR}/src/abnf/Rule_nettype.o \
	${OBJECTDIR}/src/abnf/Rule_non_ws_string.o \
	${OBJECTDIR}/src/abnf/Rule_number_of_ports.o \
	${OBJECTDIR}/src/abnf/Rule_obs_FWS.o \
	${OBJECTDIR}/src/abnf/Rule_obs_char.o \
	${OBJECTDIR}/src/abnf/Rule_obs_domain.o \
	${OBJECTDIR}/src/abnf/Rule_obs_local_part.o \
	${OBJECTDIR}/src/abnf/Rule_obs_qp.o \
	${OBJECTDIR}/src/abnf/Rule_obs_text.o \
	${OBJECTDIR}/src/abnf/Rule_origin_field.o \
	${OBJECTDIR}/src/abnf/Rule_param_list.o \
	${OBJECTDIR}/src/abnf/Rule_parameters.o \
	${OBJECTDIR}/src/abnf/Rule_path.o \
	${OBJECTDIR}/src/abnf/Rule_path_abempty.o \
	${OBJECTDIR}/src/abnf/Rule_path_absolute.o \
	${OBJECTDIR}/src/abnf/Rule_path_empty.o \
	${OBJECTDIR}/src/abnf/Rule_path_noscheme.o \
	${OBJECTDIR}/src/abnf/Rule_path_rootless.o \
	${OBJECTDIR}/src/abnf/Rule_pchar.o \
	${OBJECTDIR}/src/abnf/Rule_pct_encoded.o \
	${OBJECTDIR}/src/abnf/Rule_phone.o \
	${OBJECTDIR}/src/abnf/Rule_phone_field.o \
	${OBJECTDIR}/src/abnf/Rule_phone_fields.o \
	${OBJECTDIR}/src/abnf/Rule_phone_number.o \
	${OBJECTDIR}/src/abnf/Rule_port.o \
	${OBJECTDIR}/src/abnf/Rule_previous_ssrc_attr.o \
	${OBJECTDIR}/src/abnf/Rule_priority.o \
	${OBJECTDIR}/src/abnf/Rule_prompt_key_type.o \
	${OBJECTDIR}/src/abnf/Rule_proto.o \
	${OBJECTDIR}/src/abnf/Rule_proto_version.o \
	${OBJECTDIR}/src/abnf/Rule_qcontent.o \
	${OBJECTDIR}/src/abnf/Rule_qtext.o \
	${OBJECTDIR}/src/abnf/Rule_query.o \
	${OBJECTDIR}/src/abnf/Rule_quoted_pair.o \
	${OBJECTDIR}/src/abnf/Rule_quoted_string.o \
	${OBJECTDIR}/src/abnf/Rule_rate.o \
	${OBJECTDIR}/src/abnf/Rule_reg_name.o \
	${OBJECTDIR}/src/abnf/Rule_rel_addr.o \
	${OBJECTDIR}/src/abnf/Rule_rel_port.o \
	${OBJECTDIR}/src/abnf/Rule_relative_part.o \
	${OBJECTDIR}/src/abnf/Rule_relative_ref.o \
	${OBJECTDIR}/src/abnf/Rule_repeat_field.o \
	${OBJECTDIR}/src/abnf/Rule_repeat_interval.o \
	${OBJECTDIR}/src/abnf/Rule_reserved.o \
	${OBJECTDIR}/src/abnf/Rule_rtpmap_attr.o \
	${OBJECTDIR}/src/abnf/Rule_scheme.o \
	${OBJECTDIR}/src/abnf/Rule_sctpmap_attr.o \
	${OBJECTDIR}/src/abnf/Rule_sctpmap_number.o \
	${OBJECTDIR}/src/abnf/Rule_segment.o \
	${OBJECTDIR}/src/abnf/Rule_segment_nz.o \
	${OBJECTDIR}/src/abnf/Rule_segment_nz_nc.o \
	${OBJECTDIR}/src/abnf/Rule_sess_id.o \
	${OBJECTDIR}/src/abnf/Rule_sess_version.o \
	${OBJECTDIR}/src/abnf/Rule_session_description.o \
	${OBJECTDIR}/src/abnf/Rule_session_name_field.o \
	${OBJECTDIR}/src/abnf/Rule_session_param.o \
	${OBJECTDIR}/src/abnf/Rule_ssrc_attr.o \
	${OBJECTDIR}/src/abnf/Rule_ssrc_group_attr.o \
	${OBJECTDIR}/src/abnf/Rule_ssrc_group_semantics.o \
	${OBJECTDIR}/src/abnf/Rule_ssrc_id.o \
	${OBJECTDIR}/src/abnf/Rule_start_time.o \
	${OBJECTDIR}/src/abnf/Rule_stop_time.o \
	${OBJECTDIR}/src/abnf/Rule_streams.o \
	${OBJECTDIR}/src/abnf/Rule_sub_delims.o \
	${OBJECTDIR}/src/abnf/Rule_tag.o \
	${OBJECTDIR}/src/abnf/Rule_text.o \
	${OBJECTDIR}/src/abnf/Rule_time.o \
	${OBJECTDIR}/src/abnf/Rule_time_field.o \
	${OBJECTDIR}/src/abnf/Rule_time_fields.o \
	${OBJECTDIR}/src/abnf/Rule_time_repeat_field.o \
	${OBJECTDIR}/src/abnf/Rule_token.o \
	${OBJECTDIR}/src/abnf/Rule_transport.o \
	${OBJECTDIR}/src/abnf/Rule_transport_extension.o \
	${OBJECTDIR}/src/abnf/Rule_ttl.o \
	${OBJECTDIR}/src/abnf/Rule_typed_time.o \
	${OBJECTDIR}/src/abnf/Rule_unicast_address.o \
	${OBJECTDIR}/src/abnf/Rule_unreserved.o \
	${OBJECTDIR}/src/abnf/Rule_uri_field.o \
	${OBJECTDIR}/src/abnf/Rule_uri_key_type.o \
	${OBJECTDIR}/src/abnf/Rule_userinfo.o \
	${OBJECTDIR}/src/abnf/Rule_username.o \
	${OBJECTDIR}/src/abnf/Rule_word.o \
	${OBJECTDIR}/src/abnf/Rule_zone_adjustments.o \
	${OBJECTDIR}/src/abnf/Terminal_NumericValue.o \
	${OBJECTDIR}/src/abnf/Terminal_StringValue.o \
	${OBJECTDIR}/src/builders/Builder.o \
	${OBJECTDIR}/src/builders/SessionDescriptionBuilder.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${TESTDIR}/TestFiles/f1

# Test Object Files
TESTOBJECTFILES= \
	${TESTDIR}/tests/parser.o

# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libsdp-cpp.${CND_DLIB_EXT}

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libsdp-cpp.${CND_DLIB_EXT}: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libsdp-cpp.${CND_DLIB_EXT} ${OBJECTFILES} ${LDLIBSOPTIONS} -shared -fPIC

${OBJECTDIR}/src/SessionDescription.o: src/SessionDescription.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/SessionDescription.o src/SessionDescription.cpp

${OBJECTDIR}/src/abnf/Parser.o: src/abnf/Parser.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Parser.o src/abnf/Parser.cpp

${OBJECTDIR}/src/abnf/ParserAlternative.o: src/abnf/ParserAlternative.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/ParserAlternative.o src/abnf/ParserAlternative.cpp

${OBJECTDIR}/src/abnf/ParserContext.o: src/abnf/ParserContext.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/ParserContext.o src/abnf/ParserContext.cpp

${OBJECTDIR}/src/abnf/ParserException.o: src/abnf/ParserException.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/ParserException.o src/abnf/ParserException.cpp

${OBJECTDIR}/src/abnf/Rule.o: src/abnf/Rule.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule.o src/abnf/Rule.cpp

${OBJECTDIR}/src/abnf/Rule_ALPHA.o: src/abnf/Rule_ALPHA.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_ALPHA.o src/abnf/Rule_ALPHA.cpp

${OBJECTDIR}/src/abnf/Rule_BIT.o: src/abnf/Rule_BIT.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_BIT.o src/abnf/Rule_BIT.cpp

${OBJECTDIR}/src/abnf/Rule_CFWS.o: src/abnf/Rule_CFWS.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_CFWS.o src/abnf/Rule_CFWS.cpp

${OBJECTDIR}/src/abnf/Rule_CHAR.o: src/abnf/Rule_CHAR.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_CHAR.o src/abnf/Rule_CHAR.cpp

${OBJECTDIR}/src/abnf/Rule_CR.o: src/abnf/Rule_CR.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_CR.o src/abnf/Rule_CR.cpp

${OBJECTDIR}/src/abnf/Rule_CRLF.o: src/abnf/Rule_CRLF.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_CRLF.o src/abnf/Rule_CRLF.cpp

${OBJECTDIR}/src/abnf/Rule_CTL.o: src/abnf/Rule_CTL.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_CTL.o src/abnf/Rule_CTL.cpp

${OBJECTDIR}/src/abnf/Rule_DIGIT.o: src/abnf/Rule_DIGIT.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_DIGIT.o src/abnf/Rule_DIGIT.cpp

${OBJECTDIR}/src/abnf/Rule_DQUOTE.o: src/abnf/Rule_DQUOTE.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_DQUOTE.o src/abnf/Rule_DQUOTE.cpp

${OBJECTDIR}/src/abnf/Rule_EQUALS.o: src/abnf/Rule_EQUALS.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_EQUALS.o src/abnf/Rule_EQUALS.cpp

${OBJECTDIR}/src/abnf/Rule_FQDN.o: src/abnf/Rule_FQDN.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_FQDN.o src/abnf/Rule_FQDN.cpp

${OBJECTDIR}/src/abnf/Rule_FWS.o: src/abnf/Rule_FWS.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_FWS.o src/abnf/Rule_FWS.cpp

${OBJECTDIR}/src/abnf/Rule_HEXDIG.o: src/abnf/Rule_HEXDIG.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_HEXDIG.o src/abnf/Rule_HEXDIG.cpp

${OBJECTDIR}/src/abnf/Rule_HTAB.o: src/abnf/Rule_HTAB.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_HTAB.o src/abnf/Rule_HTAB.cpp

${OBJECTDIR}/src/abnf/Rule_IP4_multicast.o: src/abnf/Rule_IP4_multicast.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_IP4_multicast.o src/abnf/Rule_IP4_multicast.cpp

${OBJECTDIR}/src/abnf/Rule_IP6_multicast.o: src/abnf/Rule_IP6_multicast.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_IP6_multicast.o src/abnf/Rule_IP6_multicast.cpp

${OBJECTDIR}/src/abnf/Rule_IP_literal.o: src/abnf/Rule_IP_literal.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_IP_literal.o src/abnf/Rule_IP_literal.cpp

${OBJECTDIR}/src/abnf/Rule_IPv4address.o: src/abnf/Rule_IPv4address.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_IPv4address.o src/abnf/Rule_IPv4address.cpp

${OBJECTDIR}/src/abnf/Rule_IPv6address.o: src/abnf/Rule_IPv6address.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_IPv6address.o src/abnf/Rule_IPv6address.cpp

${OBJECTDIR}/src/abnf/Rule_IPvFuture.o: src/abnf/Rule_IPvFuture.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_IPvFuture.o src/abnf/Rule_IPvFuture.cpp

${OBJECTDIR}/src/abnf/Rule_LF.o: src/abnf/Rule_LF.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_LF.o src/abnf/Rule_LF.cpp

${OBJECTDIR}/src/abnf/Rule_LWSP.o: src/abnf/Rule_LWSP.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_LWSP.o src/abnf/Rule_LWSP.cpp

${OBJECTDIR}/src/abnf/Rule_NO_WS_CTL.o: src/abnf/Rule_NO_WS_CTL.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_NO_WS_CTL.o src/abnf/Rule_NO_WS_CTL.cpp

${OBJECTDIR}/src/abnf/Rule_OCTET.o: src/abnf/Rule_OCTET.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_OCTET.o src/abnf/Rule_OCTET.cpp

${OBJECTDIR}/src/abnf/Rule_POS_DIGIT.o: src/abnf/Rule_POS_DIGIT.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_POS_DIGIT.o src/abnf/Rule_POS_DIGIT.cpp

${OBJECTDIR}/src/abnf/Rule_SP.o: src/abnf/Rule_SP.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_SP.o src/abnf/Rule_SP.cpp

${OBJECTDIR}/src/abnf/Rule_URI.o: src/abnf/Rule_URI.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_URI.o src/abnf/Rule_URI.cpp

${OBJECTDIR}/src/abnf/Rule_URI_reference.o: src/abnf/Rule_URI_reference.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_URI_reference.o src/abnf/Rule_URI_reference.cpp

${OBJECTDIR}/src/abnf/Rule_VCHAR.o: src/abnf/Rule_VCHAR.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_VCHAR.o src/abnf/Rule_VCHAR.cpp

${OBJECTDIR}/src/abnf/Rule_WSP.o: src/abnf/Rule_WSP.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_WSP.o src/abnf/Rule_WSP.cpp

${OBJECTDIR}/src/abnf/Rule_absolute_URI.o: src/abnf/Rule_absolute_URI.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_absolute_URI.o src/abnf/Rule_absolute_URI.cpp

${OBJECTDIR}/src/abnf/Rule_addr_spec.o: src/abnf/Rule_addr_spec.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_addr_spec.o src/abnf/Rule_addr_spec.cpp

${OBJECTDIR}/src/abnf/Rule_address_and_comment.o: src/abnf/Rule_address_and_comment.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_address_and_comment.o src/abnf/Rule_address_and_comment.cpp

${OBJECTDIR}/src/abnf/Rule_addrtype.o: src/abnf/Rule_addrtype.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_addrtype.o src/abnf/Rule_addrtype.cpp

${OBJECTDIR}/src/abnf/Rule_alpha_numeric.o: src/abnf/Rule_alpha_numeric.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_alpha_numeric.o src/abnf/Rule_alpha_numeric.cpp

${OBJECTDIR}/src/abnf/Rule_app.o: src/abnf/Rule_app.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_app.o src/abnf/Rule_app.cpp

${OBJECTDIR}/src/abnf/Rule_atext.o: src/abnf/Rule_atext.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_atext.o src/abnf/Rule_atext.cpp

${OBJECTDIR}/src/abnf/Rule_atom.o: src/abnf/Rule_atom.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_atom.o src/abnf/Rule_atom.cpp

${OBJECTDIR}/src/abnf/Rule_att_field.o: src/abnf/Rule_att_field.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_att_field.o src/abnf/Rule_att_field.cpp

${OBJECTDIR}/src/abnf/Rule_att_value.o: src/abnf/Rule_att_value.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_att_value.o src/abnf/Rule_att_value.cpp

${OBJECTDIR}/src/abnf/Rule_attribute.o: src/abnf/Rule_attribute.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_attribute.o src/abnf/Rule_attribute.cpp

${OBJECTDIR}/src/abnf/Rule_attribute_field.o: src/abnf/Rule_attribute_field.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_attribute_field.o src/abnf/Rule_attribute_field.cpp

${OBJECTDIR}/src/abnf/Rule_attribute_fields.o: src/abnf/Rule_attribute_fields.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_attribute_fields.o src/abnf/Rule_attribute_fields.cpp

${OBJECTDIR}/src/abnf/Rule_authority.o: src/abnf/Rule_authority.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_authority.o src/abnf/Rule_authority.cpp

${OBJECTDIR}/src/abnf/Rule_bandwidth.o: src/abnf/Rule_bandwidth.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_bandwidth.o src/abnf/Rule_bandwidth.cpp

${OBJECTDIR}/src/abnf/Rule_bandwidth_field.o: src/abnf/Rule_bandwidth_field.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_bandwidth_field.o src/abnf/Rule_bandwidth_field.cpp

${OBJECTDIR}/src/abnf/Rule_bandwidth_fields.o: src/abnf/Rule_bandwidth_fields.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_bandwidth_fields.o src/abnf/Rule_bandwidth_fields.cpp

${OBJECTDIR}/src/abnf/Rule_base64.o: src/abnf/Rule_base64.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_base64.o src/abnf/Rule_base64.cpp

${OBJECTDIR}/src/abnf/Rule_base64_char.o: src/abnf/Rule_base64_char.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_base64_char.o src/abnf/Rule_base64_char.cpp

${OBJECTDIR}/src/abnf/Rule_base64_key_type.o: src/abnf/Rule_base64_key_type.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_base64_key_type.o src/abnf/Rule_base64_key_type.cpp

${OBJECTDIR}/src/abnf/Rule_base64_pad.o: src/abnf/Rule_base64_pad.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_base64_pad.o src/abnf/Rule_base64_pad.cpp

${OBJECTDIR}/src/abnf/Rule_base64_unit.o: src/abnf/Rule_base64_unit.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_base64_unit.o src/abnf/Rule_base64_unit.cpp

${OBJECTDIR}/src/abnf/Rule_bwtype.o: src/abnf/Rule_bwtype.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_bwtype.o src/abnf/Rule_bwtype.cpp

${OBJECTDIR}/src/abnf/Rule_byte_string.o: src/abnf/Rule_byte_string.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_byte_string.o src/abnf/Rule_byte_string.cpp

${OBJECTDIR}/src/abnf/Rule_cand_type.o: src/abnf/Rule_cand_type.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_cand_type.o src/abnf/Rule_cand_type.cpp

${OBJECTDIR}/src/abnf/Rule_candidate_attribute.o: src/abnf/Rule_candidate_attribute.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_candidate_attribute.o src/abnf/Rule_candidate_attribute.cpp

${OBJECTDIR}/src/abnf/Rule_candidate_types.o: src/abnf/Rule_candidate_types.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_candidate_types.o src/abnf/Rule_candidate_types.cpp

${OBJECTDIR}/src/abnf/Rule_ccontent.o: src/abnf/Rule_ccontent.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_ccontent.o src/abnf/Rule_ccontent.cpp

${OBJECTDIR}/src/abnf/Rule_clear_key_type.o: src/abnf/Rule_clear_key_type.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_clear_key_type.o src/abnf/Rule_clear_key_type.cpp

${OBJECTDIR}/src/abnf/Rule_cname.o: src/abnf/Rule_cname.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_cname.o src/abnf/Rule_cname.cpp

${OBJECTDIR}/src/abnf/Rule_cname_attr.o: src/abnf/Rule_cname_attr.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_cname_attr.o src/abnf/Rule_cname_attr.cpp

${OBJECTDIR}/src/abnf/Rule_comment.o: src/abnf/Rule_comment.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_comment.o src/abnf/Rule_comment.cpp

${OBJECTDIR}/src/abnf/Rule_component_id.o: src/abnf/Rule_component_id.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_component_id.o src/abnf/Rule_component_id.cpp

${OBJECTDIR}/src/abnf/Rule_connection_address.o: src/abnf/Rule_connection_address.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_connection_address.o src/abnf/Rule_connection_address.cpp

${OBJECTDIR}/src/abnf/Rule_connection_field.o: src/abnf/Rule_connection_field.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_connection_field.o src/abnf/Rule_connection_field.cpp

${OBJECTDIR}/src/abnf/Rule_crypto_attribute.o: src/abnf/Rule_crypto_attribute.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_crypto_attribute.o src/abnf/Rule_crypto_attribute.cpp

${OBJECTDIR}/src/abnf/Rule_crypto_suite.o: src/abnf/Rule_crypto_suite.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_crypto_suite.o src/abnf/Rule_crypto_suite.cpp

${OBJECTDIR}/src/abnf/Rule_ctext.o: src/abnf/Rule_ctext.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_ctext.o src/abnf/Rule_ctext.cpp

${OBJECTDIR}/src/abnf/Rule_dcontent.o: src/abnf/Rule_dcontent.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_dcontent.o src/abnf/Rule_dcontent.cpp

${OBJECTDIR}/src/abnf/Rule_dec_octet.o: src/abnf/Rule_dec_octet.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_dec_octet.o src/abnf/Rule_dec_octet.cpp

${OBJECTDIR}/src/abnf/Rule_decimal_uchar.o: src/abnf/Rule_decimal_uchar.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_decimal_uchar.o src/abnf/Rule_decimal_uchar.cpp

${OBJECTDIR}/src/abnf/Rule_decimal_uchar_1xx.o: src/abnf/Rule_decimal_uchar_1xx.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_decimal_uchar_1xx.o src/abnf/Rule_decimal_uchar_1xx.cpp

${OBJECTDIR}/src/abnf/Rule_decimal_uchar_25x.o: src/abnf/Rule_decimal_uchar_25x.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_decimal_uchar_25x.o src/abnf/Rule_decimal_uchar_25x.cpp

${OBJECTDIR}/src/abnf/Rule_decimal_uchar_2xx.o: src/abnf/Rule_decimal_uchar_2xx.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_decimal_uchar_2xx.o src/abnf/Rule_decimal_uchar_2xx.cpp

${OBJECTDIR}/src/abnf/Rule_direction.o: src/abnf/Rule_direction.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_direction.o src/abnf/Rule_direction.cpp

${OBJECTDIR}/src/abnf/Rule_dispname_and_address.o: src/abnf/Rule_dispname_and_address.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_dispname_and_address.o src/abnf/Rule_dispname_and_address.cpp

${OBJECTDIR}/src/abnf/Rule_domain.o: src/abnf/Rule_domain.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_domain.o src/abnf/Rule_domain.cpp

${OBJECTDIR}/src/abnf/Rule_domain_literal.o: src/abnf/Rule_domain_literal.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_domain_literal.o src/abnf/Rule_domain_literal.cpp

${OBJECTDIR}/src/abnf/Rule_dot_atom.o: src/abnf/Rule_dot_atom.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_dot_atom.o src/abnf/Rule_dot_atom.cpp

${OBJECTDIR}/src/abnf/Rule_dot_atom_text.o: src/abnf/Rule_dot_atom_text.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_dot_atom_text.o src/abnf/Rule_dot_atom_text.cpp

${OBJECTDIR}/src/abnf/Rule_dtext.o: src/abnf/Rule_dtext.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_dtext.o src/abnf/Rule_dtext.cpp

${OBJECTDIR}/src/abnf/Rule_email_address.o: src/abnf/Rule_email_address.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_email_address.o src/abnf/Rule_email_address.cpp

${OBJECTDIR}/src/abnf/Rule_email_field.o: src/abnf/Rule_email_field.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_email_field.o src/abnf/Rule_email_field.cpp

${OBJECTDIR}/src/abnf/Rule_email_fields.o: src/abnf/Rule_email_fields.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_email_fields.o src/abnf/Rule_email_fields.cpp

${OBJECTDIR}/src/abnf/Rule_email_safe.o: src/abnf/Rule_email_safe.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_email_safe.o src/abnf/Rule_email_safe.cpp

${OBJECTDIR}/src/abnf/Rule_extension_att.o: src/abnf/Rule_extension_att.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_extension_att.o src/abnf/Rule_extension_att.cpp

${OBJECTDIR}/src/abnf/Rule_extension_att_name.o: src/abnf/Rule_extension_att_name.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_extension_att_name.o src/abnf/Rule_extension_att_name.cpp

${OBJECTDIR}/src/abnf/Rule_extension_att_value.o: src/abnf/Rule_extension_att_value.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_extension_att_value.o src/abnf/Rule_extension_att_value.cpp

${OBJECTDIR}/src/abnf/Rule_extension_attributes.o: src/abnf/Rule_extension_attributes.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_extension_attributes.o src/abnf/Rule_extension_attributes.cpp

${OBJECTDIR}/src/abnf/Rule_extension_identifier.o: src/abnf/Rule_extension_identifier.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_extension_identifier.o src/abnf/Rule_extension_identifier.cpp

${OBJECTDIR}/src/abnf/Rule_extension_name.o: src/abnf/Rule_extension_name.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_extension_name.o src/abnf/Rule_extension_name.cpp

${OBJECTDIR}/src/abnf/Rule_extmap_attribute.o: src/abnf/Rule_extmap_attribute.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_extmap_attribute.o src/abnf/Rule_extmap_attribute.cpp

${OBJECTDIR}/src/abnf/Rule_extn_addr.o: src/abnf/Rule_extn_addr.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_extn_addr.o src/abnf/Rule_extn_addr.cpp

${OBJECTDIR}/src/abnf/Rule_fingerprint.o: src/abnf/Rule_fingerprint.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_fingerprint.o src/abnf/Rule_fingerprint.cpp

${OBJECTDIR}/src/abnf/Rule_fingerprint_attribute.o: src/abnf/Rule_fingerprint_attribute.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_fingerprint_attribute.o src/abnf/Rule_fingerprint_attribute.cpp

${OBJECTDIR}/src/abnf/Rule_fixed_len_time_unit.o: src/abnf/Rule_fixed_len_time_unit.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_fixed_len_time_unit.o src/abnf/Rule_fixed_len_time_unit.cpp

${OBJECTDIR}/src/abnf/Rule_fmt.o: src/abnf/Rule_fmt.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_fmt.o src/abnf/Rule_fmt.cpp

${OBJECTDIR}/src/abnf/Rule_fmtp_attr.o: src/abnf/Rule_fmtp_attr.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_fmtp_attr.o src/abnf/Rule_fmtp_attr.cpp

${OBJECTDIR}/src/abnf/Rule_foundation.o: src/abnf/Rule_foundation.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_foundation.o src/abnf/Rule_foundation.cpp

${OBJECTDIR}/src/abnf/Rule_fragment.o: src/abnf/Rule_fragment.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_fragment.o src/abnf/Rule_fragment.cpp

${OBJECTDIR}/src/abnf/Rule_gen_attribute.o: src/abnf/Rule_gen_attribute.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_gen_attribute.o src/abnf/Rule_gen_attribute.cpp

${OBJECTDIR}/src/abnf/Rule_gen_delims.o: src/abnf/Rule_gen_delims.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_gen_delims.o src/abnf/Rule_gen_delims.cpp

${OBJECTDIR}/src/abnf/Rule_group_attr.o: src/abnf/Rule_group_attr.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_group_attr.o src/abnf/Rule_group_attr.cpp

${OBJECTDIR}/src/abnf/Rule_group_semantics.o: src/abnf/Rule_group_semantics.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_group_semantics.o src/abnf/Rule_group_semantics.cpp

${OBJECTDIR}/src/abnf/Rule_h16.o: src/abnf/Rule_h16.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_h16.o src/abnf/Rule_h16.cpp

${OBJECTDIR}/src/abnf/Rule_hash_func.o: src/abnf/Rule_hash_func.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_hash_func.o src/abnf/Rule_hash_func.cpp

${OBJECTDIR}/src/abnf/Rule_hier_part.o: src/abnf/Rule_hier_part.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_hier_part.o src/abnf/Rule_hier_part.cpp

${OBJECTDIR}/src/abnf/Rule_host.o: src/abnf/Rule_host.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_host.o src/abnf/Rule_host.cpp

${OBJECTDIR}/src/abnf/Rule_ice_char.o: src/abnf/Rule_ice_char.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_ice_char.o src/abnf/Rule_ice_char.cpp

${OBJECTDIR}/src/abnf/Rule_identification_tag.o: src/abnf/Rule_identification_tag.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_identification_tag.o src/abnf/Rule_identification_tag.cpp

${OBJECTDIR}/src/abnf/Rule_information_field.o: src/abnf/Rule_information_field.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_information_field.o src/abnf/Rule_information_field.cpp

${OBJECTDIR}/src/abnf/Rule_integer.o: src/abnf/Rule_integer.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_integer.o src/abnf/Rule_integer.cpp

${OBJECTDIR}/src/abnf/Rule_key_field.o: src/abnf/Rule_key_field.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_key_field.o src/abnf/Rule_key_field.cpp

${OBJECTDIR}/src/abnf/Rule_key_info.o: src/abnf/Rule_key_info.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_key_info.o src/abnf/Rule_key_info.cpp

${OBJECTDIR}/src/abnf/Rule_key_lifetime.o: src/abnf/Rule_key_lifetime.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_key_lifetime.o src/abnf/Rule_key_lifetime.cpp

${OBJECTDIR}/src/abnf/Rule_key_method.o: src/abnf/Rule_key_method.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_key_method.o src/abnf/Rule_key_method.cpp

${OBJECTDIR}/src/abnf/Rule_key_method_ext.o: src/abnf/Rule_key_method_ext.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_key_method_ext.o src/abnf/Rule_key_method_ext.cpp

${OBJECTDIR}/src/abnf/Rule_key_mki.o: src/abnf/Rule_key_mki.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_key_mki.o src/abnf/Rule_key_mki.cpp

${OBJECTDIR}/src/abnf/Rule_key_mki_length.o: src/abnf/Rule_key_mki_length.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_key_mki_length.o src/abnf/Rule_key_mki_length.cpp

${OBJECTDIR}/src/abnf/Rule_key_mki_value.o: src/abnf/Rule_key_mki_value.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_key_mki_value.o src/abnf/Rule_key_mki_value.cpp

${OBJECTDIR}/src/abnf/Rule_key_param.o: src/abnf/Rule_key_param.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_key_param.o src/abnf/Rule_key_param.cpp

${OBJECTDIR}/src/abnf/Rule_key_params.o: src/abnf/Rule_key_params.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_key_params.o src/abnf/Rule_key_params.cpp

${OBJECTDIR}/src/abnf/Rule_key_salt.o: src/abnf/Rule_key_salt.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_key_salt.o src/abnf/Rule_key_salt.cpp

${OBJECTDIR}/src/abnf/Rule_key_type.o: src/abnf/Rule_key_type.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_key_type.o src/abnf/Rule_key_type.cpp

${OBJECTDIR}/src/abnf/Rule_local_part.o: src/abnf/Rule_local_part.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_local_part.o src/abnf/Rule_local_part.cpp

${OBJECTDIR}/src/abnf/Rule_ls32.o: src/abnf/Rule_ls32.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_ls32.o src/abnf/Rule_ls32.cpp

${OBJECTDIR}/src/abnf/Rule_m1.o: src/abnf/Rule_m1.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_m1.o src/abnf/Rule_m1.cpp

${OBJECTDIR}/src/abnf/Rule_media.o: src/abnf/Rule_media.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_media.o src/abnf/Rule_media.cpp

${OBJECTDIR}/src/abnf/Rule_media_description.o: src/abnf/Rule_media_description.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_media_description.o src/abnf/Rule_media_description.cpp

${OBJECTDIR}/src/abnf/Rule_media_descriptions.o: src/abnf/Rule_media_descriptions.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_media_descriptions.o src/abnf/Rule_media_descriptions.cpp

${OBJECTDIR}/src/abnf/Rule_media_field.o: src/abnf/Rule_media_field.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_media_field.o src/abnf/Rule_media_field.cpp

${OBJECTDIR}/src/abnf/Rule_mid_attr.o: src/abnf/Rule_mid_attr.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_mid_attr.o src/abnf/Rule_mid_attr.cpp

${OBJECTDIR}/src/abnf/Rule_name.o: src/abnf/Rule_name.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_name.o src/abnf/Rule_name.cpp

${OBJECTDIR}/src/abnf/Rule_nettype.o: src/abnf/Rule_nettype.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_nettype.o src/abnf/Rule_nettype.cpp

${OBJECTDIR}/src/abnf/Rule_non_ws_string.o: src/abnf/Rule_non_ws_string.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_non_ws_string.o src/abnf/Rule_non_ws_string.cpp

${OBJECTDIR}/src/abnf/Rule_number_of_ports.o: src/abnf/Rule_number_of_ports.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_number_of_ports.o src/abnf/Rule_number_of_ports.cpp

${OBJECTDIR}/src/abnf/Rule_obs_FWS.o: src/abnf/Rule_obs_FWS.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_obs_FWS.o src/abnf/Rule_obs_FWS.cpp

${OBJECTDIR}/src/abnf/Rule_obs_char.o: src/abnf/Rule_obs_char.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_obs_char.o src/abnf/Rule_obs_char.cpp

${OBJECTDIR}/src/abnf/Rule_obs_domain.o: src/abnf/Rule_obs_domain.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_obs_domain.o src/abnf/Rule_obs_domain.cpp

${OBJECTDIR}/src/abnf/Rule_obs_local_part.o: src/abnf/Rule_obs_local_part.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_obs_local_part.o src/abnf/Rule_obs_local_part.cpp

${OBJECTDIR}/src/abnf/Rule_obs_qp.o: src/abnf/Rule_obs_qp.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_obs_qp.o src/abnf/Rule_obs_qp.cpp

${OBJECTDIR}/src/abnf/Rule_obs_text.o: src/abnf/Rule_obs_text.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_obs_text.o src/abnf/Rule_obs_text.cpp

${OBJECTDIR}/src/abnf/Rule_origin_field.o: src/abnf/Rule_origin_field.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_origin_field.o src/abnf/Rule_origin_field.cpp

${OBJECTDIR}/src/abnf/Rule_param_list.o: src/abnf/Rule_param_list.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_param_list.o src/abnf/Rule_param_list.cpp

${OBJECTDIR}/src/abnf/Rule_parameters.o: src/abnf/Rule_parameters.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_parameters.o src/abnf/Rule_parameters.cpp

${OBJECTDIR}/src/abnf/Rule_path.o: src/abnf/Rule_path.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_path.o src/abnf/Rule_path.cpp

${OBJECTDIR}/src/abnf/Rule_path_abempty.o: src/abnf/Rule_path_abempty.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_path_abempty.o src/abnf/Rule_path_abempty.cpp

${OBJECTDIR}/src/abnf/Rule_path_absolute.o: src/abnf/Rule_path_absolute.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_path_absolute.o src/abnf/Rule_path_absolute.cpp

${OBJECTDIR}/src/abnf/Rule_path_empty.o: src/abnf/Rule_path_empty.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_path_empty.o src/abnf/Rule_path_empty.cpp

${OBJECTDIR}/src/abnf/Rule_path_noscheme.o: src/abnf/Rule_path_noscheme.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_path_noscheme.o src/abnf/Rule_path_noscheme.cpp

${OBJECTDIR}/src/abnf/Rule_path_rootless.o: src/abnf/Rule_path_rootless.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_path_rootless.o src/abnf/Rule_path_rootless.cpp

${OBJECTDIR}/src/abnf/Rule_pchar.o: src/abnf/Rule_pchar.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_pchar.o src/abnf/Rule_pchar.cpp

${OBJECTDIR}/src/abnf/Rule_pct_encoded.o: src/abnf/Rule_pct_encoded.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_pct_encoded.o src/abnf/Rule_pct_encoded.cpp

${OBJECTDIR}/src/abnf/Rule_phone.o: src/abnf/Rule_phone.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_phone.o src/abnf/Rule_phone.cpp

${OBJECTDIR}/src/abnf/Rule_phone_field.o: src/abnf/Rule_phone_field.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_phone_field.o src/abnf/Rule_phone_field.cpp

${OBJECTDIR}/src/abnf/Rule_phone_fields.o: src/abnf/Rule_phone_fields.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_phone_fields.o src/abnf/Rule_phone_fields.cpp

${OBJECTDIR}/src/abnf/Rule_phone_number.o: src/abnf/Rule_phone_number.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_phone_number.o src/abnf/Rule_phone_number.cpp

${OBJECTDIR}/src/abnf/Rule_port.o: src/abnf/Rule_port.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_port.o src/abnf/Rule_port.cpp

${OBJECTDIR}/src/abnf/Rule_previous_ssrc_attr.o: src/abnf/Rule_previous_ssrc_attr.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_previous_ssrc_attr.o src/abnf/Rule_previous_ssrc_attr.cpp

${OBJECTDIR}/src/abnf/Rule_priority.o: src/abnf/Rule_priority.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_priority.o src/abnf/Rule_priority.cpp

${OBJECTDIR}/src/abnf/Rule_prompt_key_type.o: src/abnf/Rule_prompt_key_type.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_prompt_key_type.o src/abnf/Rule_prompt_key_type.cpp

${OBJECTDIR}/src/abnf/Rule_proto.o: src/abnf/Rule_proto.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_proto.o src/abnf/Rule_proto.cpp

${OBJECTDIR}/src/abnf/Rule_proto_version.o: src/abnf/Rule_proto_version.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_proto_version.o src/abnf/Rule_proto_version.cpp

${OBJECTDIR}/src/abnf/Rule_qcontent.o: src/abnf/Rule_qcontent.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_qcontent.o src/abnf/Rule_qcontent.cpp

${OBJECTDIR}/src/abnf/Rule_qtext.o: src/abnf/Rule_qtext.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_qtext.o src/abnf/Rule_qtext.cpp

${OBJECTDIR}/src/abnf/Rule_query.o: src/abnf/Rule_query.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_query.o src/abnf/Rule_query.cpp

${OBJECTDIR}/src/abnf/Rule_quoted_pair.o: src/abnf/Rule_quoted_pair.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_quoted_pair.o src/abnf/Rule_quoted_pair.cpp

${OBJECTDIR}/src/abnf/Rule_quoted_string.o: src/abnf/Rule_quoted_string.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_quoted_string.o src/abnf/Rule_quoted_string.cpp

${OBJECTDIR}/src/abnf/Rule_rate.o: src/abnf/Rule_rate.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_rate.o src/abnf/Rule_rate.cpp

${OBJECTDIR}/src/abnf/Rule_reg_name.o: src/abnf/Rule_reg_name.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_reg_name.o src/abnf/Rule_reg_name.cpp

${OBJECTDIR}/src/abnf/Rule_rel_addr.o: src/abnf/Rule_rel_addr.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_rel_addr.o src/abnf/Rule_rel_addr.cpp

${OBJECTDIR}/src/abnf/Rule_rel_port.o: src/abnf/Rule_rel_port.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_rel_port.o src/abnf/Rule_rel_port.cpp

${OBJECTDIR}/src/abnf/Rule_relative_part.o: src/abnf/Rule_relative_part.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_relative_part.o src/abnf/Rule_relative_part.cpp

${OBJECTDIR}/src/abnf/Rule_relative_ref.o: src/abnf/Rule_relative_ref.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_relative_ref.o src/abnf/Rule_relative_ref.cpp

${OBJECTDIR}/src/abnf/Rule_repeat_field.o: src/abnf/Rule_repeat_field.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_repeat_field.o src/abnf/Rule_repeat_field.cpp

${OBJECTDIR}/src/abnf/Rule_repeat_interval.o: src/abnf/Rule_repeat_interval.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_repeat_interval.o src/abnf/Rule_repeat_interval.cpp

${OBJECTDIR}/src/abnf/Rule_reserved.o: src/abnf/Rule_reserved.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_reserved.o src/abnf/Rule_reserved.cpp

${OBJECTDIR}/src/abnf/Rule_rtpmap_attr.o: src/abnf/Rule_rtpmap_attr.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_rtpmap_attr.o src/abnf/Rule_rtpmap_attr.cpp

${OBJECTDIR}/src/abnf/Rule_scheme.o: src/abnf/Rule_scheme.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_scheme.o src/abnf/Rule_scheme.cpp

${OBJECTDIR}/src/abnf/Rule_sctpmap_attr.o: src/abnf/Rule_sctpmap_attr.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_sctpmap_attr.o src/abnf/Rule_sctpmap_attr.cpp

${OBJECTDIR}/src/abnf/Rule_sctpmap_number.o: src/abnf/Rule_sctpmap_number.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_sctpmap_number.o src/abnf/Rule_sctpmap_number.cpp

${OBJECTDIR}/src/abnf/Rule_segment.o: src/abnf/Rule_segment.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_segment.o src/abnf/Rule_segment.cpp

${OBJECTDIR}/src/abnf/Rule_segment_nz.o: src/abnf/Rule_segment_nz.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_segment_nz.o src/abnf/Rule_segment_nz.cpp

${OBJECTDIR}/src/abnf/Rule_segment_nz_nc.o: src/abnf/Rule_segment_nz_nc.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_segment_nz_nc.o src/abnf/Rule_segment_nz_nc.cpp

${OBJECTDIR}/src/abnf/Rule_sess_id.o: src/abnf/Rule_sess_id.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_sess_id.o src/abnf/Rule_sess_id.cpp

${OBJECTDIR}/src/abnf/Rule_sess_version.o: src/abnf/Rule_sess_version.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_sess_version.o src/abnf/Rule_sess_version.cpp

${OBJECTDIR}/src/abnf/Rule_session_description.o: src/abnf/Rule_session_description.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_session_description.o src/abnf/Rule_session_description.cpp

${OBJECTDIR}/src/abnf/Rule_session_name_field.o: src/abnf/Rule_session_name_field.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_session_name_field.o src/abnf/Rule_session_name_field.cpp

${OBJECTDIR}/src/abnf/Rule_session_param.o: src/abnf/Rule_session_param.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_session_param.o src/abnf/Rule_session_param.cpp

${OBJECTDIR}/src/abnf/Rule_ssrc_attr.o: src/abnf/Rule_ssrc_attr.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_ssrc_attr.o src/abnf/Rule_ssrc_attr.cpp

${OBJECTDIR}/src/abnf/Rule_ssrc_group_attr.o: src/abnf/Rule_ssrc_group_attr.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_ssrc_group_attr.o src/abnf/Rule_ssrc_group_attr.cpp

${OBJECTDIR}/src/abnf/Rule_ssrc_group_semantics.o: src/abnf/Rule_ssrc_group_semantics.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_ssrc_group_semantics.o src/abnf/Rule_ssrc_group_semantics.cpp

${OBJECTDIR}/src/abnf/Rule_ssrc_id.o: src/abnf/Rule_ssrc_id.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_ssrc_id.o src/abnf/Rule_ssrc_id.cpp

${OBJECTDIR}/src/abnf/Rule_start_time.o: src/abnf/Rule_start_time.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_start_time.o src/abnf/Rule_start_time.cpp

${OBJECTDIR}/src/abnf/Rule_stop_time.o: src/abnf/Rule_stop_time.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_stop_time.o src/abnf/Rule_stop_time.cpp

${OBJECTDIR}/src/abnf/Rule_streams.o: src/abnf/Rule_streams.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_streams.o src/abnf/Rule_streams.cpp

${OBJECTDIR}/src/abnf/Rule_sub_delims.o: src/abnf/Rule_sub_delims.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_sub_delims.o src/abnf/Rule_sub_delims.cpp

${OBJECTDIR}/src/abnf/Rule_tag.o: src/abnf/Rule_tag.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_tag.o src/abnf/Rule_tag.cpp

${OBJECTDIR}/src/abnf/Rule_text.o: src/abnf/Rule_text.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_text.o src/abnf/Rule_text.cpp

${OBJECTDIR}/src/abnf/Rule_time.o: src/abnf/Rule_time.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_time.o src/abnf/Rule_time.cpp

${OBJECTDIR}/src/abnf/Rule_time_field.o: src/abnf/Rule_time_field.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_time_field.o src/abnf/Rule_time_field.cpp

${OBJECTDIR}/src/abnf/Rule_time_fields.o: src/abnf/Rule_time_fields.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_time_fields.o src/abnf/Rule_time_fields.cpp

${OBJECTDIR}/src/abnf/Rule_time_repeat_field.o: src/abnf/Rule_time_repeat_field.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_time_repeat_field.o src/abnf/Rule_time_repeat_field.cpp

${OBJECTDIR}/src/abnf/Rule_token.o: src/abnf/Rule_token.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_token.o src/abnf/Rule_token.cpp

${OBJECTDIR}/src/abnf/Rule_transport.o: src/abnf/Rule_transport.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_transport.o src/abnf/Rule_transport.cpp

${OBJECTDIR}/src/abnf/Rule_transport_extension.o: src/abnf/Rule_transport_extension.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_transport_extension.o src/abnf/Rule_transport_extension.cpp

${OBJECTDIR}/src/abnf/Rule_ttl.o: src/abnf/Rule_ttl.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_ttl.o src/abnf/Rule_ttl.cpp

${OBJECTDIR}/src/abnf/Rule_typed_time.o: src/abnf/Rule_typed_time.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_typed_time.o src/abnf/Rule_typed_time.cpp

${OBJECTDIR}/src/abnf/Rule_unicast_address.o: src/abnf/Rule_unicast_address.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_unicast_address.o src/abnf/Rule_unicast_address.cpp

${OBJECTDIR}/src/abnf/Rule_unreserved.o: src/abnf/Rule_unreserved.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_unreserved.o src/abnf/Rule_unreserved.cpp

${OBJECTDIR}/src/abnf/Rule_uri_field.o: src/abnf/Rule_uri_field.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_uri_field.o src/abnf/Rule_uri_field.cpp

${OBJECTDIR}/src/abnf/Rule_uri_key_type.o: src/abnf/Rule_uri_key_type.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_uri_key_type.o src/abnf/Rule_uri_key_type.cpp

${OBJECTDIR}/src/abnf/Rule_userinfo.o: src/abnf/Rule_userinfo.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_userinfo.o src/abnf/Rule_userinfo.cpp

${OBJECTDIR}/src/abnf/Rule_username.o: src/abnf/Rule_username.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_username.o src/abnf/Rule_username.cpp

${OBJECTDIR}/src/abnf/Rule_word.o: src/abnf/Rule_word.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_word.o src/abnf/Rule_word.cpp

${OBJECTDIR}/src/abnf/Rule_zone_adjustments.o: src/abnf/Rule_zone_adjustments.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_zone_adjustments.o src/abnf/Rule_zone_adjustments.cpp

${OBJECTDIR}/src/abnf/Terminal_NumericValue.o: src/abnf/Terminal_NumericValue.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Terminal_NumericValue.o src/abnf/Terminal_NumericValue.cpp

${OBJECTDIR}/src/abnf/Terminal_StringValue.o: src/abnf/Terminal_StringValue.cpp
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Terminal_StringValue.o src/abnf/Terminal_StringValue.cpp

${OBJECTDIR}/src/builders/Builder.o: src/builders/Builder.cpp
	${MKDIR} -p ${OBJECTDIR}/src/builders
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/builders/Builder.o src/builders/Builder.cpp

${OBJECTDIR}/src/builders/SessionDescriptionBuilder.o: src/builders/SessionDescriptionBuilder.cpp
	${MKDIR} -p ${OBJECTDIR}/src/builders
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/builders/SessionDescriptionBuilder.o src/builders/SessionDescriptionBuilder.cpp

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-tests-subprojects .build-conf ${TESTFILES}
.build-tests-subprojects:

${TESTDIR}/TestFiles/f1: ${TESTDIR}/tests/parser.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc} -o ${TESTDIR}/TestFiles/f1 $^ ${LDLIBSOPTIONS}   


${TESTDIR}/tests/parser.o: tests/parser.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -I. -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/parser.o tests/parser.cpp


${OBJECTDIR}/src/SessionDescription_nomain.o: ${OBJECTDIR}/src/SessionDescription.o src/SessionDescription.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/SessionDescription.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/SessionDescription_nomain.o src/SessionDescription.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/SessionDescription.o ${OBJECTDIR}/src/SessionDescription_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Parser_nomain.o: ${OBJECTDIR}/src/abnf/Parser.o src/abnf/Parser.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Parser.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Parser_nomain.o src/abnf/Parser.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Parser.o ${OBJECTDIR}/src/abnf/Parser_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/ParserAlternative_nomain.o: ${OBJECTDIR}/src/abnf/ParserAlternative.o src/abnf/ParserAlternative.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/ParserAlternative.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/ParserAlternative_nomain.o src/abnf/ParserAlternative.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/ParserAlternative.o ${OBJECTDIR}/src/abnf/ParserAlternative_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/ParserContext_nomain.o: ${OBJECTDIR}/src/abnf/ParserContext.o src/abnf/ParserContext.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/ParserContext.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/ParserContext_nomain.o src/abnf/ParserContext.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/ParserContext.o ${OBJECTDIR}/src/abnf/ParserContext_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/ParserException_nomain.o: ${OBJECTDIR}/src/abnf/ParserException.o src/abnf/ParserException.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/ParserException.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/ParserException_nomain.o src/abnf/ParserException.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/ParserException.o ${OBJECTDIR}/src/abnf/ParserException_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_nomain.o: ${OBJECTDIR}/src/abnf/Rule.o src/abnf/Rule.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_nomain.o src/abnf/Rule.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule.o ${OBJECTDIR}/src/abnf/Rule_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_ALPHA_nomain.o: ${OBJECTDIR}/src/abnf/Rule_ALPHA.o src/abnf/Rule_ALPHA.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_ALPHA.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_ALPHA_nomain.o src/abnf/Rule_ALPHA.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_ALPHA.o ${OBJECTDIR}/src/abnf/Rule_ALPHA_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_BIT_nomain.o: ${OBJECTDIR}/src/abnf/Rule_BIT.o src/abnf/Rule_BIT.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_BIT.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_BIT_nomain.o src/abnf/Rule_BIT.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_BIT.o ${OBJECTDIR}/src/abnf/Rule_BIT_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_CFWS_nomain.o: ${OBJECTDIR}/src/abnf/Rule_CFWS.o src/abnf/Rule_CFWS.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_CFWS.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_CFWS_nomain.o src/abnf/Rule_CFWS.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_CFWS.o ${OBJECTDIR}/src/abnf/Rule_CFWS_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_CHAR_nomain.o: ${OBJECTDIR}/src/abnf/Rule_CHAR.o src/abnf/Rule_CHAR.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_CHAR.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_CHAR_nomain.o src/abnf/Rule_CHAR.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_CHAR.o ${OBJECTDIR}/src/abnf/Rule_CHAR_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_CR_nomain.o: ${OBJECTDIR}/src/abnf/Rule_CR.o src/abnf/Rule_CR.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_CR.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_CR_nomain.o src/abnf/Rule_CR.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_CR.o ${OBJECTDIR}/src/abnf/Rule_CR_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_CRLF_nomain.o: ${OBJECTDIR}/src/abnf/Rule_CRLF.o src/abnf/Rule_CRLF.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_CRLF.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_CRLF_nomain.o src/abnf/Rule_CRLF.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_CRLF.o ${OBJECTDIR}/src/abnf/Rule_CRLF_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_CTL_nomain.o: ${OBJECTDIR}/src/abnf/Rule_CTL.o src/abnf/Rule_CTL.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_CTL.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_CTL_nomain.o src/abnf/Rule_CTL.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_CTL.o ${OBJECTDIR}/src/abnf/Rule_CTL_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_DIGIT_nomain.o: ${OBJECTDIR}/src/abnf/Rule_DIGIT.o src/abnf/Rule_DIGIT.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_DIGIT.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_DIGIT_nomain.o src/abnf/Rule_DIGIT.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_DIGIT.o ${OBJECTDIR}/src/abnf/Rule_DIGIT_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_DQUOTE_nomain.o: ${OBJECTDIR}/src/abnf/Rule_DQUOTE.o src/abnf/Rule_DQUOTE.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_DQUOTE.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_DQUOTE_nomain.o src/abnf/Rule_DQUOTE.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_DQUOTE.o ${OBJECTDIR}/src/abnf/Rule_DQUOTE_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_EQUALS_nomain.o: ${OBJECTDIR}/src/abnf/Rule_EQUALS.o src/abnf/Rule_EQUALS.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_EQUALS.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_EQUALS_nomain.o src/abnf/Rule_EQUALS.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_EQUALS.o ${OBJECTDIR}/src/abnf/Rule_EQUALS_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_FQDN_nomain.o: ${OBJECTDIR}/src/abnf/Rule_FQDN.o src/abnf/Rule_FQDN.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_FQDN.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_FQDN_nomain.o src/abnf/Rule_FQDN.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_FQDN.o ${OBJECTDIR}/src/abnf/Rule_FQDN_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_FWS_nomain.o: ${OBJECTDIR}/src/abnf/Rule_FWS.o src/abnf/Rule_FWS.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_FWS.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_FWS_nomain.o src/abnf/Rule_FWS.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_FWS.o ${OBJECTDIR}/src/abnf/Rule_FWS_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_HEXDIG_nomain.o: ${OBJECTDIR}/src/abnf/Rule_HEXDIG.o src/abnf/Rule_HEXDIG.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_HEXDIG.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_HEXDIG_nomain.o src/abnf/Rule_HEXDIG.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_HEXDIG.o ${OBJECTDIR}/src/abnf/Rule_HEXDIG_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_HTAB_nomain.o: ${OBJECTDIR}/src/abnf/Rule_HTAB.o src/abnf/Rule_HTAB.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_HTAB.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_HTAB_nomain.o src/abnf/Rule_HTAB.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_HTAB.o ${OBJECTDIR}/src/abnf/Rule_HTAB_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_IP4_multicast_nomain.o: ${OBJECTDIR}/src/abnf/Rule_IP4_multicast.o src/abnf/Rule_IP4_multicast.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_IP4_multicast.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_IP4_multicast_nomain.o src/abnf/Rule_IP4_multicast.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_IP4_multicast.o ${OBJECTDIR}/src/abnf/Rule_IP4_multicast_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_IP6_multicast_nomain.o: ${OBJECTDIR}/src/abnf/Rule_IP6_multicast.o src/abnf/Rule_IP6_multicast.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_IP6_multicast.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_IP6_multicast_nomain.o src/abnf/Rule_IP6_multicast.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_IP6_multicast.o ${OBJECTDIR}/src/abnf/Rule_IP6_multicast_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_IP_literal_nomain.o: ${OBJECTDIR}/src/abnf/Rule_IP_literal.o src/abnf/Rule_IP_literal.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_IP_literal.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_IP_literal_nomain.o src/abnf/Rule_IP_literal.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_IP_literal.o ${OBJECTDIR}/src/abnf/Rule_IP_literal_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_IPv4address_nomain.o: ${OBJECTDIR}/src/abnf/Rule_IPv4address.o src/abnf/Rule_IPv4address.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_IPv4address.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_IPv4address_nomain.o src/abnf/Rule_IPv4address.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_IPv4address.o ${OBJECTDIR}/src/abnf/Rule_IPv4address_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_IPv6address_nomain.o: ${OBJECTDIR}/src/abnf/Rule_IPv6address.o src/abnf/Rule_IPv6address.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_IPv6address.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_IPv6address_nomain.o src/abnf/Rule_IPv6address.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_IPv6address.o ${OBJECTDIR}/src/abnf/Rule_IPv6address_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_IPvFuture_nomain.o: ${OBJECTDIR}/src/abnf/Rule_IPvFuture.o src/abnf/Rule_IPvFuture.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_IPvFuture.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_IPvFuture_nomain.o src/abnf/Rule_IPvFuture.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_IPvFuture.o ${OBJECTDIR}/src/abnf/Rule_IPvFuture_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_LF_nomain.o: ${OBJECTDIR}/src/abnf/Rule_LF.o src/abnf/Rule_LF.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_LF.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_LF_nomain.o src/abnf/Rule_LF.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_LF.o ${OBJECTDIR}/src/abnf/Rule_LF_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_LWSP_nomain.o: ${OBJECTDIR}/src/abnf/Rule_LWSP.o src/abnf/Rule_LWSP.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_LWSP.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_LWSP_nomain.o src/abnf/Rule_LWSP.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_LWSP.o ${OBJECTDIR}/src/abnf/Rule_LWSP_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_NO_WS_CTL_nomain.o: ${OBJECTDIR}/src/abnf/Rule_NO_WS_CTL.o src/abnf/Rule_NO_WS_CTL.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_NO_WS_CTL.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_NO_WS_CTL_nomain.o src/abnf/Rule_NO_WS_CTL.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_NO_WS_CTL.o ${OBJECTDIR}/src/abnf/Rule_NO_WS_CTL_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_OCTET_nomain.o: ${OBJECTDIR}/src/abnf/Rule_OCTET.o src/abnf/Rule_OCTET.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_OCTET.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_OCTET_nomain.o src/abnf/Rule_OCTET.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_OCTET.o ${OBJECTDIR}/src/abnf/Rule_OCTET_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_POS_DIGIT_nomain.o: ${OBJECTDIR}/src/abnf/Rule_POS_DIGIT.o src/abnf/Rule_POS_DIGIT.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_POS_DIGIT.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_POS_DIGIT_nomain.o src/abnf/Rule_POS_DIGIT.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_POS_DIGIT.o ${OBJECTDIR}/src/abnf/Rule_POS_DIGIT_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_SP_nomain.o: ${OBJECTDIR}/src/abnf/Rule_SP.o src/abnf/Rule_SP.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_SP.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_SP_nomain.o src/abnf/Rule_SP.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_SP.o ${OBJECTDIR}/src/abnf/Rule_SP_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_URI_nomain.o: ${OBJECTDIR}/src/abnf/Rule_URI.o src/abnf/Rule_URI.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_URI.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_URI_nomain.o src/abnf/Rule_URI.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_URI.o ${OBJECTDIR}/src/abnf/Rule_URI_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_URI_reference_nomain.o: ${OBJECTDIR}/src/abnf/Rule_URI_reference.o src/abnf/Rule_URI_reference.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_URI_reference.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_URI_reference_nomain.o src/abnf/Rule_URI_reference.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_URI_reference.o ${OBJECTDIR}/src/abnf/Rule_URI_reference_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_VCHAR_nomain.o: ${OBJECTDIR}/src/abnf/Rule_VCHAR.o src/abnf/Rule_VCHAR.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_VCHAR.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_VCHAR_nomain.o src/abnf/Rule_VCHAR.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_VCHAR.o ${OBJECTDIR}/src/abnf/Rule_VCHAR_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_WSP_nomain.o: ${OBJECTDIR}/src/abnf/Rule_WSP.o src/abnf/Rule_WSP.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_WSP.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_WSP_nomain.o src/abnf/Rule_WSP.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_WSP.o ${OBJECTDIR}/src/abnf/Rule_WSP_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_absolute_URI_nomain.o: ${OBJECTDIR}/src/abnf/Rule_absolute_URI.o src/abnf/Rule_absolute_URI.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_absolute_URI.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_absolute_URI_nomain.o src/abnf/Rule_absolute_URI.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_absolute_URI.o ${OBJECTDIR}/src/abnf/Rule_absolute_URI_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_addr_spec_nomain.o: ${OBJECTDIR}/src/abnf/Rule_addr_spec.o src/abnf/Rule_addr_spec.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_addr_spec.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_addr_spec_nomain.o src/abnf/Rule_addr_spec.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_addr_spec.o ${OBJECTDIR}/src/abnf/Rule_addr_spec_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_address_and_comment_nomain.o: ${OBJECTDIR}/src/abnf/Rule_address_and_comment.o src/abnf/Rule_address_and_comment.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_address_and_comment.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_address_and_comment_nomain.o src/abnf/Rule_address_and_comment.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_address_and_comment.o ${OBJECTDIR}/src/abnf/Rule_address_and_comment_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_addrtype_nomain.o: ${OBJECTDIR}/src/abnf/Rule_addrtype.o src/abnf/Rule_addrtype.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_addrtype.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_addrtype_nomain.o src/abnf/Rule_addrtype.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_addrtype.o ${OBJECTDIR}/src/abnf/Rule_addrtype_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_alpha_numeric_nomain.o: ${OBJECTDIR}/src/abnf/Rule_alpha_numeric.o src/abnf/Rule_alpha_numeric.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_alpha_numeric.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_alpha_numeric_nomain.o src/abnf/Rule_alpha_numeric.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_alpha_numeric.o ${OBJECTDIR}/src/abnf/Rule_alpha_numeric_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_app_nomain.o: ${OBJECTDIR}/src/abnf/Rule_app.o src/abnf/Rule_app.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_app.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_app_nomain.o src/abnf/Rule_app.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_app.o ${OBJECTDIR}/src/abnf/Rule_app_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_atext_nomain.o: ${OBJECTDIR}/src/abnf/Rule_atext.o src/abnf/Rule_atext.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_atext.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_atext_nomain.o src/abnf/Rule_atext.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_atext.o ${OBJECTDIR}/src/abnf/Rule_atext_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_atom_nomain.o: ${OBJECTDIR}/src/abnf/Rule_atom.o src/abnf/Rule_atom.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_atom.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_atom_nomain.o src/abnf/Rule_atom.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_atom.o ${OBJECTDIR}/src/abnf/Rule_atom_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_att_field_nomain.o: ${OBJECTDIR}/src/abnf/Rule_att_field.o src/abnf/Rule_att_field.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_att_field.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_att_field_nomain.o src/abnf/Rule_att_field.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_att_field.o ${OBJECTDIR}/src/abnf/Rule_att_field_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_att_value_nomain.o: ${OBJECTDIR}/src/abnf/Rule_att_value.o src/abnf/Rule_att_value.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_att_value.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_att_value_nomain.o src/abnf/Rule_att_value.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_att_value.o ${OBJECTDIR}/src/abnf/Rule_att_value_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_attribute_nomain.o: ${OBJECTDIR}/src/abnf/Rule_attribute.o src/abnf/Rule_attribute.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_attribute.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_attribute_nomain.o src/abnf/Rule_attribute.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_attribute.o ${OBJECTDIR}/src/abnf/Rule_attribute_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_attribute_field_nomain.o: ${OBJECTDIR}/src/abnf/Rule_attribute_field.o src/abnf/Rule_attribute_field.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_attribute_field.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_attribute_field_nomain.o src/abnf/Rule_attribute_field.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_attribute_field.o ${OBJECTDIR}/src/abnf/Rule_attribute_field_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_attribute_fields_nomain.o: ${OBJECTDIR}/src/abnf/Rule_attribute_fields.o src/abnf/Rule_attribute_fields.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_attribute_fields.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_attribute_fields_nomain.o src/abnf/Rule_attribute_fields.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_attribute_fields.o ${OBJECTDIR}/src/abnf/Rule_attribute_fields_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_authority_nomain.o: ${OBJECTDIR}/src/abnf/Rule_authority.o src/abnf/Rule_authority.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_authority.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_authority_nomain.o src/abnf/Rule_authority.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_authority.o ${OBJECTDIR}/src/abnf/Rule_authority_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_bandwidth_nomain.o: ${OBJECTDIR}/src/abnf/Rule_bandwidth.o src/abnf/Rule_bandwidth.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_bandwidth.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_bandwidth_nomain.o src/abnf/Rule_bandwidth.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_bandwidth.o ${OBJECTDIR}/src/abnf/Rule_bandwidth_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_bandwidth_field_nomain.o: ${OBJECTDIR}/src/abnf/Rule_bandwidth_field.o src/abnf/Rule_bandwidth_field.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_bandwidth_field.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_bandwidth_field_nomain.o src/abnf/Rule_bandwidth_field.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_bandwidth_field.o ${OBJECTDIR}/src/abnf/Rule_bandwidth_field_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_bandwidth_fields_nomain.o: ${OBJECTDIR}/src/abnf/Rule_bandwidth_fields.o src/abnf/Rule_bandwidth_fields.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_bandwidth_fields.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_bandwidth_fields_nomain.o src/abnf/Rule_bandwidth_fields.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_bandwidth_fields.o ${OBJECTDIR}/src/abnf/Rule_bandwidth_fields_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_base64_nomain.o: ${OBJECTDIR}/src/abnf/Rule_base64.o src/abnf/Rule_base64.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_base64.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_base64_nomain.o src/abnf/Rule_base64.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_base64.o ${OBJECTDIR}/src/abnf/Rule_base64_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_base64_char_nomain.o: ${OBJECTDIR}/src/abnf/Rule_base64_char.o src/abnf/Rule_base64_char.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_base64_char.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_base64_char_nomain.o src/abnf/Rule_base64_char.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_base64_char.o ${OBJECTDIR}/src/abnf/Rule_base64_char_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_base64_key_type_nomain.o: ${OBJECTDIR}/src/abnf/Rule_base64_key_type.o src/abnf/Rule_base64_key_type.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_base64_key_type.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_base64_key_type_nomain.o src/abnf/Rule_base64_key_type.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_base64_key_type.o ${OBJECTDIR}/src/abnf/Rule_base64_key_type_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_base64_pad_nomain.o: ${OBJECTDIR}/src/abnf/Rule_base64_pad.o src/abnf/Rule_base64_pad.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_base64_pad.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_base64_pad_nomain.o src/abnf/Rule_base64_pad.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_base64_pad.o ${OBJECTDIR}/src/abnf/Rule_base64_pad_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_base64_unit_nomain.o: ${OBJECTDIR}/src/abnf/Rule_base64_unit.o src/abnf/Rule_base64_unit.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_base64_unit.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_base64_unit_nomain.o src/abnf/Rule_base64_unit.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_base64_unit.o ${OBJECTDIR}/src/abnf/Rule_base64_unit_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_bwtype_nomain.o: ${OBJECTDIR}/src/abnf/Rule_bwtype.o src/abnf/Rule_bwtype.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_bwtype.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_bwtype_nomain.o src/abnf/Rule_bwtype.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_bwtype.o ${OBJECTDIR}/src/abnf/Rule_bwtype_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_byte_string_nomain.o: ${OBJECTDIR}/src/abnf/Rule_byte_string.o src/abnf/Rule_byte_string.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_byte_string.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_byte_string_nomain.o src/abnf/Rule_byte_string.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_byte_string.o ${OBJECTDIR}/src/abnf/Rule_byte_string_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_cand_type_nomain.o: ${OBJECTDIR}/src/abnf/Rule_cand_type.o src/abnf/Rule_cand_type.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_cand_type.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_cand_type_nomain.o src/abnf/Rule_cand_type.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_cand_type.o ${OBJECTDIR}/src/abnf/Rule_cand_type_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_candidate_attribute_nomain.o: ${OBJECTDIR}/src/abnf/Rule_candidate_attribute.o src/abnf/Rule_candidate_attribute.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_candidate_attribute.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_candidate_attribute_nomain.o src/abnf/Rule_candidate_attribute.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_candidate_attribute.o ${OBJECTDIR}/src/abnf/Rule_candidate_attribute_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_candidate_types_nomain.o: ${OBJECTDIR}/src/abnf/Rule_candidate_types.o src/abnf/Rule_candidate_types.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_candidate_types.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_candidate_types_nomain.o src/abnf/Rule_candidate_types.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_candidate_types.o ${OBJECTDIR}/src/abnf/Rule_candidate_types_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_ccontent_nomain.o: ${OBJECTDIR}/src/abnf/Rule_ccontent.o src/abnf/Rule_ccontent.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_ccontent.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_ccontent_nomain.o src/abnf/Rule_ccontent.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_ccontent.o ${OBJECTDIR}/src/abnf/Rule_ccontent_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_clear_key_type_nomain.o: ${OBJECTDIR}/src/abnf/Rule_clear_key_type.o src/abnf/Rule_clear_key_type.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_clear_key_type.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_clear_key_type_nomain.o src/abnf/Rule_clear_key_type.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_clear_key_type.o ${OBJECTDIR}/src/abnf/Rule_clear_key_type_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_cname_nomain.o: ${OBJECTDIR}/src/abnf/Rule_cname.o src/abnf/Rule_cname.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_cname.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_cname_nomain.o src/abnf/Rule_cname.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_cname.o ${OBJECTDIR}/src/abnf/Rule_cname_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_cname_attr_nomain.o: ${OBJECTDIR}/src/abnf/Rule_cname_attr.o src/abnf/Rule_cname_attr.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_cname_attr.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_cname_attr_nomain.o src/abnf/Rule_cname_attr.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_cname_attr.o ${OBJECTDIR}/src/abnf/Rule_cname_attr_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_comment_nomain.o: ${OBJECTDIR}/src/abnf/Rule_comment.o src/abnf/Rule_comment.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_comment.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_comment_nomain.o src/abnf/Rule_comment.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_comment.o ${OBJECTDIR}/src/abnf/Rule_comment_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_component_id_nomain.o: ${OBJECTDIR}/src/abnf/Rule_component_id.o src/abnf/Rule_component_id.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_component_id.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_component_id_nomain.o src/abnf/Rule_component_id.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_component_id.o ${OBJECTDIR}/src/abnf/Rule_component_id_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_connection_address_nomain.o: ${OBJECTDIR}/src/abnf/Rule_connection_address.o src/abnf/Rule_connection_address.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_connection_address.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_connection_address_nomain.o src/abnf/Rule_connection_address.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_connection_address.o ${OBJECTDIR}/src/abnf/Rule_connection_address_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_connection_field_nomain.o: ${OBJECTDIR}/src/abnf/Rule_connection_field.o src/abnf/Rule_connection_field.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_connection_field.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_connection_field_nomain.o src/abnf/Rule_connection_field.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_connection_field.o ${OBJECTDIR}/src/abnf/Rule_connection_field_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_crypto_attribute_nomain.o: ${OBJECTDIR}/src/abnf/Rule_crypto_attribute.o src/abnf/Rule_crypto_attribute.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_crypto_attribute.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_crypto_attribute_nomain.o src/abnf/Rule_crypto_attribute.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_crypto_attribute.o ${OBJECTDIR}/src/abnf/Rule_crypto_attribute_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_crypto_suite_nomain.o: ${OBJECTDIR}/src/abnf/Rule_crypto_suite.o src/abnf/Rule_crypto_suite.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_crypto_suite.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_crypto_suite_nomain.o src/abnf/Rule_crypto_suite.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_crypto_suite.o ${OBJECTDIR}/src/abnf/Rule_crypto_suite_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_ctext_nomain.o: ${OBJECTDIR}/src/abnf/Rule_ctext.o src/abnf/Rule_ctext.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_ctext.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_ctext_nomain.o src/abnf/Rule_ctext.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_ctext.o ${OBJECTDIR}/src/abnf/Rule_ctext_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_dcontent_nomain.o: ${OBJECTDIR}/src/abnf/Rule_dcontent.o src/abnf/Rule_dcontent.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_dcontent.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_dcontent_nomain.o src/abnf/Rule_dcontent.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_dcontent.o ${OBJECTDIR}/src/abnf/Rule_dcontent_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_dec_octet_nomain.o: ${OBJECTDIR}/src/abnf/Rule_dec_octet.o src/abnf/Rule_dec_octet.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_dec_octet.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_dec_octet_nomain.o src/abnf/Rule_dec_octet.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_dec_octet.o ${OBJECTDIR}/src/abnf/Rule_dec_octet_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_decimal_uchar_nomain.o: ${OBJECTDIR}/src/abnf/Rule_decimal_uchar.o src/abnf/Rule_decimal_uchar.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_decimal_uchar.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_decimal_uchar_nomain.o src/abnf/Rule_decimal_uchar.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_decimal_uchar.o ${OBJECTDIR}/src/abnf/Rule_decimal_uchar_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_decimal_uchar_1xx_nomain.o: ${OBJECTDIR}/src/abnf/Rule_decimal_uchar_1xx.o src/abnf/Rule_decimal_uchar_1xx.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_decimal_uchar_1xx.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_decimal_uchar_1xx_nomain.o src/abnf/Rule_decimal_uchar_1xx.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_decimal_uchar_1xx.o ${OBJECTDIR}/src/abnf/Rule_decimal_uchar_1xx_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_decimal_uchar_25x_nomain.o: ${OBJECTDIR}/src/abnf/Rule_decimal_uchar_25x.o src/abnf/Rule_decimal_uchar_25x.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_decimal_uchar_25x.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_decimal_uchar_25x_nomain.o src/abnf/Rule_decimal_uchar_25x.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_decimal_uchar_25x.o ${OBJECTDIR}/src/abnf/Rule_decimal_uchar_25x_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_decimal_uchar_2xx_nomain.o: ${OBJECTDIR}/src/abnf/Rule_decimal_uchar_2xx.o src/abnf/Rule_decimal_uchar_2xx.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_decimal_uchar_2xx.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_decimal_uchar_2xx_nomain.o src/abnf/Rule_decimal_uchar_2xx.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_decimal_uchar_2xx.o ${OBJECTDIR}/src/abnf/Rule_decimal_uchar_2xx_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_direction_nomain.o: ${OBJECTDIR}/src/abnf/Rule_direction.o src/abnf/Rule_direction.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_direction.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_direction_nomain.o src/abnf/Rule_direction.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_direction.o ${OBJECTDIR}/src/abnf/Rule_direction_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_dispname_and_address_nomain.o: ${OBJECTDIR}/src/abnf/Rule_dispname_and_address.o src/abnf/Rule_dispname_and_address.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_dispname_and_address.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_dispname_and_address_nomain.o src/abnf/Rule_dispname_and_address.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_dispname_and_address.o ${OBJECTDIR}/src/abnf/Rule_dispname_and_address_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_domain_nomain.o: ${OBJECTDIR}/src/abnf/Rule_domain.o src/abnf/Rule_domain.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_domain.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_domain_nomain.o src/abnf/Rule_domain.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_domain.o ${OBJECTDIR}/src/abnf/Rule_domain_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_domain_literal_nomain.o: ${OBJECTDIR}/src/abnf/Rule_domain_literal.o src/abnf/Rule_domain_literal.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_domain_literal.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_domain_literal_nomain.o src/abnf/Rule_domain_literal.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_domain_literal.o ${OBJECTDIR}/src/abnf/Rule_domain_literal_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_dot_atom_nomain.o: ${OBJECTDIR}/src/abnf/Rule_dot_atom.o src/abnf/Rule_dot_atom.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_dot_atom.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_dot_atom_nomain.o src/abnf/Rule_dot_atom.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_dot_atom.o ${OBJECTDIR}/src/abnf/Rule_dot_atom_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_dot_atom_text_nomain.o: ${OBJECTDIR}/src/abnf/Rule_dot_atom_text.o src/abnf/Rule_dot_atom_text.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_dot_atom_text.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_dot_atom_text_nomain.o src/abnf/Rule_dot_atom_text.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_dot_atom_text.o ${OBJECTDIR}/src/abnf/Rule_dot_atom_text_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_dtext_nomain.o: ${OBJECTDIR}/src/abnf/Rule_dtext.o src/abnf/Rule_dtext.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_dtext.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_dtext_nomain.o src/abnf/Rule_dtext.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_dtext.o ${OBJECTDIR}/src/abnf/Rule_dtext_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_email_address_nomain.o: ${OBJECTDIR}/src/abnf/Rule_email_address.o src/abnf/Rule_email_address.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_email_address.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_email_address_nomain.o src/abnf/Rule_email_address.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_email_address.o ${OBJECTDIR}/src/abnf/Rule_email_address_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_email_field_nomain.o: ${OBJECTDIR}/src/abnf/Rule_email_field.o src/abnf/Rule_email_field.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_email_field.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_email_field_nomain.o src/abnf/Rule_email_field.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_email_field.o ${OBJECTDIR}/src/abnf/Rule_email_field_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_email_fields_nomain.o: ${OBJECTDIR}/src/abnf/Rule_email_fields.o src/abnf/Rule_email_fields.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_email_fields.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_email_fields_nomain.o src/abnf/Rule_email_fields.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_email_fields.o ${OBJECTDIR}/src/abnf/Rule_email_fields_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_email_safe_nomain.o: ${OBJECTDIR}/src/abnf/Rule_email_safe.o src/abnf/Rule_email_safe.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_email_safe.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_email_safe_nomain.o src/abnf/Rule_email_safe.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_email_safe.o ${OBJECTDIR}/src/abnf/Rule_email_safe_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_extension_att_nomain.o: ${OBJECTDIR}/src/abnf/Rule_extension_att.o src/abnf/Rule_extension_att.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_extension_att.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_extension_att_nomain.o src/abnf/Rule_extension_att.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_extension_att.o ${OBJECTDIR}/src/abnf/Rule_extension_att_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_extension_att_name_nomain.o: ${OBJECTDIR}/src/abnf/Rule_extension_att_name.o src/abnf/Rule_extension_att_name.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_extension_att_name.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_extension_att_name_nomain.o src/abnf/Rule_extension_att_name.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_extension_att_name.o ${OBJECTDIR}/src/abnf/Rule_extension_att_name_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_extension_att_value_nomain.o: ${OBJECTDIR}/src/abnf/Rule_extension_att_value.o src/abnf/Rule_extension_att_value.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_extension_att_value.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_extension_att_value_nomain.o src/abnf/Rule_extension_att_value.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_extension_att_value.o ${OBJECTDIR}/src/abnf/Rule_extension_att_value_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_extension_attributes_nomain.o: ${OBJECTDIR}/src/abnf/Rule_extension_attributes.o src/abnf/Rule_extension_attributes.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_extension_attributes.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_extension_attributes_nomain.o src/abnf/Rule_extension_attributes.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_extension_attributes.o ${OBJECTDIR}/src/abnf/Rule_extension_attributes_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_extension_identifier_nomain.o: ${OBJECTDIR}/src/abnf/Rule_extension_identifier.o src/abnf/Rule_extension_identifier.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_extension_identifier.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_extension_identifier_nomain.o src/abnf/Rule_extension_identifier.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_extension_identifier.o ${OBJECTDIR}/src/abnf/Rule_extension_identifier_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_extension_name_nomain.o: ${OBJECTDIR}/src/abnf/Rule_extension_name.o src/abnf/Rule_extension_name.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_extension_name.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_extension_name_nomain.o src/abnf/Rule_extension_name.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_extension_name.o ${OBJECTDIR}/src/abnf/Rule_extension_name_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_extmap_attribute_nomain.o: ${OBJECTDIR}/src/abnf/Rule_extmap_attribute.o src/abnf/Rule_extmap_attribute.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_extmap_attribute.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_extmap_attribute_nomain.o src/abnf/Rule_extmap_attribute.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_extmap_attribute.o ${OBJECTDIR}/src/abnf/Rule_extmap_attribute_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_extn_addr_nomain.o: ${OBJECTDIR}/src/abnf/Rule_extn_addr.o src/abnf/Rule_extn_addr.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_extn_addr.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_extn_addr_nomain.o src/abnf/Rule_extn_addr.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_extn_addr.o ${OBJECTDIR}/src/abnf/Rule_extn_addr_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_fingerprint_nomain.o: ${OBJECTDIR}/src/abnf/Rule_fingerprint.o src/abnf/Rule_fingerprint.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_fingerprint.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_fingerprint_nomain.o src/abnf/Rule_fingerprint.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_fingerprint.o ${OBJECTDIR}/src/abnf/Rule_fingerprint_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_fingerprint_attribute_nomain.o: ${OBJECTDIR}/src/abnf/Rule_fingerprint_attribute.o src/abnf/Rule_fingerprint_attribute.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_fingerprint_attribute.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_fingerprint_attribute_nomain.o src/abnf/Rule_fingerprint_attribute.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_fingerprint_attribute.o ${OBJECTDIR}/src/abnf/Rule_fingerprint_attribute_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_fixed_len_time_unit_nomain.o: ${OBJECTDIR}/src/abnf/Rule_fixed_len_time_unit.o src/abnf/Rule_fixed_len_time_unit.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_fixed_len_time_unit.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_fixed_len_time_unit_nomain.o src/abnf/Rule_fixed_len_time_unit.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_fixed_len_time_unit.o ${OBJECTDIR}/src/abnf/Rule_fixed_len_time_unit_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_fmt_nomain.o: ${OBJECTDIR}/src/abnf/Rule_fmt.o src/abnf/Rule_fmt.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_fmt.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_fmt_nomain.o src/abnf/Rule_fmt.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_fmt.o ${OBJECTDIR}/src/abnf/Rule_fmt_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_fmtp_attr_nomain.o: ${OBJECTDIR}/src/abnf/Rule_fmtp_attr.o src/abnf/Rule_fmtp_attr.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_fmtp_attr.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_fmtp_attr_nomain.o src/abnf/Rule_fmtp_attr.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_fmtp_attr.o ${OBJECTDIR}/src/abnf/Rule_fmtp_attr_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_foundation_nomain.o: ${OBJECTDIR}/src/abnf/Rule_foundation.o src/abnf/Rule_foundation.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_foundation.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_foundation_nomain.o src/abnf/Rule_foundation.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_foundation.o ${OBJECTDIR}/src/abnf/Rule_foundation_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_fragment_nomain.o: ${OBJECTDIR}/src/abnf/Rule_fragment.o src/abnf/Rule_fragment.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_fragment.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_fragment_nomain.o src/abnf/Rule_fragment.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_fragment.o ${OBJECTDIR}/src/abnf/Rule_fragment_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_gen_attribute_nomain.o: ${OBJECTDIR}/src/abnf/Rule_gen_attribute.o src/abnf/Rule_gen_attribute.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_gen_attribute.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_gen_attribute_nomain.o src/abnf/Rule_gen_attribute.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_gen_attribute.o ${OBJECTDIR}/src/abnf/Rule_gen_attribute_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_gen_delims_nomain.o: ${OBJECTDIR}/src/abnf/Rule_gen_delims.o src/abnf/Rule_gen_delims.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_gen_delims.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_gen_delims_nomain.o src/abnf/Rule_gen_delims.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_gen_delims.o ${OBJECTDIR}/src/abnf/Rule_gen_delims_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_group_attr_nomain.o: ${OBJECTDIR}/src/abnf/Rule_group_attr.o src/abnf/Rule_group_attr.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_group_attr.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_group_attr_nomain.o src/abnf/Rule_group_attr.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_group_attr.o ${OBJECTDIR}/src/abnf/Rule_group_attr_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_group_semantics_nomain.o: ${OBJECTDIR}/src/abnf/Rule_group_semantics.o src/abnf/Rule_group_semantics.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_group_semantics.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_group_semantics_nomain.o src/abnf/Rule_group_semantics.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_group_semantics.o ${OBJECTDIR}/src/abnf/Rule_group_semantics_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_h16_nomain.o: ${OBJECTDIR}/src/abnf/Rule_h16.o src/abnf/Rule_h16.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_h16.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_h16_nomain.o src/abnf/Rule_h16.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_h16.o ${OBJECTDIR}/src/abnf/Rule_h16_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_hash_func_nomain.o: ${OBJECTDIR}/src/abnf/Rule_hash_func.o src/abnf/Rule_hash_func.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_hash_func.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_hash_func_nomain.o src/abnf/Rule_hash_func.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_hash_func.o ${OBJECTDIR}/src/abnf/Rule_hash_func_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_hier_part_nomain.o: ${OBJECTDIR}/src/abnf/Rule_hier_part.o src/abnf/Rule_hier_part.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_hier_part.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_hier_part_nomain.o src/abnf/Rule_hier_part.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_hier_part.o ${OBJECTDIR}/src/abnf/Rule_hier_part_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_host_nomain.o: ${OBJECTDIR}/src/abnf/Rule_host.o src/abnf/Rule_host.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_host.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_host_nomain.o src/abnf/Rule_host.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_host.o ${OBJECTDIR}/src/abnf/Rule_host_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_ice_char_nomain.o: ${OBJECTDIR}/src/abnf/Rule_ice_char.o src/abnf/Rule_ice_char.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_ice_char.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_ice_char_nomain.o src/abnf/Rule_ice_char.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_ice_char.o ${OBJECTDIR}/src/abnf/Rule_ice_char_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_identification_tag_nomain.o: ${OBJECTDIR}/src/abnf/Rule_identification_tag.o src/abnf/Rule_identification_tag.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_identification_tag.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_identification_tag_nomain.o src/abnf/Rule_identification_tag.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_identification_tag.o ${OBJECTDIR}/src/abnf/Rule_identification_tag_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_information_field_nomain.o: ${OBJECTDIR}/src/abnf/Rule_information_field.o src/abnf/Rule_information_field.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_information_field.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_information_field_nomain.o src/abnf/Rule_information_field.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_information_field.o ${OBJECTDIR}/src/abnf/Rule_information_field_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_integer_nomain.o: ${OBJECTDIR}/src/abnf/Rule_integer.o src/abnf/Rule_integer.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_integer.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_integer_nomain.o src/abnf/Rule_integer.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_integer.o ${OBJECTDIR}/src/abnf/Rule_integer_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_key_field_nomain.o: ${OBJECTDIR}/src/abnf/Rule_key_field.o src/abnf/Rule_key_field.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_key_field.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_key_field_nomain.o src/abnf/Rule_key_field.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_key_field.o ${OBJECTDIR}/src/abnf/Rule_key_field_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_key_info_nomain.o: ${OBJECTDIR}/src/abnf/Rule_key_info.o src/abnf/Rule_key_info.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_key_info.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_key_info_nomain.o src/abnf/Rule_key_info.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_key_info.o ${OBJECTDIR}/src/abnf/Rule_key_info_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_key_lifetime_nomain.o: ${OBJECTDIR}/src/abnf/Rule_key_lifetime.o src/abnf/Rule_key_lifetime.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_key_lifetime.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_key_lifetime_nomain.o src/abnf/Rule_key_lifetime.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_key_lifetime.o ${OBJECTDIR}/src/abnf/Rule_key_lifetime_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_key_method_nomain.o: ${OBJECTDIR}/src/abnf/Rule_key_method.o src/abnf/Rule_key_method.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_key_method.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_key_method_nomain.o src/abnf/Rule_key_method.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_key_method.o ${OBJECTDIR}/src/abnf/Rule_key_method_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_key_method_ext_nomain.o: ${OBJECTDIR}/src/abnf/Rule_key_method_ext.o src/abnf/Rule_key_method_ext.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_key_method_ext.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_key_method_ext_nomain.o src/abnf/Rule_key_method_ext.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_key_method_ext.o ${OBJECTDIR}/src/abnf/Rule_key_method_ext_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_key_mki_nomain.o: ${OBJECTDIR}/src/abnf/Rule_key_mki.o src/abnf/Rule_key_mki.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_key_mki.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_key_mki_nomain.o src/abnf/Rule_key_mki.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_key_mki.o ${OBJECTDIR}/src/abnf/Rule_key_mki_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_key_mki_length_nomain.o: ${OBJECTDIR}/src/abnf/Rule_key_mki_length.o src/abnf/Rule_key_mki_length.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_key_mki_length.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_key_mki_length_nomain.o src/abnf/Rule_key_mki_length.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_key_mki_length.o ${OBJECTDIR}/src/abnf/Rule_key_mki_length_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_key_mki_value_nomain.o: ${OBJECTDIR}/src/abnf/Rule_key_mki_value.o src/abnf/Rule_key_mki_value.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_key_mki_value.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_key_mki_value_nomain.o src/abnf/Rule_key_mki_value.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_key_mki_value.o ${OBJECTDIR}/src/abnf/Rule_key_mki_value_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_key_param_nomain.o: ${OBJECTDIR}/src/abnf/Rule_key_param.o src/abnf/Rule_key_param.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_key_param.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_key_param_nomain.o src/abnf/Rule_key_param.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_key_param.o ${OBJECTDIR}/src/abnf/Rule_key_param_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_key_params_nomain.o: ${OBJECTDIR}/src/abnf/Rule_key_params.o src/abnf/Rule_key_params.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_key_params.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_key_params_nomain.o src/abnf/Rule_key_params.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_key_params.o ${OBJECTDIR}/src/abnf/Rule_key_params_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_key_salt_nomain.o: ${OBJECTDIR}/src/abnf/Rule_key_salt.o src/abnf/Rule_key_salt.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_key_salt.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_key_salt_nomain.o src/abnf/Rule_key_salt.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_key_salt.o ${OBJECTDIR}/src/abnf/Rule_key_salt_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_key_type_nomain.o: ${OBJECTDIR}/src/abnf/Rule_key_type.o src/abnf/Rule_key_type.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_key_type.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_key_type_nomain.o src/abnf/Rule_key_type.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_key_type.o ${OBJECTDIR}/src/abnf/Rule_key_type_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_local_part_nomain.o: ${OBJECTDIR}/src/abnf/Rule_local_part.o src/abnf/Rule_local_part.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_local_part.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_local_part_nomain.o src/abnf/Rule_local_part.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_local_part.o ${OBJECTDIR}/src/abnf/Rule_local_part_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_ls32_nomain.o: ${OBJECTDIR}/src/abnf/Rule_ls32.o src/abnf/Rule_ls32.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_ls32.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_ls32_nomain.o src/abnf/Rule_ls32.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_ls32.o ${OBJECTDIR}/src/abnf/Rule_ls32_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_m1_nomain.o: ${OBJECTDIR}/src/abnf/Rule_m1.o src/abnf/Rule_m1.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_m1.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_m1_nomain.o src/abnf/Rule_m1.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_m1.o ${OBJECTDIR}/src/abnf/Rule_m1_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_media_nomain.o: ${OBJECTDIR}/src/abnf/Rule_media.o src/abnf/Rule_media.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_media.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_media_nomain.o src/abnf/Rule_media.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_media.o ${OBJECTDIR}/src/abnf/Rule_media_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_media_description_nomain.o: ${OBJECTDIR}/src/abnf/Rule_media_description.o src/abnf/Rule_media_description.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_media_description.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_media_description_nomain.o src/abnf/Rule_media_description.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_media_description.o ${OBJECTDIR}/src/abnf/Rule_media_description_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_media_descriptions_nomain.o: ${OBJECTDIR}/src/abnf/Rule_media_descriptions.o src/abnf/Rule_media_descriptions.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_media_descriptions.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_media_descriptions_nomain.o src/abnf/Rule_media_descriptions.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_media_descriptions.o ${OBJECTDIR}/src/abnf/Rule_media_descriptions_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_media_field_nomain.o: ${OBJECTDIR}/src/abnf/Rule_media_field.o src/abnf/Rule_media_field.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_media_field.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_media_field_nomain.o src/abnf/Rule_media_field.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_media_field.o ${OBJECTDIR}/src/abnf/Rule_media_field_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_mid_attr_nomain.o: ${OBJECTDIR}/src/abnf/Rule_mid_attr.o src/abnf/Rule_mid_attr.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_mid_attr.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_mid_attr_nomain.o src/abnf/Rule_mid_attr.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_mid_attr.o ${OBJECTDIR}/src/abnf/Rule_mid_attr_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_name_nomain.o: ${OBJECTDIR}/src/abnf/Rule_name.o src/abnf/Rule_name.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_name.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_name_nomain.o src/abnf/Rule_name.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_name.o ${OBJECTDIR}/src/abnf/Rule_name_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_nettype_nomain.o: ${OBJECTDIR}/src/abnf/Rule_nettype.o src/abnf/Rule_nettype.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_nettype.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_nettype_nomain.o src/abnf/Rule_nettype.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_nettype.o ${OBJECTDIR}/src/abnf/Rule_nettype_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_non_ws_string_nomain.o: ${OBJECTDIR}/src/abnf/Rule_non_ws_string.o src/abnf/Rule_non_ws_string.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_non_ws_string.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_non_ws_string_nomain.o src/abnf/Rule_non_ws_string.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_non_ws_string.o ${OBJECTDIR}/src/abnf/Rule_non_ws_string_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_number_of_ports_nomain.o: ${OBJECTDIR}/src/abnf/Rule_number_of_ports.o src/abnf/Rule_number_of_ports.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_number_of_ports.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_number_of_ports_nomain.o src/abnf/Rule_number_of_ports.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_number_of_ports.o ${OBJECTDIR}/src/abnf/Rule_number_of_ports_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_obs_FWS_nomain.o: ${OBJECTDIR}/src/abnf/Rule_obs_FWS.o src/abnf/Rule_obs_FWS.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_obs_FWS.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_obs_FWS_nomain.o src/abnf/Rule_obs_FWS.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_obs_FWS.o ${OBJECTDIR}/src/abnf/Rule_obs_FWS_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_obs_char_nomain.o: ${OBJECTDIR}/src/abnf/Rule_obs_char.o src/abnf/Rule_obs_char.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_obs_char.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_obs_char_nomain.o src/abnf/Rule_obs_char.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_obs_char.o ${OBJECTDIR}/src/abnf/Rule_obs_char_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_obs_domain_nomain.o: ${OBJECTDIR}/src/abnf/Rule_obs_domain.o src/abnf/Rule_obs_domain.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_obs_domain.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_obs_domain_nomain.o src/abnf/Rule_obs_domain.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_obs_domain.o ${OBJECTDIR}/src/abnf/Rule_obs_domain_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_obs_local_part_nomain.o: ${OBJECTDIR}/src/abnf/Rule_obs_local_part.o src/abnf/Rule_obs_local_part.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_obs_local_part.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_obs_local_part_nomain.o src/abnf/Rule_obs_local_part.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_obs_local_part.o ${OBJECTDIR}/src/abnf/Rule_obs_local_part_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_obs_qp_nomain.o: ${OBJECTDIR}/src/abnf/Rule_obs_qp.o src/abnf/Rule_obs_qp.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_obs_qp.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_obs_qp_nomain.o src/abnf/Rule_obs_qp.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_obs_qp.o ${OBJECTDIR}/src/abnf/Rule_obs_qp_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_obs_text_nomain.o: ${OBJECTDIR}/src/abnf/Rule_obs_text.o src/abnf/Rule_obs_text.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_obs_text.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_obs_text_nomain.o src/abnf/Rule_obs_text.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_obs_text.o ${OBJECTDIR}/src/abnf/Rule_obs_text_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_origin_field_nomain.o: ${OBJECTDIR}/src/abnf/Rule_origin_field.o src/abnf/Rule_origin_field.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_origin_field.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_origin_field_nomain.o src/abnf/Rule_origin_field.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_origin_field.o ${OBJECTDIR}/src/abnf/Rule_origin_field_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_param_list_nomain.o: ${OBJECTDIR}/src/abnf/Rule_param_list.o src/abnf/Rule_param_list.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_param_list.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_param_list_nomain.o src/abnf/Rule_param_list.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_param_list.o ${OBJECTDIR}/src/abnf/Rule_param_list_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_parameters_nomain.o: ${OBJECTDIR}/src/abnf/Rule_parameters.o src/abnf/Rule_parameters.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_parameters.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_parameters_nomain.o src/abnf/Rule_parameters.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_parameters.o ${OBJECTDIR}/src/abnf/Rule_parameters_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_path_nomain.o: ${OBJECTDIR}/src/abnf/Rule_path.o src/abnf/Rule_path.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_path.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_path_nomain.o src/abnf/Rule_path.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_path.o ${OBJECTDIR}/src/abnf/Rule_path_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_path_abempty_nomain.o: ${OBJECTDIR}/src/abnf/Rule_path_abempty.o src/abnf/Rule_path_abempty.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_path_abempty.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_path_abempty_nomain.o src/abnf/Rule_path_abempty.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_path_abempty.o ${OBJECTDIR}/src/abnf/Rule_path_abempty_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_path_absolute_nomain.o: ${OBJECTDIR}/src/abnf/Rule_path_absolute.o src/abnf/Rule_path_absolute.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_path_absolute.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_path_absolute_nomain.o src/abnf/Rule_path_absolute.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_path_absolute.o ${OBJECTDIR}/src/abnf/Rule_path_absolute_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_path_empty_nomain.o: ${OBJECTDIR}/src/abnf/Rule_path_empty.o src/abnf/Rule_path_empty.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_path_empty.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_path_empty_nomain.o src/abnf/Rule_path_empty.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_path_empty.o ${OBJECTDIR}/src/abnf/Rule_path_empty_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_path_noscheme_nomain.o: ${OBJECTDIR}/src/abnf/Rule_path_noscheme.o src/abnf/Rule_path_noscheme.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_path_noscheme.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_path_noscheme_nomain.o src/abnf/Rule_path_noscheme.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_path_noscheme.o ${OBJECTDIR}/src/abnf/Rule_path_noscheme_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_path_rootless_nomain.o: ${OBJECTDIR}/src/abnf/Rule_path_rootless.o src/abnf/Rule_path_rootless.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_path_rootless.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_path_rootless_nomain.o src/abnf/Rule_path_rootless.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_path_rootless.o ${OBJECTDIR}/src/abnf/Rule_path_rootless_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_pchar_nomain.o: ${OBJECTDIR}/src/abnf/Rule_pchar.o src/abnf/Rule_pchar.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_pchar.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_pchar_nomain.o src/abnf/Rule_pchar.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_pchar.o ${OBJECTDIR}/src/abnf/Rule_pchar_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_pct_encoded_nomain.o: ${OBJECTDIR}/src/abnf/Rule_pct_encoded.o src/abnf/Rule_pct_encoded.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_pct_encoded.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_pct_encoded_nomain.o src/abnf/Rule_pct_encoded.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_pct_encoded.o ${OBJECTDIR}/src/abnf/Rule_pct_encoded_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_phone_nomain.o: ${OBJECTDIR}/src/abnf/Rule_phone.o src/abnf/Rule_phone.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_phone.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_phone_nomain.o src/abnf/Rule_phone.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_phone.o ${OBJECTDIR}/src/abnf/Rule_phone_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_phone_field_nomain.o: ${OBJECTDIR}/src/abnf/Rule_phone_field.o src/abnf/Rule_phone_field.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_phone_field.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_phone_field_nomain.o src/abnf/Rule_phone_field.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_phone_field.o ${OBJECTDIR}/src/abnf/Rule_phone_field_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_phone_fields_nomain.o: ${OBJECTDIR}/src/abnf/Rule_phone_fields.o src/abnf/Rule_phone_fields.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_phone_fields.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_phone_fields_nomain.o src/abnf/Rule_phone_fields.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_phone_fields.o ${OBJECTDIR}/src/abnf/Rule_phone_fields_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_phone_number_nomain.o: ${OBJECTDIR}/src/abnf/Rule_phone_number.o src/abnf/Rule_phone_number.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_phone_number.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_phone_number_nomain.o src/abnf/Rule_phone_number.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_phone_number.o ${OBJECTDIR}/src/abnf/Rule_phone_number_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_port_nomain.o: ${OBJECTDIR}/src/abnf/Rule_port.o src/abnf/Rule_port.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_port.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_port_nomain.o src/abnf/Rule_port.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_port.o ${OBJECTDIR}/src/abnf/Rule_port_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_previous_ssrc_attr_nomain.o: ${OBJECTDIR}/src/abnf/Rule_previous_ssrc_attr.o src/abnf/Rule_previous_ssrc_attr.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_previous_ssrc_attr.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_previous_ssrc_attr_nomain.o src/abnf/Rule_previous_ssrc_attr.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_previous_ssrc_attr.o ${OBJECTDIR}/src/abnf/Rule_previous_ssrc_attr_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_priority_nomain.o: ${OBJECTDIR}/src/abnf/Rule_priority.o src/abnf/Rule_priority.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_priority.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_priority_nomain.o src/abnf/Rule_priority.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_priority.o ${OBJECTDIR}/src/abnf/Rule_priority_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_prompt_key_type_nomain.o: ${OBJECTDIR}/src/abnf/Rule_prompt_key_type.o src/abnf/Rule_prompt_key_type.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_prompt_key_type.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_prompt_key_type_nomain.o src/abnf/Rule_prompt_key_type.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_prompt_key_type.o ${OBJECTDIR}/src/abnf/Rule_prompt_key_type_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_proto_nomain.o: ${OBJECTDIR}/src/abnf/Rule_proto.o src/abnf/Rule_proto.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_proto.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_proto_nomain.o src/abnf/Rule_proto.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_proto.o ${OBJECTDIR}/src/abnf/Rule_proto_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_proto_version_nomain.o: ${OBJECTDIR}/src/abnf/Rule_proto_version.o src/abnf/Rule_proto_version.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_proto_version.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_proto_version_nomain.o src/abnf/Rule_proto_version.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_proto_version.o ${OBJECTDIR}/src/abnf/Rule_proto_version_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_qcontent_nomain.o: ${OBJECTDIR}/src/abnf/Rule_qcontent.o src/abnf/Rule_qcontent.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_qcontent.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_qcontent_nomain.o src/abnf/Rule_qcontent.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_qcontent.o ${OBJECTDIR}/src/abnf/Rule_qcontent_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_qtext_nomain.o: ${OBJECTDIR}/src/abnf/Rule_qtext.o src/abnf/Rule_qtext.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_qtext.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_qtext_nomain.o src/abnf/Rule_qtext.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_qtext.o ${OBJECTDIR}/src/abnf/Rule_qtext_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_query_nomain.o: ${OBJECTDIR}/src/abnf/Rule_query.o src/abnf/Rule_query.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_query.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_query_nomain.o src/abnf/Rule_query.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_query.o ${OBJECTDIR}/src/abnf/Rule_query_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_quoted_pair_nomain.o: ${OBJECTDIR}/src/abnf/Rule_quoted_pair.o src/abnf/Rule_quoted_pair.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_quoted_pair.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_quoted_pair_nomain.o src/abnf/Rule_quoted_pair.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_quoted_pair.o ${OBJECTDIR}/src/abnf/Rule_quoted_pair_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_quoted_string_nomain.o: ${OBJECTDIR}/src/abnf/Rule_quoted_string.o src/abnf/Rule_quoted_string.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_quoted_string.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_quoted_string_nomain.o src/abnf/Rule_quoted_string.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_quoted_string.o ${OBJECTDIR}/src/abnf/Rule_quoted_string_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_rate_nomain.o: ${OBJECTDIR}/src/abnf/Rule_rate.o src/abnf/Rule_rate.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_rate.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_rate_nomain.o src/abnf/Rule_rate.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_rate.o ${OBJECTDIR}/src/abnf/Rule_rate_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_reg_name_nomain.o: ${OBJECTDIR}/src/abnf/Rule_reg_name.o src/abnf/Rule_reg_name.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_reg_name.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_reg_name_nomain.o src/abnf/Rule_reg_name.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_reg_name.o ${OBJECTDIR}/src/abnf/Rule_reg_name_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_rel_addr_nomain.o: ${OBJECTDIR}/src/abnf/Rule_rel_addr.o src/abnf/Rule_rel_addr.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_rel_addr.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_rel_addr_nomain.o src/abnf/Rule_rel_addr.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_rel_addr.o ${OBJECTDIR}/src/abnf/Rule_rel_addr_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_rel_port_nomain.o: ${OBJECTDIR}/src/abnf/Rule_rel_port.o src/abnf/Rule_rel_port.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_rel_port.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_rel_port_nomain.o src/abnf/Rule_rel_port.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_rel_port.o ${OBJECTDIR}/src/abnf/Rule_rel_port_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_relative_part_nomain.o: ${OBJECTDIR}/src/abnf/Rule_relative_part.o src/abnf/Rule_relative_part.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_relative_part.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_relative_part_nomain.o src/abnf/Rule_relative_part.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_relative_part.o ${OBJECTDIR}/src/abnf/Rule_relative_part_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_relative_ref_nomain.o: ${OBJECTDIR}/src/abnf/Rule_relative_ref.o src/abnf/Rule_relative_ref.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_relative_ref.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_relative_ref_nomain.o src/abnf/Rule_relative_ref.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_relative_ref.o ${OBJECTDIR}/src/abnf/Rule_relative_ref_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_repeat_field_nomain.o: ${OBJECTDIR}/src/abnf/Rule_repeat_field.o src/abnf/Rule_repeat_field.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_repeat_field.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_repeat_field_nomain.o src/abnf/Rule_repeat_field.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_repeat_field.o ${OBJECTDIR}/src/abnf/Rule_repeat_field_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_repeat_interval_nomain.o: ${OBJECTDIR}/src/abnf/Rule_repeat_interval.o src/abnf/Rule_repeat_interval.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_repeat_interval.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_repeat_interval_nomain.o src/abnf/Rule_repeat_interval.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_repeat_interval.o ${OBJECTDIR}/src/abnf/Rule_repeat_interval_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_reserved_nomain.o: ${OBJECTDIR}/src/abnf/Rule_reserved.o src/abnf/Rule_reserved.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_reserved.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_reserved_nomain.o src/abnf/Rule_reserved.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_reserved.o ${OBJECTDIR}/src/abnf/Rule_reserved_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_rtpmap_attr_nomain.o: ${OBJECTDIR}/src/abnf/Rule_rtpmap_attr.o src/abnf/Rule_rtpmap_attr.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_rtpmap_attr.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_rtpmap_attr_nomain.o src/abnf/Rule_rtpmap_attr.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_rtpmap_attr.o ${OBJECTDIR}/src/abnf/Rule_rtpmap_attr_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_scheme_nomain.o: ${OBJECTDIR}/src/abnf/Rule_scheme.o src/abnf/Rule_scheme.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_scheme.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_scheme_nomain.o src/abnf/Rule_scheme.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_scheme.o ${OBJECTDIR}/src/abnf/Rule_scheme_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_sctpmap_attr_nomain.o: ${OBJECTDIR}/src/abnf/Rule_sctpmap_attr.o src/abnf/Rule_sctpmap_attr.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_sctpmap_attr.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_sctpmap_attr_nomain.o src/abnf/Rule_sctpmap_attr.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_sctpmap_attr.o ${OBJECTDIR}/src/abnf/Rule_sctpmap_attr_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_sctpmap_number_nomain.o: ${OBJECTDIR}/src/abnf/Rule_sctpmap_number.o src/abnf/Rule_sctpmap_number.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_sctpmap_number.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_sctpmap_number_nomain.o src/abnf/Rule_sctpmap_number.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_sctpmap_number.o ${OBJECTDIR}/src/abnf/Rule_sctpmap_number_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_segment_nomain.o: ${OBJECTDIR}/src/abnf/Rule_segment.o src/abnf/Rule_segment.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_segment.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_segment_nomain.o src/abnf/Rule_segment.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_segment.o ${OBJECTDIR}/src/abnf/Rule_segment_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_segment_nz_nomain.o: ${OBJECTDIR}/src/abnf/Rule_segment_nz.o src/abnf/Rule_segment_nz.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_segment_nz.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_segment_nz_nomain.o src/abnf/Rule_segment_nz.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_segment_nz.o ${OBJECTDIR}/src/abnf/Rule_segment_nz_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_segment_nz_nc_nomain.o: ${OBJECTDIR}/src/abnf/Rule_segment_nz_nc.o src/abnf/Rule_segment_nz_nc.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_segment_nz_nc.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_segment_nz_nc_nomain.o src/abnf/Rule_segment_nz_nc.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_segment_nz_nc.o ${OBJECTDIR}/src/abnf/Rule_segment_nz_nc_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_sess_id_nomain.o: ${OBJECTDIR}/src/abnf/Rule_sess_id.o src/abnf/Rule_sess_id.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_sess_id.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_sess_id_nomain.o src/abnf/Rule_sess_id.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_sess_id.o ${OBJECTDIR}/src/abnf/Rule_sess_id_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_sess_version_nomain.o: ${OBJECTDIR}/src/abnf/Rule_sess_version.o src/abnf/Rule_sess_version.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_sess_version.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_sess_version_nomain.o src/abnf/Rule_sess_version.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_sess_version.o ${OBJECTDIR}/src/abnf/Rule_sess_version_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_session_description_nomain.o: ${OBJECTDIR}/src/abnf/Rule_session_description.o src/abnf/Rule_session_description.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_session_description.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_session_description_nomain.o src/abnf/Rule_session_description.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_session_description.o ${OBJECTDIR}/src/abnf/Rule_session_description_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_session_name_field_nomain.o: ${OBJECTDIR}/src/abnf/Rule_session_name_field.o src/abnf/Rule_session_name_field.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_session_name_field.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_session_name_field_nomain.o src/abnf/Rule_session_name_field.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_session_name_field.o ${OBJECTDIR}/src/abnf/Rule_session_name_field_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_session_param_nomain.o: ${OBJECTDIR}/src/abnf/Rule_session_param.o src/abnf/Rule_session_param.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_session_param.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_session_param_nomain.o src/abnf/Rule_session_param.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_session_param.o ${OBJECTDIR}/src/abnf/Rule_session_param_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_ssrc_attr_nomain.o: ${OBJECTDIR}/src/abnf/Rule_ssrc_attr.o src/abnf/Rule_ssrc_attr.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_ssrc_attr.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_ssrc_attr_nomain.o src/abnf/Rule_ssrc_attr.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_ssrc_attr.o ${OBJECTDIR}/src/abnf/Rule_ssrc_attr_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_ssrc_group_attr_nomain.o: ${OBJECTDIR}/src/abnf/Rule_ssrc_group_attr.o src/abnf/Rule_ssrc_group_attr.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_ssrc_group_attr.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_ssrc_group_attr_nomain.o src/abnf/Rule_ssrc_group_attr.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_ssrc_group_attr.o ${OBJECTDIR}/src/abnf/Rule_ssrc_group_attr_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_ssrc_group_semantics_nomain.o: ${OBJECTDIR}/src/abnf/Rule_ssrc_group_semantics.o src/abnf/Rule_ssrc_group_semantics.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_ssrc_group_semantics.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_ssrc_group_semantics_nomain.o src/abnf/Rule_ssrc_group_semantics.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_ssrc_group_semantics.o ${OBJECTDIR}/src/abnf/Rule_ssrc_group_semantics_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_ssrc_id_nomain.o: ${OBJECTDIR}/src/abnf/Rule_ssrc_id.o src/abnf/Rule_ssrc_id.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_ssrc_id.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_ssrc_id_nomain.o src/abnf/Rule_ssrc_id.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_ssrc_id.o ${OBJECTDIR}/src/abnf/Rule_ssrc_id_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_start_time_nomain.o: ${OBJECTDIR}/src/abnf/Rule_start_time.o src/abnf/Rule_start_time.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_start_time.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_start_time_nomain.o src/abnf/Rule_start_time.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_start_time.o ${OBJECTDIR}/src/abnf/Rule_start_time_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_stop_time_nomain.o: ${OBJECTDIR}/src/abnf/Rule_stop_time.o src/abnf/Rule_stop_time.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_stop_time.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_stop_time_nomain.o src/abnf/Rule_stop_time.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_stop_time.o ${OBJECTDIR}/src/abnf/Rule_stop_time_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_streams_nomain.o: ${OBJECTDIR}/src/abnf/Rule_streams.o src/abnf/Rule_streams.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_streams.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_streams_nomain.o src/abnf/Rule_streams.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_streams.o ${OBJECTDIR}/src/abnf/Rule_streams_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_sub_delims_nomain.o: ${OBJECTDIR}/src/abnf/Rule_sub_delims.o src/abnf/Rule_sub_delims.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_sub_delims.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_sub_delims_nomain.o src/abnf/Rule_sub_delims.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_sub_delims.o ${OBJECTDIR}/src/abnf/Rule_sub_delims_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_tag_nomain.o: ${OBJECTDIR}/src/abnf/Rule_tag.o src/abnf/Rule_tag.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_tag.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_tag_nomain.o src/abnf/Rule_tag.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_tag.o ${OBJECTDIR}/src/abnf/Rule_tag_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_text_nomain.o: ${OBJECTDIR}/src/abnf/Rule_text.o src/abnf/Rule_text.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_text.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_text_nomain.o src/abnf/Rule_text.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_text.o ${OBJECTDIR}/src/abnf/Rule_text_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_time_nomain.o: ${OBJECTDIR}/src/abnf/Rule_time.o src/abnf/Rule_time.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_time.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_time_nomain.o src/abnf/Rule_time.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_time.o ${OBJECTDIR}/src/abnf/Rule_time_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_time_field_nomain.o: ${OBJECTDIR}/src/abnf/Rule_time_field.o src/abnf/Rule_time_field.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_time_field.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_time_field_nomain.o src/abnf/Rule_time_field.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_time_field.o ${OBJECTDIR}/src/abnf/Rule_time_field_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_time_fields_nomain.o: ${OBJECTDIR}/src/abnf/Rule_time_fields.o src/abnf/Rule_time_fields.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_time_fields.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_time_fields_nomain.o src/abnf/Rule_time_fields.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_time_fields.o ${OBJECTDIR}/src/abnf/Rule_time_fields_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_time_repeat_field_nomain.o: ${OBJECTDIR}/src/abnf/Rule_time_repeat_field.o src/abnf/Rule_time_repeat_field.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_time_repeat_field.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_time_repeat_field_nomain.o src/abnf/Rule_time_repeat_field.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_time_repeat_field.o ${OBJECTDIR}/src/abnf/Rule_time_repeat_field_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_token_nomain.o: ${OBJECTDIR}/src/abnf/Rule_token.o src/abnf/Rule_token.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_token.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_token_nomain.o src/abnf/Rule_token.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_token.o ${OBJECTDIR}/src/abnf/Rule_token_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_transport_nomain.o: ${OBJECTDIR}/src/abnf/Rule_transport.o src/abnf/Rule_transport.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_transport.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_transport_nomain.o src/abnf/Rule_transport.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_transport.o ${OBJECTDIR}/src/abnf/Rule_transport_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_transport_extension_nomain.o: ${OBJECTDIR}/src/abnf/Rule_transport_extension.o src/abnf/Rule_transport_extension.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_transport_extension.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_transport_extension_nomain.o src/abnf/Rule_transport_extension.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_transport_extension.o ${OBJECTDIR}/src/abnf/Rule_transport_extension_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_ttl_nomain.o: ${OBJECTDIR}/src/abnf/Rule_ttl.o src/abnf/Rule_ttl.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_ttl.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_ttl_nomain.o src/abnf/Rule_ttl.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_ttl.o ${OBJECTDIR}/src/abnf/Rule_ttl_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_typed_time_nomain.o: ${OBJECTDIR}/src/abnf/Rule_typed_time.o src/abnf/Rule_typed_time.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_typed_time.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_typed_time_nomain.o src/abnf/Rule_typed_time.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_typed_time.o ${OBJECTDIR}/src/abnf/Rule_typed_time_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_unicast_address_nomain.o: ${OBJECTDIR}/src/abnf/Rule_unicast_address.o src/abnf/Rule_unicast_address.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_unicast_address.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_unicast_address_nomain.o src/abnf/Rule_unicast_address.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_unicast_address.o ${OBJECTDIR}/src/abnf/Rule_unicast_address_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_unreserved_nomain.o: ${OBJECTDIR}/src/abnf/Rule_unreserved.o src/abnf/Rule_unreserved.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_unreserved.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_unreserved_nomain.o src/abnf/Rule_unreserved.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_unreserved.o ${OBJECTDIR}/src/abnf/Rule_unreserved_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_uri_field_nomain.o: ${OBJECTDIR}/src/abnf/Rule_uri_field.o src/abnf/Rule_uri_field.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_uri_field.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_uri_field_nomain.o src/abnf/Rule_uri_field.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_uri_field.o ${OBJECTDIR}/src/abnf/Rule_uri_field_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_uri_key_type_nomain.o: ${OBJECTDIR}/src/abnf/Rule_uri_key_type.o src/abnf/Rule_uri_key_type.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_uri_key_type.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_uri_key_type_nomain.o src/abnf/Rule_uri_key_type.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_uri_key_type.o ${OBJECTDIR}/src/abnf/Rule_uri_key_type_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_userinfo_nomain.o: ${OBJECTDIR}/src/abnf/Rule_userinfo.o src/abnf/Rule_userinfo.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_userinfo.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_userinfo_nomain.o src/abnf/Rule_userinfo.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_userinfo.o ${OBJECTDIR}/src/abnf/Rule_userinfo_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_username_nomain.o: ${OBJECTDIR}/src/abnf/Rule_username.o src/abnf/Rule_username.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_username.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_username_nomain.o src/abnf/Rule_username.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_username.o ${OBJECTDIR}/src/abnf/Rule_username_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_word_nomain.o: ${OBJECTDIR}/src/abnf/Rule_word.o src/abnf/Rule_word.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_word.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_word_nomain.o src/abnf/Rule_word.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_word.o ${OBJECTDIR}/src/abnf/Rule_word_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Rule_zone_adjustments_nomain.o: ${OBJECTDIR}/src/abnf/Rule_zone_adjustments.o src/abnf/Rule_zone_adjustments.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Rule_zone_adjustments.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Rule_zone_adjustments_nomain.o src/abnf/Rule_zone_adjustments.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Rule_zone_adjustments.o ${OBJECTDIR}/src/abnf/Rule_zone_adjustments_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Terminal_NumericValue_nomain.o: ${OBJECTDIR}/src/abnf/Terminal_NumericValue.o src/abnf/Terminal_NumericValue.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Terminal_NumericValue.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Terminal_NumericValue_nomain.o src/abnf/Terminal_NumericValue.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Terminal_NumericValue.o ${OBJECTDIR}/src/abnf/Terminal_NumericValue_nomain.o;\
	fi

${OBJECTDIR}/src/abnf/Terminal_StringValue_nomain.o: ${OBJECTDIR}/src/abnf/Terminal_StringValue.o src/abnf/Terminal_StringValue.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/abnf
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/abnf/Terminal_StringValue.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/abnf/Terminal_StringValue_nomain.o src/abnf/Terminal_StringValue.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/abnf/Terminal_StringValue.o ${OBJECTDIR}/src/abnf/Terminal_StringValue_nomain.o;\
	fi

${OBJECTDIR}/src/builders/Builder_nomain.o: ${OBJECTDIR}/src/builders/Builder.o src/builders/Builder.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/builders
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/builders/Builder.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/builders/Builder_nomain.o src/builders/Builder.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/builders/Builder.o ${OBJECTDIR}/src/builders/Builder_nomain.o;\
	fi

${OBJECTDIR}/src/builders/SessionDescriptionBuilder_nomain.o: ${OBJECTDIR}/src/builders/SessionDescriptionBuilder.o src/builders/SessionDescriptionBuilder.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/builders
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/builders/SessionDescriptionBuilder.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -fPIC  -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/builders/SessionDescriptionBuilder_nomain.o src/builders/SessionDescriptionBuilder.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/builders/SessionDescriptionBuilder.o ${OBJECTDIR}/src/builders/SessionDescriptionBuilder_nomain.o;\
	fi

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
	    ${TESTDIR}/TestFiles/f1 || true; \
	else  \
	    ./${TEST} || true; \
	fi

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
