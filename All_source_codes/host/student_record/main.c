
#include <stdio.h>
#include <stdint.h>
#include <string.h>

//Definition of a student record
typedef struct
{
    int rollNumber;
    char    name[100];
    char    branch[50];
    char    dob[15];
    int semister;

}STUDENT_INFO_t;


//Maximum record this program can store
int max_record=10;


//Global array of records
STUDENT_INFO_t students[10];


//function prototypes of this program
void display_menu(void);
int read_menu_code(void);
void decode_menu_code(int8_t menu_code);
void display_all_records(STUDENT_INFO_t *record, int8_t max_record);
int check_roll_number(int roll_number, STUDENT_INFO_t *record, int8_t max_record);
int add_new_record(STUDENT_INFO_t *record, int8_t max_record);
int delete_record(STUDENT_INFO_t *record, int8_t max_record);




//starting point of the application
int main()
{

    int8_t menu_code;
    int8_t app_continue = 1;

    printf("Student record management program\n");

     while(app_continue)
     {
		//1. display menu
		display_menu();

		//read the menu code
		menu_code = read_menu_code();

		if(menu_code){
			//Decode the menu code
			decode_menu_code(menu_code);
		}else{
			//end the application if menu_code = 0;
			app_continue = 0;
			printf("Exiting application\n");
		}

     }

    return 0;
}

/*
 * This function displays the menu to the user
 * Please note that 0 is the code to exit this program
 */
void display_menu(void)
{
    printf("Display all records  -->1\n");
    printf("Add new record       -->2\n");
    printf("Delete a record      -->3\n");
    printf("Exit application     -->0\n");
    printf("Enter your option here:");
}

/*
 * This function reads the menu code entered by the user and return the code
 */
int read_menu_code(void)
{
    int input;
    scanf("%d",&input);
    return input;
}

//This function decodes the menu
void decode_menu_code(int8_t menu_code)
{
    int8_t ret;

    switch(menu_code)
    {
        case 1:
        printf("Displaying all students record\n");
        display_all_records(students,max_record);
        break;
        case 2:
        printf("Add a new record\n");
        ret = add_new_record(students,max_record);
        !ret ? printf("Record add unsuccessful\n") : printf("Record added successfully\n");
        break;
        case 3:
        printf("Delete a record\n");
        ret = delete_record(students,max_record);
        ret ? printf("Record deleted successfully\n") : printf("Record not found\n");
        break;
        default:
			printf("Invalid input\n");
    }
}

/*
 * This function displays all the records so far entered by the user
 * in_param[1] : base address of the records
 * in_param[2] : maximum record number maintained by this program
 */

void display_all_records(STUDENT_INFO_t *record, int8_t max_record)
{
    int record_found = 0;
    for(int i = 0 ; i < max_record ; i++)
    {
        if( record[i].rollNumber)
        {
        	record_found = 1;
            //display the record
            printf("***********\n");
            printf("rollNumber        : %u\n",record[i].rollNumber);
            printf("studentSemister   : %u\n",record[i].semister);
            printf("studentDOB        : %s\n",record[i].dob);
            printf("studentBranch     : %s\n",record[i].branch);
            printf("studentName       : %s\n",record[i].name);
            printf("***********\n");
        }
    }

    if(! record_found)
        printf("No records found\n");

}
/*
 * This function matches the given roll_numer with the roll numbers of the records by traversing through record node one by one
 * in_param[1]: given roll number
 * in_param[2]: base address of the records
 * in_param[3]: max record number of this program
 * return : 0 for no_match , 1 for match
 */
int check_roll_number(int roll_number, STUDENT_INFO_t *record, int8_t max_record)
{

    int is_exist = 0;
    for(int i = 0 ; i < max_record ; i++)
    {
        if ( record[i].rollNumber == roll_number)
        {
            is_exist = 1;
            break;
        }
    }

    return is_exist;

}

/*
 * This function adds a new record by asking various information from the user.
 * before adding a record , function has to identify an empty node
 * Assume a node is empty , if roll number field of node is zero
 * in_param[1]: base address of the records
 * in_param[2]: max record number of this program
 * return values : 0 if node not found, 1 if node found
 */
int add_new_record(STUDENT_INFO_t *record, int8_t max_record)
{
    int add_status=0;
    int is_exist=0;
    int roll_number;
    int i;

    for( i = 0 ; i < max_record ; i++)
    {
        if( ! record[i].rollNumber)
        {

                //add the record
                printf("Enter the rollNumber : ");
                scanf("%d",&roll_number);
                is_exist = check_roll_number(roll_number,students,max_record);
                if(! is_exist)
                {
                	add_status = 1; //adding new record
                    record[i].rollNumber = roll_number;
                    printf("Enter the studentSemister   : ");
                    scanf("%d",&record[i].semister);
                    printf("Enter the DOB(mm/dd/yyyy)    : ");
                    scanf("%s",record[i].dob);
                    getchar();
                    printf("Enter the studentBranch     : ");
                    scanf("%50[^\n]s",record[i].branch);
                    getchar();
                    printf("Enter the studentName       : ");
                    scanf("%50[^\n]s",record[i].name);

                }else
                {
                    printf("roll number already exist\n");
                }

                break;
        }

    }

    if(i == max_record)
        printf("No space available\n");

    return add_status;

}


/*
 * Delete a record.
 * first ask the user to enter the roll number of the student
 * delete a node against that roll number
 * in_param[1]: base address of the records
 * in_param[2]: max record number of this program
 * return values : 0 if node not found, 1 if node found
 *
 */
int delete_record(STUDENT_INFO_t *record, int8_t max_record)
{
    int8_t delete_flag = 0;
    int roll_number;

    printf("Enter the roll number of the student:");
    scanf("%d",&roll_number);

     for(int i = 0 ; i < max_record ; i++)
    {
         if( roll_number == record[i].rollNumber)
        {
            delete_flag = 1;
            memset(&record[i],0,sizeof(STUDENT_INFO_t));
            break;
        }
    }

    return delete_flag;

}



