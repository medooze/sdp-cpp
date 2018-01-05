#ifndef _SDP_
#define _SDP_

namespace sdp {

import java.util.Stack;

/**
 *
 * @author Sergio
 */
 class ParserException extends org.murillo.abnf.ParserException {

	 ParserException(std::string reason, std::string text, int index, Stack<std::string> ruleStack) {
		super(reason, text, index, ruleStack);
	}
};

}
#endif
