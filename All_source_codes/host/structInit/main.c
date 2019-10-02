


#include<stdint.h>
#include<stdio.h>

struct carModel
{
	uint8_t carSpeed;
	uint32_t carPrice;
};

int main(void)
{
	struct carModel  carBMW = {0};
	printf("Sizeof of struct carModel is %I64u\n",sizeof(struct carModel));

    getchar();

	return 0;
}









