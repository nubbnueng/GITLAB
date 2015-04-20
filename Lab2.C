/////////////////////////
//                     //
//Programming by NUBB.1//
//                     //
/////////////////////////

#include <stdio.h>
#include <string.h>

int main()
{
    int age,hour,min;
    char name[10],sex,married;

    do
    {
        printf("\nPlease enter your name (type STOP to END): ");
        scanf("%s",&name);
        if (strcmp(name,"STOP")==0)
        {
            printf("Good Bye!\n");
            break;
        }

        do
        {
            printf("Please enter your age, gender (M/F), and are you married (Y/N): ");
            scanf("%d %c %c",&age,&sex,&married);
            if ((age<1 || age>120)||(sex!='M' && sex!='F')||(married!='Y' && married!='N'))
            {
                printf("Incorrect age (1-120) or gender (M/F) or married(Y/N), try again.\n");
            }
        }
        while ((age<1 || age>120)||(sex!='M' && sex!='F')||(married!='Y' && married!='N'));
        //printf("Please enter your age, gender (M/F), and are you married (Y/N): ");
        //scanf("%d %c %c",&age,&sex,&married);

        do
        {
            printf("Enter hours (0-23) & minutes(0-59): ");
            scanf("%d %d",&hour,&min);
            if ((hour>=0 && hour<=23)&&(min>=0 && min <=59))
            {
                if(hour>=0 && hour<=11) printf("Good Morning, ");
                else if(hour>=12 && hour<=18) printf("Good Afternoon, ");
                else printf("Good Evening, ");

                if(sex=='M' && age>=15) printf("Nai ");
                else if(sex=='M' && age<15) printf("Dek Chai ");
                else if(sex=='F' && married=='Y') printf("Nang ");
                else if(sex=='F' && age>=15) printf("Nang Sao ");
                else if(sex=='F' && age<15) printf("Dek Ying ");

                printf("%s",name);
            }
            else printf("Incorrect hours (0-23) or minutes (0-59), try again.\n");
        }
        while((hour<0 || hour>23)|| (min<0 || min>59));
    }
    while(strcmp(name,"STOP")!=0);



return 0;
}
