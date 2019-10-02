
#include<stdio.h>

int main(void)
{

    char c1,c2,c3,c4,c5,c6;
    printf("Enter any 6 characters of your choice \n");

    c1 = getchar();
    getchar(); //this getchar is used to clear the input buffer (\n)
    c2 = getchar();
    getchar();//this getchar is used to clear the input buffer (\n)
    c3 = getchar();
    getchar();//this getchar is used to clear the input buffer (\n)
    c4 = getchar();
    getchar();//this getchar is used to clear the input buffer (\n)
    c5 = getchar();
    getchar();//this getchar is used to clear the input buffer (\n)
    c6 = getchar();

    printf("\nASCII codes : %u,%u,%u,%u,%u,%u",c1,c2,c3,c4,c5,c6);

	printf("\nPress enter key to exit the application \n");
    while(getchar() != '\n')
    {
    	//just read the input buffer and do nothing
    }
    getchar();


}
