



#include <stdio.h>
#include <stdint.h>

uint8_t const data = 10;

int main(void)
{

	printf("Value = %u\n",data);

	uint8_t *ptr = (uint8_t*)&data; //uint8_t const *

	*ptr = 50;

	printf("Value = %u\n",data);

	getchar();
}
