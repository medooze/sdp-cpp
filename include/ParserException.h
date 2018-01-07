#ifndef _SDP_
#define _SDP_

namespace sdp {



/**
 *
 * @author Sergio
 */
 class ParserException : 
	public org.murillo.abnf.ParserException 
{

	 ParserException(std::string reason, std::string text, int index, Stack<std::string> ruleStack) {
		super(reason, text, index, ruleStack);
	}
};

}
#endif
