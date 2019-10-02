

#include<stdio.h>
#include<stdint.h>


int main(void)
{

	int age = 0;

	printf("Enter your age here :");
	scanf("%d",&age);

	if(age < 18){
		printf("Sorry ! you are not eligible to vote\n");
	}else{
		printf("Congrats ! you are eligible to vote\n");
	}


	printf("Press enter key to exit this application");

    while(getchar() != '\n')
    {
    	//just read the input buffer and do nothing
    }
    getchar();

}

