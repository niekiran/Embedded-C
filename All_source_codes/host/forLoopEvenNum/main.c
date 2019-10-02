

#include<stdio.h>
#include<stdint.h>

void wait_for_user_input(void);


int main(void)
{


	int32_t start_num , end_num;
	uint32_t even;
	printf("Enter starting and ending numbers(give space between 2 nos):");
	scanf("%d %d",&start_num,&end_num);


	if(end_num < start_num){
		//error
		printf("ending number should be > starting number\n");
		wait_for_user_input();
		return 0;
	}


	for(printf("Even numbers are :\n"), even=0; start_num <= end_num ; start_num++ )
	{
		if( ! (start_num % 2 ) ){
			printf("%4d\t",start_num);
			even++;
		}

	}

   printf("\nTotal even numbers : %u\n",even);

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
