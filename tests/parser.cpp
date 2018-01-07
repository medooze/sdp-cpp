/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   parser.cpp
 * Author: Sergio
 *
 * Created on 7 de enero de 2018, 16:06
 */

#include "SessionDescription.h"
#include "SCTPMapAttribute.h"
#include <iostream>

using namespace sdp;

void test1()
{
	SessionDescription sdp;
	auto origin = std::make_shared<Origin>("-", 0L, 0L, "IN", "IP4", "127.0.0.1");
	sdp.setOrigin(origin);
	sdp.setSessionName("test");
	sdp.addMedia(std::make_shared<MediaDescription>("aduio", 0, "UDP/AVP"));
	auto cloned = sdp.clone();

	std::cout << sdp.toString();
	std::cout << cloned->toString();

	origin->setSessId(1);

	std::cout << sdp.toString();
	std::cout << cloned->toString();

}

void test2()
{
	auto sdp = SessionDescription::parse("v=0\r\n"
		"o=- 3803220250780278427 2 IN IP4 127.0.0.1\r\n"
		"s=-\r\n"
		"t=0 0\r\n"
		"a=msid-semantic: WMS\r\n"
		"m=application 50895 DTLS/SCTP 5000\r\n"
		"a=crypto:1 AES_CM_128_HMAC_SHA1_80 inline:CoKH4lo5t34SYU0pqeJGwes2gJCEWKFmLUv/q0sN|2^48\r\n"
		"a=sctpmap:5000 webrtc-datachannel 1024\r\n");

	auto datachannel = sdp->getMedias().front();
	auto sctpmap = datachannel->getAttribute<SCTPMapAttribute>("sctpmap");
	std::cout << sctpmap->toString();
}

int main(int argc, char** argv)
{
	std::cout << "%SUITE_STARTING% parser" << std::endl;
	std::cout << "%SUITE_STARTED%" << std::endl;

	std::cout << "%TEST_STARTED% test1 (parser)" << std::endl;
	test1();
	std::cout << "%TEST_FINISHED% time=0 test1 (parser)" << std::endl;

	std::cout << "%TEST_STARTED% test2 (parser)\n" << std::endl;
	test2();
	std::cout << "%TEST_FINISHED% time=0 test2 (parser)" << std::endl;

	std::cout << "%SUITE_FINISHED% time=0" << std::endl;

	return (EXIT_SUCCESS);
}

