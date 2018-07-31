#ifndef _SDP_IMPL_INFORMATION_BUILDER_H_
#define _SDP_IMPL_INFORMATION_BUILDER_H_

#include "Builder.h"
#include "../include/Information.h"

class InformationBuilder :
	public Builder
{
public:
	virtual void* visit(Rule_information_field* rule) override 
	{
		//Create new session name
		Information* info = new Information();
		//visit it
		std::string text = rule->rules[2]->spelling;
		//Set it
		info->setText(text);
		//Return it
		return info;
	}
};

#endif
