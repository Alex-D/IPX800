/**************************************************************
 * HTTPPrint.h
 * Provides callback headers and resolution for user's custom
 * HTTP Application.
 * 
 * This file is automatically generated by the MPFS Utility
 * ALL MODIFICATIONS WILL BE OVERWRITTEN BY THE MPFS GENERATOR
 **************************************************************/

#ifndef __HTTPPRINT_H
#define __HTTPPRINT_H

#include "TCPIP Stack/TCPIP.h"

#if defined(STACK_USE_HTTP2_SERVER)

extern HTTP_CONN curHTTP;
extern HTTP_STUB httpStubs[MAX_HTTP_CONNECTIONS];
extern BYTE curHTTPID;

void HTTPPrint(DWORD callbackID);
void HTTPPrint_led(WORD);
void HTTPPrint_ledSelected(WORD,WORD);
void HTTPPrint_RLY1(void);
void HTTPPrint_RLY2(void);
void HTTPPrint_RLY3(void);
void HTTPPrint_RLY4(void);
void HTTPPrint_RLY5(void);
void HTTPPrint_RLY6(void);
void HTTPPrint_RLY7(void);
void HTTPPrint_RLY8(void);
void HTTPPrint_DelayOff(void);
void HTTPPrint_btn(WORD);
void HTTPPrint_analog1(void);
void HTTPPrint_analog2(void);
void HTTPPrint_time(void);
void HTTPPrint_status_ok(void);
void HTTPPrint_ddns_status(void);
void HTTPPrint_ddns_status_msg(void);
void HTTPPrint_ddns_service(WORD);
void HTTPPrint_ddns_user(void);
void HTTPPrint_ddns_pass(void);
void HTTPPrint_ddns_host(void);
void HTTPPrint_hellomsg(void);
void HTTPPrint_Fversion(void);
void HTTPPrint_user1(void);
void HTTPPrint_pass1(void);
void HTTPPrint_use_auth(void);
void HTTPPrint_config_mac(void);
void HTTPPrint_config_hostname(void);
void HTTPPrint_config_dhcpchecked(void);
void HTTPPrint_config_ip(void);
void HTTPPrint_config_gw(void);
void HTTPPrint_config_subnet(void);
void HTTPPrint_config_dns1(void);
void HTTPPrint_config_dns2(void);
void HTTPPrint_porthttp(void);
void HTTPPrint_reboot(void);
void HTTPPrint_rebootaddr(void);
void HTTPPrint_timers_ok(void);
void HTTPPrint_timer_value(WORD);
void HTTPPrint_relay(WORD,WORD);
void HTTPPrint_action(WORD,WORD);
void HTTPPrint_time_saving(void);

void HTTPPrint(DWORD callbackID)
{
	switch(callbackID)
	{
        case 0x00000000:
			HTTPIncFile((ROM BYTE*)"header.inc");
			break;
        case 0x00000001:
			HTTPIncFile((ROM BYTE*)"footer.inc");
			break;
        case 0x00000002:
			HTTPPrint_led(0);
			break;
        case 0x00000003:
			HTTPPrint_ledSelected(0,TRUE);
			break;
        case 0x00000004:
			HTTPPrint_ledSelected(0,FALSE);
			break;
        case 0x00000005:
			HTTPPrint_ledSelected(1,TRUE);
			break;
        case 0x00000006:
			HTTPPrint_ledSelected(1,FALSE);
			break;
        case 0x00000007:
			HTTPPrint_ledSelected(2,TRUE);
			break;
        case 0x00000008:
			HTTPPrint_ledSelected(2,FALSE);
			break;
        case 0x00000009:
			HTTPPrint_ledSelected(3,TRUE);
			break;
        case 0x0000000a:
			HTTPPrint_ledSelected(3,FALSE);
			break;
        case 0x0000000b:
			HTTPPrint_ledSelected(4,TRUE);
			break;
        case 0x0000000c:
			HTTPPrint_ledSelected(4,FALSE);
			break;
        case 0x0000000d:
			HTTPPrint_ledSelected(5,TRUE);
			break;
        case 0x0000000e:
			HTTPPrint_ledSelected(5,FALSE);
			break;
        case 0x0000000f:
			HTTPPrint_ledSelected(6,TRUE);
			break;
        case 0x00000010:
			HTTPPrint_ledSelected(6,FALSE);
			break;
        case 0x00000011:
			HTTPPrint_ledSelected(7,TRUE);
			break;
        case 0x00000012:
			HTTPPrint_ledSelected(7,FALSE);
			break;
        case 0x00000013:
			HTTPPrint_RLY1();
			break;
        case 0x00000014:
			HTTPPrint_RLY2();
			break;
        case 0x00000015:
			HTTPPrint_RLY3();
			break;
        case 0x00000016:
			HTTPPrint_RLY4();
			break;
        case 0x00000017:
			HTTPPrint_RLY5();
			break;
        case 0x00000018:
			HTTPPrint_RLY6();
			break;
        case 0x00000019:
			HTTPPrint_RLY7();
			break;
        case 0x0000001a:
			HTTPPrint_RLY8();
			break;
        case 0x0000001b:
			HTTPPrint_DelayOff();
			break;
        case 0x0000001c:
			HTTPPrint_led(1);
			break;
        case 0x0000001d:
			HTTPPrint_led(2);
			break;
        case 0x0000001e:
			HTTPPrint_led(3);
			break;
        case 0x0000001f:
			HTTPPrint_led(4);
			break;
        case 0x00000020:
			HTTPPrint_led(5);
			break;
        case 0x00000021:
			HTTPPrint_led(6);
			break;
        case 0x00000022:
			HTTPPrint_led(7);
			break;
        case 0x00000023:
			HTTPPrint_btn(0);
			break;
        case 0x00000024:
			HTTPPrint_btn(1);
			break;
        case 0x00000025:
			HTTPPrint_btn(2);
			break;
        case 0x00000026:
			HTTPPrint_btn(3);
			break;
        case 0x00000027:
			HTTPPrint_analog1();
			break;
        case 0x00000028:
			HTTPPrint_analog2();
			break;
        case 0x00000029:
			HTTPPrint_time();
			break;
        case 0x0000002a:
			HTTPPrint_status_ok();
			break;
        case 0x0000002b:
			HTTPPrint_ddns_status();
			break;
        case 0x0000002c:
			HTTPPrint_ddns_status_msg();
			break;
        case 0x0000002d:
			HTTPPrint_ddns_service(0);
			break;
        case 0x0000002e:
			HTTPPrint_ddns_service(1);
			break;
        case 0x0000002f:
			HTTPPrint_ddns_service(2);
			break;
        case 0x00000030:
			HTTPPrint_ddns_user();
			break;
        case 0x00000031:
			HTTPPrint_ddns_pass();
			break;
        case 0x00000032:
			HTTPPrint_ddns_host();
			break;
        case 0x00000033:
			HTTPPrint_hellomsg();
			break;
        case 0x00000034:
			HTTPPrint_Fversion();
			break;
        case 0x00000035:
			HTTPPrint_user1();
			break;
        case 0x00000036:
			HTTPPrint_pass1();
			break;
        case 0x00000037:
			HTTPPrint_use_auth();
			break;
        case 0x00000038:
			HTTPPrint_config_mac();
			break;
        case 0x00000039:
			HTTPPrint_config_hostname();
			break;
        case 0x0000003a:
			HTTPPrint_config_dhcpchecked();
			break;
        case 0x0000003b:
			HTTPPrint_config_ip();
			break;
        case 0x0000003c:
			HTTPPrint_config_gw();
			break;
        case 0x0000003d:
			HTTPPrint_config_subnet();
			break;
        case 0x0000003e:
			HTTPPrint_config_dns1();
			break;
        case 0x0000003f:
			HTTPPrint_config_dns2();
			break;
        case 0x00000040:
			HTTPPrint_porthttp();
			break;
        case 0x00000041:
			HTTPPrint_reboot();
			break;
        case 0x00000042:
			HTTPPrint_rebootaddr();
			break;
        case 0x00000043:
			HTTPPrint_timers_ok();
			break;
        case 0x00000044:
			HTTPPrint_timer_value(0);
			break;
        case 0x00000045:
			HTTPPrint_relay(0,0);
			break;
        case 0x00000046:
			HTTPPrint_relay(0,1);
			break;
        case 0x00000047:
			HTTPPrint_relay(0,2);
			break;
        case 0x00000048:
			HTTPPrint_relay(0,3);
			break;
        case 0x00000049:
			HTTPPrint_relay(0,4);
			break;
        case 0x0000004a:
			HTTPPrint_relay(0,5);
			break;
        case 0x0000004b:
			HTTPPrint_relay(0,6);
			break;
        case 0x0000004c:
			HTTPPrint_relay(0,7);
			break;
        case 0x0000004d:
			HTTPPrint_action(0,0);
			break;
        case 0x0000004e:
			HTTPPrint_action(0,1);
			break;
        case 0x0000004f:
			HTTPPrint_action(0,2);
			break;
        case 0x00000050:
			HTTPPrint_action(0,3);
			break;
        case 0x00000051:
			HTTPPrint_action(0,4);
			break;
        case 0x00000052:
			HTTPPrint_timer_value(1);
			break;
        case 0x00000053:
			HTTPPrint_relay(1,0);
			break;
        case 0x00000054:
			HTTPPrint_relay(1,1);
			break;
        case 0x00000055:
			HTTPPrint_relay(1,2);
			break;
        case 0x00000056:
			HTTPPrint_relay(1,3);
			break;
        case 0x00000057:
			HTTPPrint_relay(1,4);
			break;
        case 0x00000058:
			HTTPPrint_relay(1,5);
			break;
        case 0x00000059:
			HTTPPrint_relay(1,6);
			break;
        case 0x0000005a:
			HTTPPrint_relay(1,7);
			break;
        case 0x0000005b:
			HTTPPrint_action(1,0);
			break;
        case 0x0000005c:
			HTTPPrint_action(1,1);
			break;
        case 0x0000005d:
			HTTPPrint_action(1,2);
			break;
        case 0x0000005e:
			HTTPPrint_action(1,3);
			break;
        case 0x0000005f:
			HTTPPrint_action(1,4);
			break;
        case 0x00000060:
			HTTPPrint_timer_value(2);
			break;
        case 0x00000061:
			HTTPPrint_relay(2,0);
			break;
        case 0x00000062:
			HTTPPrint_relay(2,1);
			break;
        case 0x00000063:
			HTTPPrint_relay(2,2);
			break;
        case 0x00000064:
			HTTPPrint_relay(2,3);
			break;
        case 0x00000065:
			HTTPPrint_relay(2,4);
			break;
        case 0x00000066:
			HTTPPrint_relay(2,5);
			break;
        case 0x00000067:
			HTTPPrint_relay(2,6);
			break;
        case 0x00000068:
			HTTPPrint_relay(2,7);
			break;
        case 0x00000069:
			HTTPPrint_action(2,0);
			break;
        case 0x0000006a:
			HTTPPrint_action(2,1);
			break;
        case 0x0000006b:
			HTTPPrint_action(2,2);
			break;
        case 0x0000006c:
			HTTPPrint_action(2,3);
			break;
        case 0x0000006d:
			HTTPPrint_action(2,4);
			break;
        case 0x0000006e:
			HTTPPrint_timer_value(3);
			break;
        case 0x0000006f:
			HTTPPrint_relay(3,0);
			break;
        case 0x00000070:
			HTTPPrint_relay(3,1);
			break;
        case 0x00000071:
			HTTPPrint_relay(3,2);
			break;
        case 0x00000072:
			HTTPPrint_relay(3,3);
			break;
        case 0x00000073:
			HTTPPrint_relay(3,4);
			break;
        case 0x00000074:
			HTTPPrint_relay(3,5);
			break;
        case 0x00000075:
			HTTPPrint_relay(3,6);
			break;
        case 0x00000076:
			HTTPPrint_relay(3,7);
			break;
        case 0x00000077:
			HTTPPrint_action(3,0);
			break;
        case 0x00000078:
			HTTPPrint_action(3,1);
			break;
        case 0x00000079:
			HTTPPrint_action(3,2);
			break;
        case 0x0000007a:
			HTTPPrint_action(3,3);
			break;
        case 0x0000007b:
			HTTPPrint_action(3,4);
			break;
        case 0x0000007c:
			HTTPPrint_timer_value(4);
			break;
        case 0x0000007d:
			HTTPPrint_relay(4,0);
			break;
        case 0x0000007e:
			HTTPPrint_relay(4,1);
			break;
        case 0x0000007f:
			HTTPPrint_relay(4,2);
			break;
        case 0x00000080:
			HTTPPrint_relay(4,3);
			break;
        case 0x00000081:
			HTTPPrint_relay(4,4);
			break;
        case 0x00000082:
			HTTPPrint_relay(4,5);
			break;
        case 0x00000083:
			HTTPPrint_relay(4,6);
			break;
        case 0x00000084:
			HTTPPrint_relay(4,7);
			break;
        case 0x00000085:
			HTTPPrint_action(4,0);
			break;
        case 0x00000086:
			HTTPPrint_action(4,1);
			break;
        case 0x00000087:
			HTTPPrint_action(4,2);
			break;
        case 0x00000088:
			HTTPPrint_action(4,3);
			break;
        case 0x00000089:
			HTTPPrint_action(4,4);
			break;
        case 0x0000008a:
			HTTPPrint_timer_value(5);
			break;
        case 0x0000008b:
			HTTPPrint_relay(5,0);
			break;
        case 0x0000008c:
			HTTPPrint_relay(5,1);
			break;
        case 0x0000008d:
			HTTPPrint_relay(5,2);
			break;
        case 0x0000008e:
			HTTPPrint_relay(5,3);
			break;
        case 0x0000008f:
			HTTPPrint_relay(5,4);
			break;
        case 0x00000090:
			HTTPPrint_relay(5,5);
			break;
        case 0x00000091:
			HTTPPrint_relay(5,6);
			break;
        case 0x00000092:
			HTTPPrint_relay(5,7);
			break;
        case 0x00000093:
			HTTPPrint_action(5,0);
			break;
        case 0x00000094:
			HTTPPrint_action(5,1);
			break;
        case 0x00000095:
			HTTPPrint_action(5,2);
			break;
        case 0x00000096:
			HTTPPrint_action(5,3);
			break;
        case 0x00000097:
			HTTPPrint_action(5,4);
			break;
        case 0x00000098:
			HTTPPrint_timer_value(6);
			break;
        case 0x00000099:
			HTTPPrint_relay(6,0);
			break;
        case 0x0000009a:
			HTTPPrint_relay(6,1);
			break;
        case 0x0000009b:
			HTTPPrint_relay(6,2);
			break;
        case 0x0000009c:
			HTTPPrint_relay(6,3);
			break;
        case 0x0000009d:
			HTTPPrint_relay(6,4);
			break;
        case 0x0000009e:
			HTTPPrint_relay(6,5);
			break;
        case 0x0000009f:
			HTTPPrint_relay(6,6);
			break;
        case 0x000000a0:
			HTTPPrint_relay(6,7);
			break;
        case 0x000000a1:
			HTTPPrint_action(6,0);
			break;
        case 0x000000a2:
			HTTPPrint_action(6,1);
			break;
        case 0x000000a3:
			HTTPPrint_action(6,2);
			break;
        case 0x000000a4:
			HTTPPrint_action(6,3);
			break;
        case 0x000000a5:
			HTTPPrint_action(6,4);
			break;
        case 0x000000a6:
			HTTPPrint_timer_value(7);
			break;
        case 0x000000a7:
			HTTPPrint_relay(7,0);
			break;
        case 0x000000a8:
			HTTPPrint_relay(7,1);
			break;
        case 0x000000a9:
			HTTPPrint_relay(7,2);
			break;
        case 0x000000aa:
			HTTPPrint_relay(7,3);
			break;
        case 0x000000ab:
			HTTPPrint_relay(7,4);
			break;
        case 0x000000ac:
			HTTPPrint_relay(7,5);
			break;
        case 0x000000ad:
			HTTPPrint_relay(7,6);
			break;
        case 0x000000ae:
			HTTPPrint_relay(7,7);
			break;
        case 0x000000af:
			HTTPPrint_action(7,0);
			break;
        case 0x000000b0:
			HTTPPrint_action(7,1);
			break;
        case 0x000000b1:
			HTTPPrint_action(7,2);
			break;
        case 0x000000b2:
			HTTPPrint_action(7,3);
			break;
        case 0x000000b3:
			HTTPPrint_action(7,4);
			break;
        case 0x000000b4:
			HTTPPrint_timer_value(8);
			break;
        case 0x000000b5:
			HTTPPrint_relay(8,0);
			break;
        case 0x000000b6:
			HTTPPrint_relay(8,1);
			break;
        case 0x000000b7:
			HTTPPrint_relay(8,2);
			break;
        case 0x000000b8:
			HTTPPrint_relay(8,3);
			break;
        case 0x000000b9:
			HTTPPrint_relay(8,4);
			break;
        case 0x000000ba:
			HTTPPrint_relay(8,5);
			break;
        case 0x000000bb:
			HTTPPrint_relay(8,6);
			break;
        case 0x000000bc:
			HTTPPrint_relay(8,7);
			break;
        case 0x000000bd:
			HTTPPrint_action(8,0);
			break;
        case 0x000000be:
			HTTPPrint_action(8,1);
			break;
        case 0x000000bf:
			HTTPPrint_action(8,2);
			break;
        case 0x000000c0:
			HTTPPrint_action(8,3);
			break;
        case 0x000000c1:
			HTTPPrint_action(8,4);
			break;
        case 0x000000c2:
			HTTPPrint_timer_value(9);
			break;
        case 0x000000c3:
			HTTPPrint_relay(9,0);
			break;
        case 0x000000c4:
			HTTPPrint_relay(9,1);
			break;
        case 0x000000c5:
			HTTPPrint_relay(9,2);
			break;
        case 0x000000c6:
			HTTPPrint_relay(9,3);
			break;
        case 0x000000c7:
			HTTPPrint_relay(9,4);
			break;
        case 0x000000c8:
			HTTPPrint_relay(9,5);
			break;
        case 0x000000c9:
			HTTPPrint_relay(9,6);
			break;
        case 0x000000ca:
			HTTPPrint_relay(9,7);
			break;
        case 0x000000cb:
			HTTPPrint_action(9,0);
			break;
        case 0x000000cc:
			HTTPPrint_action(9,1);
			break;
        case 0x000000cd:
			HTTPPrint_action(9,2);
			break;
        case 0x000000ce:
			HTTPPrint_action(9,3);
			break;
        case 0x000000cf:
			HTTPPrint_action(9,4);
			break;
        case 0x000000d0:
			HTTPPrint_timer_value(10);
			break;
        case 0x000000d1:
			HTTPPrint_relay(10,0);
			break;
        case 0x000000d2:
			HTTPPrint_relay(10,1);
			break;
        case 0x000000d3:
			HTTPPrint_relay(10,2);
			break;
        case 0x000000d4:
			HTTPPrint_relay(10,3);
			break;
        case 0x000000d5:
			HTTPPrint_relay(10,4);
			break;
        case 0x000000d6:
			HTTPPrint_relay(10,5);
			break;
        case 0x000000d7:
			HTTPPrint_relay(10,6);
			break;
        case 0x000000d8:
			HTTPPrint_relay(10,7);
			break;
        case 0x000000d9:
			HTTPPrint_action(10,0);
			break;
        case 0x000000da:
			HTTPPrint_action(10,1);
			break;
        case 0x000000db:
			HTTPPrint_action(10,2);
			break;
        case 0x000000dc:
			HTTPPrint_action(10,3);
			break;
        case 0x000000dd:
			HTTPPrint_action(10,4);
			break;
        case 0x000000de:
			HTTPPrint_timer_value(11);
			break;
        case 0x000000df:
			HTTPPrint_relay(11,0);
			break;
        case 0x000000e0:
			HTTPPrint_relay(11,1);
			break;
        case 0x000000e1:
			HTTPPrint_relay(11,2);
			break;
        case 0x000000e2:
			HTTPPrint_relay(11,3);
			break;
        case 0x000000e3:
			HTTPPrint_relay(11,4);
			break;
        case 0x000000e4:
			HTTPPrint_relay(11,5);
			break;
        case 0x000000e5:
			HTTPPrint_relay(11,6);
			break;
        case 0x000000e6:
			HTTPPrint_relay(11,7);
			break;
        case 0x000000e7:
			HTTPPrint_action(11,0);
			break;
        case 0x000000e8:
			HTTPPrint_action(11,1);
			break;
        case 0x000000e9:
			HTTPPrint_action(11,2);
			break;
        case 0x000000ea:
			HTTPPrint_action(11,3);
			break;
        case 0x000000eb:
			HTTPPrint_action(11,4);
			break;
        case 0x000000ec:
			HTTPPrint_timer_value(12);
			break;
        case 0x000000ed:
			HTTPPrint_relay(12,0);
			break;
        case 0x000000ee:
			HTTPPrint_relay(12,1);
			break;
        case 0x000000ef:
			HTTPPrint_relay(12,2);
			break;
        case 0x000000f0:
			HTTPPrint_relay(12,3);
			break;
        case 0x000000f1:
			HTTPPrint_relay(12,4);
			break;
        case 0x000000f2:
			HTTPPrint_relay(12,5);
			break;
        case 0x000000f3:
			HTTPPrint_relay(12,6);
			break;
        case 0x000000f4:
			HTTPPrint_relay(12,7);
			break;
        case 0x000000f5:
			HTTPPrint_action(12,0);
			break;
        case 0x000000f6:
			HTTPPrint_action(12,1);
			break;
        case 0x000000f7:
			HTTPPrint_action(12,2);
			break;
        case 0x000000f8:
			HTTPPrint_action(12,3);
			break;
        case 0x000000f9:
			HTTPPrint_action(12,4);
			break;
        case 0x000000fa:
			HTTPPrint_timer_value(13);
			break;
        case 0x000000fb:
			HTTPPrint_relay(13,0);
			break;
        case 0x000000fc:
			HTTPPrint_relay(13,1);
			break;
        case 0x000000fd:
			HTTPPrint_relay(13,2);
			break;
        case 0x000000fe:
			HTTPPrint_relay(13,3);
			break;
        case 0x000000ff:
			HTTPPrint_relay(13,4);
			break;
        case 0x00000100:
			HTTPPrint_relay(13,5);
			break;
        case 0x00000101:
			HTTPPrint_relay(13,6);
			break;
        case 0x00000102:
			HTTPPrint_relay(13,7);
			break;
        case 0x00000103:
			HTTPPrint_action(13,0);
			break;
        case 0x00000104:
			HTTPPrint_action(13,1);
			break;
        case 0x00000105:
			HTTPPrint_action(13,2);
			break;
        case 0x00000106:
			HTTPPrint_action(13,3);
			break;
        case 0x00000107:
			HTTPPrint_action(13,4);
			break;
        case 0x00000108:
			HTTPPrint_timer_value(14);
			break;
        case 0x00000109:
			HTTPPrint_relay(14,0);
			break;
        case 0x0000010a:
			HTTPPrint_relay(14,1);
			break;
        case 0x0000010b:
			HTTPPrint_relay(14,2);
			break;
        case 0x0000010c:
			HTTPPrint_relay(14,3);
			break;
        case 0x0000010d:
			HTTPPrint_relay(14,4);
			break;
        case 0x0000010e:
			HTTPPrint_relay(14,5);
			break;
        case 0x0000010f:
			HTTPPrint_relay(14,6);
			break;
        case 0x00000110:
			HTTPPrint_relay(14,7);
			break;
        case 0x00000111:
			HTTPPrint_action(14,0);
			break;
        case 0x00000112:
			HTTPPrint_action(14,1);
			break;
        case 0x00000113:
			HTTPPrint_action(14,2);
			break;
        case 0x00000114:
			HTTPPrint_action(14,3);
			break;
        case 0x00000115:
			HTTPPrint_action(14,4);
			break;
        case 0x00000116:
			HTTPPrint_timer_value(15);
			break;
        case 0x00000117:
			HTTPPrint_relay(15,0);
			break;
        case 0x00000118:
			HTTPPrint_relay(15,1);
			break;
        case 0x00000119:
			HTTPPrint_relay(15,2);
			break;
        case 0x0000011a:
			HTTPPrint_relay(15,3);
			break;
        case 0x0000011b:
			HTTPPrint_relay(15,4);
			break;
        case 0x0000011c:
			HTTPPrint_relay(15,5);
			break;
        case 0x0000011d:
			HTTPPrint_relay(15,6);
			break;
        case 0x0000011e:
			HTTPPrint_relay(15,7);
			break;
        case 0x0000011f:
			HTTPPrint_action(15,0);
			break;
        case 0x00000120:
			HTTPPrint_action(15,1);
			break;
        case 0x00000121:
			HTTPPrint_action(15,2);
			break;
        case 0x00000122:
			HTTPPrint_action(15,3);
			break;
        case 0x00000123:
			HTTPPrint_action(15,4);
			break;
        case 0x00000124:
			HTTPPrint_time_saving();
			break;
		default:
			// Output notification for undefined values
			TCPPutROMArray(sktHTTP, (ROM BYTE*)"!DEF", 4);
	}

	return;
}

void HTTPPrint_(void)
{
	TCPPut(sktHTTP, '~');
	return;
}

#endif

#endif