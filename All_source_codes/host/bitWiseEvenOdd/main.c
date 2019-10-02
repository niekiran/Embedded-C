

#include<stdio.h>
#include<stdint.h>

void wait_for_user_input(void);


int main(void)
{
	int32_t num1;
	printf("Enter a number:");
	scanf("%d",&num1);

	if(num1 & 1){
		printf("%d is odd number\n",num1);
	}else{
		printf("%d is even number\n",num1);
	}

    wait_for_user_input();
}


void wait_for_user_input(void)
{

	printf("Press enter key to exit this application");

    while(getchar() != '\n')
    {
    	//just read the input buffer and do nothing
    }
    getchar();

}
