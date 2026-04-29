#include<stdio.h>
int main()
{
    int num;
    printf("enter a number from 1 to 7 :");
    scanf("%d",&num);
 
    if(num>=0 && num<=7)
    {
        if(num==1)
        {
            printf("ohh nooo, monday again");
        }
        else if(num==2)
        {
            printf("tuesday, wow game period");
        }
        else if(num==3)
        {
        printf("wednesday,again maths class noooo");
        }
        else if(num==4)
        {
        printf("thursday,wow science class");
        }
        else if(num==5)
        {
        printf("friday,ohh one more day.. relax");
        }
        else if(num==6)
        {
        printf("saturday, tomorrow is sunday... fun");
        }
        else if(num==7)
        {
        printf("sunday, finally i can get the whole week's sleep");
        }

    }
    else
    {
        printf("sorry , enter a valid number..");
    }
return 0;
    
}