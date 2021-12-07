#include <stdio.h>

// A calculator built with C
// github: hmtcelik

int main(){
    int choice=0;
    double first_num=0;
    double sec_num=0;
    double result=0;

    printf("====================================\nWelcome!\n====================================\n");

    while(1)
    {
        printf("Which Operation You Want To Do:\n-For Addition--> 1\n-For Subtraction--> 2\n-For Multiplication--> 3\n-For Division--> 4\n-For Exit The App--> -1\n");
        scanf("%d",&choice);
        if (choice==-1)
        {
            break;
        }
        else
        {
            printf("First Number:\n");
            scanf("%lf", &first_num);

            printf("Second Number:\n");
            scanf("%lf", &sec_num);

            if (choice==1)
            {
                result=first_num+sec_num;
                printf("\nResult:%lf\n",result);
            }
            else if (choice==2)
            {
                result=first_num-sec_num;
                printf("\nResult:%lf\n",result);        
            }
            else if (choice==3)
            {
                result=first_num*sec_num;
                printf("\nResult:%lf\n",result);        
            }
            else if (choice==4)
            {
                if (sec_num==0)
                {
                    printf("The denominator can't be 0\n");
                    printf("---------------------------\n");
                    continue;
                }
                else
                {
                    result=first_num/sec_num;
                    printf("\nResult:%lf\n",result);    
                }    
            }
            else
            {
                printf("Please enter a valid number\n");
                printf("---------------------------\n");
                continue;

            }
            
            printf("---------------------------\n");
        }
    }
    
    return 0;

}
    

