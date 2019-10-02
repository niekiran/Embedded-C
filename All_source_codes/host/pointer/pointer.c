
#include<stdio.h>

/*
	1. Create a char type variable and initialize it to value 100
	2. Print the address of the above variable.
	3. Create a pointer variable and store the address of the above variable
	4. Perform read operation on the pointer variable to fetch 1 byte of data from the pointer
	5. Print the data obtained from the read operation on the pointer.
	6. Perform write operation on the pointer to store the value 65
	7. Print the value of the variable defined in step 1
*/

int main(void)
{

	char data = 100;
	printf("Value of data is : %d\n",data);
	printf("Address of the variable data is : %p\n", &data);

	//Create a pointer variable and store the address of "data" variable
	char* pAddress = &data;

	char value = *pAddress;
	printf("read value is : %d\n",value);

	*pAddress = 65;
	printf("Value of data is : %d\n",data);



	return 0;
}
