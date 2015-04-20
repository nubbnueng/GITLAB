/////////////////////////
//                     //
//Programming by NUBB.1//
//                     //
/////////////////////////

#include <stdio.h>

int main()
{
    int i,number;

    do
    {
        printf("\n\nEnter number 2-19 (0 to QUIT) : ");
        scanf("%d",&number);

        if (number>=2 && number<=19) //2-19 case
        {
            printf("\nMultiplication Table for %d\n",number);
            for(i=1;i<=12;i++)
            {
                printf("%5d",i);
            }
            printf("\n--------------------------------------------------------------\n");
            for(i=1;i<=12;i++)
            {
                printf("%5d",i*number);
            }
        }
        else if (number==0) printf("Have a nice day!"); //QUIT case
        else printf("Input Error. Enter 0 to QUIT or number between 2-19."); //Error case

    }
    while(number!=0);

return 0;
}
