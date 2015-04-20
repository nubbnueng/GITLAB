/////////////////////////
//                     //
//Programming by NUBB.1//
//                     //
/////////////////////////

#include <stdio.h>

int main()
{
    int i,Cnumber,Ccredit[10];
    float gradesum,creditsum;
    char Cname[10][7],Cgrade[10],key;


    do
    {
        gradesum=0.0;
        creditsum=0.0;

        //input
        printf("\nHow many courses? ");
        scanf("%d",&Cnumber);
        for(i=0;i<Cnumber;i++){
            do
            {
                printf("Enter course name, credits, and grade for course #%d: ",i+1);
                scanf("%s %d %c",&Cname[i],&Ccredit[i],&Cgrade[i]);
                if(Cgrade[i]!='A' && Cgrade[i]!='B' && Cgrade[i]!='C' && Cgrade[i]!='D' && Cgrade[i]!='F' && Cgrade[i]!='S')
                {
                    printf("Invalid Grade %c. Allowed values are A, B, C, D, F, S. Try Again.\n",Cgrade[i]);
                }
            }while(Cgrade[i]!='A' && Cgrade[i]!='B' && Cgrade[i]!='C' && Cgrade[i]!='D' && Cgrade[i]!='F' && Cgrade[i]!='S');
         }

         //Process
         for(i=0;i<Cnumber;i++){
             if(Cgrade[i]=='A') gradesum+=(4.0*Ccredit[i]);
             else if(Cgrade[i]=='B') gradesum+=(3.0*Ccredit[i]);
             else if(Cgrade[i]=='C') gradesum+=(2.0*Ccredit[i]);
             else if(Cgrade[i]=='D') gradesum+=(1.0*Ccredit[i]);
             else if(Cgrade[i]=='F') gradesum+=(0.0*Ccredit[i]);

             creditsum+=Ccredit[i];
         }

         //Output
         printf("\nYour Transcript for this semester:\n");
         printf("----------------------------------\n");
         printf("   #  COURSE    CREDITS   GRADE\n");
         for(i=0;i<Cnumber;i++)
         {
             printf("   %d  %s    %7d   %5c\n",i+1,Cname[i],Ccredit[i],Cgrade[i]);
         }
         printf("----------------------------------\n");
         printf("SEMESTER GPA: %.2f\n",gradesum/creditsum);
         printf("----------------------------------\n");

         //Continue?
         do
         {
             printf("\nDo you wish to continue (Y/N)? ");
             scanf(" %c",&key);
             if(key=='N'){
                 printf("Bye.");
                 break;
             }
             else if(key!='Y' && key!='N')
             {
                 printf("Invalid answer %c. Enter only Y or N.",key);
             }
         }while(key!='Y' && key!='N');
    }while(key=='Y');


return 0;
}
