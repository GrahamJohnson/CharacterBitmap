/*
 * CharacterBitmap.cpp
 *
 *  Created on: Dec 29, 2021
 *      Author: Graham Johnson
 */

#include <Arduino.h>

// CP437 ; see https://www.ascii-codes.com/
// TODO: add #defines for 7-bit vs. 8-bit (8-bit currently commented out to save memory)
const extern uint64_t PROGMEM CHARACTER_BITMAPS_8x8[] = { //
		/*0000*/0x0000000000000000,
		/*0001*/0x7e81a581bd99817e,
		/*0002*/0x7effdbffc3e7ff7e,
		/*0003*/0x6cfefefe7c381000,
		/*0004*/0x10387cfe7c381000,
		/*0005*/0x387c38fefe7c387c,
		/*0006*/0x1010387cfe7c387c,
		/*0007*/0x0000183c3c180000,
		/*0008*/0xffffe7c3c3e7ffff,
		/*0009*/0x003c664242663c00,
		/*000a*/0xffc399bdbd99c3ff,
		/*000b*/0x0f070f7dcccccc78,
		/*000c*/0x3c6666663c187e18,
		/*000d*/0x3f333f303070f0e0,
		/*000e*/0x7f637f636367e6c0,
		/*000f*/0x995a3ce7e73c5a99,
		/*0010*/0x80e0f8fef8e08000,
		/*0011*/0x020e3efe3e0e0200,
		/*0012*/0x183c7e18187e3c18,
		/*0013*/0x6666666666006600,
		/*0014*/0x7fdbdb7b1b1b1b00,
		/*0015*/0x3e63386c6c38cc78,
		/*0016*/0x000000007e7e7e00,
		/*0017*/0x183c7e187e3c18ff,
		/*0018*/0x183c7e1818181800,
		/*0019*/0x181818187e3c1800,
		/*001a*/0x00180cfe0c180000,
		/*001b*/0x003060fe60300000,
		/*001c*/0x0000c0c0c0fe0000,
		/*001d*/0x002466ff66240000,
		/*001e*/0x00183c7effff0000,
		/*001f*/0x00ffff7e3c180000,
		/*0020*/0x0000000000000000,
		/*0021*/0x3078783030003000,
		/*0022*/0x6c6c6c0000000000,
		/*0023*/0x6c6cfe6cfe6c6c00,
		/*0024*/0x307cc0780cf83000,
		/*0025*/0x00c6cc183066c600,
		/*0026*/0x386c3876dccc7600,
		/*0027*/0x6060c00000000000,
		/*0028*/0x1830606060301800,
		/*0029*/0x6030181818306000,
		/*002a*/0x00663cff3c660000,
		/*002b*/0x003030fc30300000,
		/*002c*/0x0000000000303060,
		/*002d*/0x000000fc00000000,
		/*002e*/0x0000000000303000,
		/*002f*/0x060c183060c08000,
		/*0030*/0x7cc6cedef6e67c00,
		/*0031*/0x307030303030fc00,
		/*0032*/0x78cc0c3860ccfc00,
		/*0033*/0x78cc0c380ccc7800,
		/*0034*/0x1c3c6cccfe0c1e00,
		/*0035*/0xfcc0f80c0ccc7800,
		/*0036*/0x3860c0f8cccc7800,
		/*0037*/0xfccc0c1830303000,
		/*0038*/0x78cccc78cccc7800,
		/*0039*/0x78cccc7c0c187000,
		/*003a*/0x0030300000303000,
		/*003b*/0x0030300000303060,
		/*003c*/0x183060c060301800,
		/*003d*/0x0000fc0000fc0000,
		/*003e*/0x6030180c18306000,
		/*003f*/0x78cc0c1830003000,
		/*0040*/0x7cc6dededec07800,
		/*0041*/0x3078ccccfccccc00,
		/*0042*/0xfc66667c6666fc00,
		/*0043*/0x3c66c0c0c0663c00,
		/*0044*/0xf86c6666666cf800,
		/*0045*/0xfe6268786862fe00,
		/*0046*/0xfe6268786860f000,
		/*0047*/0x3c66c0c0ce663e00,
		/*0048*/0xccccccfccccccc00,
		/*0049*/0x7830303030307800,
		/*004a*/0x1e0c0c0ccccc7800,
		/*004b*/0xe6666c786c66e600,
		/*004c*/0xf06060606266fe00,
		/*004d*/0xc6eefefed6c6c600,
		/*004e*/0xc6e6f6decec6c600,
		/*004f*/0x386cc6c6c66c3800,
		/*0050*/0xfc66667c6060f000,
		/*0051*/0x78ccccccdc781c00,
		/*0052*/0xfc66667c6c66e600,
		/*0053*/0x78cce0701ccc7800,
		/*0054*/0xfcb4303030307800,
		/*0055*/0xccccccccccccfc00,
		/*0056*/0xcccccccccc783000,
		/*0057*/0xc6c6c6d6feeec600,
		/*0058*/0xc6c66c38386cc600,
		/*0059*/0xcccccc7830307800,
		/*005a*/0xfec68c183266fe00,
		/*005b*/0x7860606060607800,
		/*005c*/0xc06030180c060200,
		/*005d*/0x7818181818187800,
		/*005e*/0x10386cc600000000,
		/*005f*/0x00000000000000ff,
		/*0060*/0x3030180000000000,
		/*0061*/0x0000780c7ccc7600,
		/*0062*/0xe060607c6666dc00,
		/*0063*/0x000078ccc0cc7800,
		/*0064*/0x1c0c0c7ccccc7600,
		/*0065*/0x000078ccfcc07800,
		/*0066*/0x386c60f06060f000,
		/*0067*/0x000076cccc7c0cf8,
		/*0068*/0xe0606c766666e600,
		/*0069*/0x3000703030307800,
		/*006a*/0x0c000c0c0ccccc78,
		/*006b*/0xe060666c786ce600,
		/*006c*/0x7030303030307800,
		/*006d*/0x0000ccfefed6c600,
		/*006e*/0x0000f8cccccccc00,
		/*006f*/0x000078cccccc7800,
		/*0070*/0x0000dc66667c60f0,
		/*0071*/0x000076cccc7c0c1e,
		/*0072*/0x0000dc766660f000,
		/*0073*/0x00007cc0780cf800,
		/*0074*/0x10307c3030341800,
		/*0075*/0x0000cccccccc7600,
		/*0076*/0x0000cccccc783000,
		/*0077*/0x0000c6d6fefe6c00,
		/*0078*/0x0000c66c386cc600,
		/*0079*/0x0000cccccc7c0cf8,
		/*007a*/0x0000fc983064fc00,
		/*007b*/0x1c3030e030301c00,
		/*007c*/0x1818180018181800,
		/*007d*/0xe030301c3030e000,
		/*007e*/0x76dc000000000000,
		/*007f*/0x0010386cc6c6fe00 };
//		/*0080*/0x78ccc0cc78180c78,
//		/*0081*/0x00cc00cccccc7e00,
//		/*0082*/0x1c0078ccfcc07800,
//		/*0083*/0x7ec33c063e663f00,
//		/*0084*/0xcc00780c7ccc7e00,
//		/*0085*/0xe000780c7ccc7e00,
//		/*0086*/0x3030780c7ccc7e00,
//		/*0087*/0x000078c0c0780c38,
//		/*0088*/0x7ec33c667e603c00,
//		/*0089*/0xcc0078ccfcc07800,
//		/*008a*/0xe00078ccfcc07800,
//		/*008b*/0xcc00703030307800,
//		/*008c*/0x7cc6381818183c00,
//		/*008d*/0xe000703030307800,
//		/*008e*/0xc6386cc6fec6c600,
//		/*008f*/0x30300078ccfccc00,
//		/*0090*/0x1c00fc607860fc00,
//		/*0091*/0x00007f0c7fcc7f00,
//		/*0092*/0x3e6cccfeccccce00,
//		/*0093*/0x78cc0078cccc7800,
//		/*0094*/0x00cc0078cccc7800,
//		/*0095*/0x00e00078cccc7800,
//		/*0096*/0x78cc00cccccc7e00,
//		/*0097*/0x00e000cccccc7e00,
//		/*0098*/0x00cc00cccc7c0cf8,
//		/*0099*/0xc3183c66663c1800,
//		/*009a*/0xcc00cccccccc7800,
//		/*009b*/0x18187ec0c07e1818,
//		/*009c*/0x386c64f060e6fc00,
//		/*009d*/0xcccc78fc30fc3030,
//		/*009e*/0xf8ccccfac6cfc6c7,
//		/*009f*/0x0e1b183c1818d870,
//		/*00a0*/0x1c00780c7ccc7e00,
//		/*00a1*/0x3800703030307800,
//		/*00a2*/0x001c0078cccc7800,
//		/*00a3*/0x001c00cccccc7e00,
//		/*00a4*/0x00f800f8cccccc00,
//		/*00a5*/0xfc00ccecfcdccc00,
//		/*00a6*/0x3c6c6c3e007e0000,
//		/*00a7*/0x386c6c38007c0000,
//		/*00a8*/0x30003060c0cc7800,
//		/*00a9*/0x000000fcc0c00000,
//		/*00aa*/0x000000fc0c0c0000,
//		/*00ab*/0xc3c6ccde3366cc0f,
//		/*00ac*/0xc3c6ccdb376fcf03,
//		/*00ad*/0x1818001818181800,
//		/*00ae*/0x003366cc66330000,
//		/*00af*/0x00cc663366cc0000,
//		/*00b0*/0x2288228822882288,
//		/*00b1*/0x55aa55aa55aa55aa,
//		/*00b2*/0xdb77dbeedb77dbee,
//		/*00b3*/0x1818181818181818,
//		/*00b4*/0x18181818f8181818,
//		/*00b5*/0x1818f818f8181818,
//		/*00b6*/0x36363636f6363636,
//		/*00b7*/0x00000000fe363636,
//		/*00b8*/0x0000f818f8181818,
//		/*00b9*/0x3636f606f6363636,
//		/*00ba*/0x3636363636363636,
//		/*00bb*/0x0000fe06f6363636,
//		/*00bc*/0x3636f606fe000000,
//		/*00bd*/0x36363636fe000000,
//		/*00be*/0x1818f818f8000000,
//		/*00bf*/0x00000000f8181818,
//		/*00c0*/0x181818181f000000,
//		/*00c1*/0x18181818ff000000,
//		/*00c2*/0x00000000ff181818,
//		/*00c3*/0x181818181f181818,
//		/*00c4*/0x00000000ff000000,
//		/*00c5*/0x18181818ff181818,
//		/*00c6*/0x18181f181f181818,
//		/*00c7*/0x3636363637363636,
//		/*00c8*/0x363637303f000000,
//		/*00c9*/0x00003f3037363636,
//		/*00ca*/0x3636f700ff000000,
//		/*00cb*/0x0000ff00f7363636,
//		/*00cc*/0x3636373037363636,
//		/*00cd*/0x0000ff00ff000000,
//		/*00ce*/0x3636f700f7363636,
//		/*00cf*/0x1818ff00ff000000,
//		/*00d0*/0x36363636ff000000,
//		/*00d1*/0x0000ff00ff181818,
//		/*00d2*/0x00000000ff363636,
//		/*00d3*/0x363636363f000000,
//		/*00d4*/0x18181f181f000000,
//		/*00d5*/0x00001f181f181818,
//		/*00d6*/0x000000003f363636,
//		/*00d7*/0x36363636ff363636,
//		/*00d8*/0x1818ff18ff181818,
//		/*00d9*/0x18181818f8000000,
//		/*00da*/0x000000001f181818,
//		/*00db*/0xffffffffffffffff,
//		/*00dc*/0x00000000ffffffff,
//		/*00dd*/0xf0f0f0f0f0f0f0f0,
//		/*00de*/0x0f0f0f0f0f0f0f0f,
//		/*00df*/0xffffffff00000000,
//		/*00e0*/0x000076dcc8dc7600,
//		/*00e1*/0x0078ccf8ccf8c0c0,
//		/*00e2*/0x00fcccc0c0c0c000,
//		/*00e3*/0x00fe6c6c6c6c6c00,
//		/*00e4*/0xfccc603060ccfc00,
//		/*00e5*/0x00007ed8d8d87000,
//		/*00e6*/0x00666666667c60c0,
//		/*00e7*/0x0076dc1818181800,
//		/*00e8*/0xfc3078cccc7830fc,
//		/*00e9*/0x386cc6fec66c3800,
//		/*00ea*/0x386cc6c66c6cee00,
//		/*00eb*/0x1c30187ccccc7800,
//		/*00ec*/0x00007edbdb7e0000,
//		/*00ed*/0x060c7edbdb7e60c0,
//		/*00ee*/0x3860c0f8c0603800,
//		/*00ef*/0x78cccccccccccc00,
//		/*00f0*/0x00fc00fc00fc0000,
//		/*00f1*/0x3030fc303000fc00,
//		/*00f2*/0x603018306000fc00,
//		/*00f3*/0x183060301800fc00,
//		/*00f4*/0x0e1b1b1818181818,
//		/*00f5*/0x1818181818d8d870,
//		/*00f6*/0x303000fc00303000,
//		/*00f7*/0x0076dc0076dc0000,
//		/*00f8*/0x386c6c3800000000,
//		/*00f9*/0x0000001818000000,
//		/*00fa*/0x0000000018000000,
//		/*00fb*/0x0f0c0c0cec6c3c1c,
//		/*00fc*/0x786c6c6c6c000000,
//		/*00fd*/0x7018306078000000,
//		/*00fe*/0x00003c3c3c3c0000,
//		/*00ff*/0x0000000000000000 };

uint64_t getCharacterBitmap(char c) {
	uint64_t result;
	memcpy_P(&result, (void*) &CHARACTER_BITMAPS_8x8[c], sizeof(uint64_t));
	return result;
}
