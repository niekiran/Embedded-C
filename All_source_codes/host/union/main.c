

#include<stdint.h>
#include<stdio.h>

union Address
{
	uint16_t shortAddr;
	uint32_t longAddr;
};

int main(void)
{

	union Address addr;

	addr.shortAddr = 0xABCD;
	addr.longAddr = 0xEEEECCCC;

	printf("short addr = %#X\n",addr.shortAddr);
	printf("long addr = %#X\n",addr.longAddr);

	getchar();

	return 0;

}











