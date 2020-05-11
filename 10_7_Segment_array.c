/* 	Author 		: 	L.Boaz
		Email id 	: 	laxsam89@gmail.com
		phone 		:		+91 95972 91816
		hackster	:		https://www.hackster.io/boaz */

#include<reg51.h>

// seg[15] is an array contains the character patterns from 0 to 9 and A to F
unsigned char seg[15] = {0x00,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};
unsigned int i, numbers;


void main(void)
{
	while(1)																// Run always
	{
	for(numbers=0;numbers<15;numbers++)
		{
	P2 = seg[numbers];											//	Pass the content of seg[] array for each iterations
	for(i=0;i<40000;i++);										//	Few sec time is elapsed
	}
	}
}