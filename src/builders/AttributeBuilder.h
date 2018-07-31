#ifndef _SDP_IMPL_ATTRIBUTE_H_
#define _SDP_IMPL_ATTRIBUTE_H_

#include "Builder.h"
#include "BaseAttributeBuilder.h"
#include "CNameAttributeBuilder.h"
#include "CandidateAttributeBuilder.h"
#include "CryptoAttributeBuilder.h"
#include "ExtMapAttributeBuilder.h"
#include "FormatAttributeBuilder.h"
#include "FingerprintAttributeBuilder.h"
#include "GroupAttributeBuilder.h"
#include "MidAttributeBuilder.h"
#include "PreviousSSRCAttributeBuilder.h"
#include "RTPMapAttributeBuilder.h"
#include "SCTPMapAttributeBuilder.h"
#include "SSRCAttributeBuilder.h"
#include "SSRCGroupAttributeBuilder.h"
#include "../../include/Attribute.h"

using namespace sdp;
using namespace abnf;


class AttributeBuilder :
	public Builder
{
public:
	
	virtual
	void* visit(Rule_attribute_field* rule)
	{
		//Reset
		attr = NULL;
		//Generate
		Builder::visit(rule);
		//Return it
		return attr;
	}

	virtual
	void* visit(Rule_mid_attr* rule)
	{
		//Get builder
		MidAttributeBuilder builder;
		//build it
		attr = (Attribute*) builder.visit(rule);
		//Return it
		return attr;
	}

	virtual
	void* visit(Rule_group_attr* rule)
	{
		//Get builder
		GroupAttributeBuilder builder;
		//build it
		attr = (Attribute*) builder.visit(rule);
		//Return it
		return attr;
	}

	virtual
	void* visit(Rule_ssrc_attr* rule)
	{
		//Get builder
		SSRCAttributeBuilder builder;
		//build it
		attr = (Attribute*) builder.visit(rule);
		//Return it
		return attr;
	}

	virtual
	void* visit(Rule_rtpmap_attr* rule)
	{
		//Get builder
		RTPMapAttributeBuilder builder;
		//build it
		attr = (Attribute*) builder.visit(rule);
		//Return it
		return attr;
	}

	virtual
	void* visit(Rule_fmtp_attr* rule)
	{
		//Get builder
		FormatAttributeBuilder builder;
		//build it
		attr = (Attribute*) builder.visit(rule);
		//Return it
		return attr;
	}

	virtual
	void* visit(Rule_ssrc_group_attr* rule)
	{
		//Get builder
		SSRCGroupAttributeBuilder builder;
		//build it
		attr = (Attribute*) builder.visit(rule);
		//Return it
		return attr;
	}

	virtual
	void* visit(Rule_cname_attr* rule)
	{
		//Get builder
		CNameAttributeBuilder builder;
		//build it
		attr = (Attribute*) builder.visit(rule);
		//Return it
		return attr;
	}

	virtual
	void* visit(Rule_previous_ssrc_attr* rule)
	{
		//Get builder
		PreviousSSRCAttributeBuilder builder;
		//build it
		attr = (Attribute*) builder.visit(rule);
		//Return it
		return attr;
	}

	virtual
	void* visit(Rule_attribute* rule)
	{
		//Get builder
		BaseAttributeBuilder builder;
		//build it
		attr = (Attribute*) builder.visit(rule);
		//Return it
		return attr;
	}

	virtual
	void* visit(Rule_crypto_attribute* rule)
	{
		//Get builder
		CryptoAttributeBuilder builder;
		//build it
		attr = (Attribute*) builder.visit(rule);
		//Return it
		return attr;
	}

	virtual
	void* visit(Rule_candidate_attribute* rule)
	{
		//Get builder
		CandidateAttributeBuilder builder;
		//build it
		attr = (Attribute*) builder.visit(rule);
		//Return it
		return attr;
	}

	virtual
	void* visit(Rule_extmap_attribute* rule)
	{
		//Get builder
		ExtMapAttributeBuilder builder;
		//build it
		attr = (Attribute*) builder.visit(rule);
		//Return it
		return attr;
	}

	virtual
	void* visit(Rule_fingerprint_attribute* rule)
	{
		//Get builder
		FingerprintAttributeBuilder builder;
		//build it
		attr = (Attribute*) builder.visit(rule);
		//Return it
		return attr;
	}

	virtual
	void* visit(Rule_sctpmap_attr* rule)
	{
		//Get builder
		SCTPMapAttributeBuilder builder;
		//build it
		attr = (Attribute*) builder.visit(rule);
		//Return it
		return attr;
	}
	
private:
	Attribute* attr;

};

#endif
