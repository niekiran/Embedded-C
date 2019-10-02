

#include<stdio.h>
#include<stdint.h>

long long int  g_data = 0xFFFEABCD11112345;

int main(void)
{

	 int *pAddress = (int*)&g_data;


	printf("value of pAddress %p\n",pAddress);
	printf("Value at address %p is %x\n", pAddress, *pAddress);

	pAddress = pAddress + 1;

	printf("value of pAddress %p\n",pAddress);
	printf("Value at address %p is %x", pAddress, *pAddress);



}
