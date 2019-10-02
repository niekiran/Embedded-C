

#include<stdio.h>
#include<stdint.h>

void wait_for_user_input(void);


int main(void)
{

	uint32_t height;
	printf("Enter height of pyramid:");
	scanf("%d",&height);


	for(uint32_t i = 1 ; i <= height  ; i++  )
	{
		for(uint32_t j = i; j > 0 ; j--)
		{
			printf("%d  ",j);
		}
		printf("\n");
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
