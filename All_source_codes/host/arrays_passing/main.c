


#include<stdio.h>
#include<stdint.h>

void array_display(uint8_t const *const pArray, uint32_t nItmes);

int main(void)
{
	uint8_t someData[10] = {0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff};

	for(uint32_t i = 0 ; i < 10 ; i++)
	{
		someData[i] = i;
	}

	uint32_t nItems = sizeof(someData) / sizeof(uint8_t);

	array_display(&someData[2],nItems-2);

	return 0;
}


void array_display(uint8_t const *const pArray, uint32_t nItmes)
{
	//lets display the contents of the received array
	for(uint32_t i = 0 ; i < nItmes ; i++)
	{
		printf("%x\t",pArray[i]);
	}

}
