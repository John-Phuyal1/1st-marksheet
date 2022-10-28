#include <stdio.h>

int main()
{
    int i=0,sum=0,p,roll,n1,n2,clas;
    char name[20];

    printf("Enter the total number of student\n");
    scanf(" %d",&n1);
    for(i=1;i<=n1;i++)
    {


        printf("Enter the name of the student\n");
        scanf(" %s",name);
        printf(" Enter the roll number of student\n");
        scanf(" %d",&roll);
        printf("Enter the class of student\n");
        scanf("%d",&clas);
        printf("Enter the total number of subject\n");
        scanf(" %d",&n2);
        int sub[n2],j=0;
        for(j=0;j<n2;j++)
        {
            printf("Enter the marks of %d  subject of full marks 100.\n",j+1);
            scanf("%d",&sub[j]);
            if(sub[j]<=100&&sub[j]>=0)
            {
                sum+=sub[j];
            }
            else
            {
                printf("Again\t Enter the number between 0 --100\n");
                j=j-1;
                continue;
            }
        }
        p= sum/n2;
        printf(" **************Result ************");
        printf(" \n\n\n\n The name of the student is %s",name);
        printf(" \n class = %d",clas);
        printf(" \n roll number = %d\n",roll);
        printf(" Total number=%d ",sum);
        printf( " percentage = %d",p);
        if ( p>=90)
        {
            printf(" The grate of the student is A+");
        }
        else if ( p>=80)
        {
            printf(" The grate of the student is A");
        }
        else if ( p>=70)
        {
            printf(" The grate of the student is B+");
        }
        else if ( p>=60)
        {
            printf(" The grate of the student is B");
        }
        else if ( p>=50)
        {
            printf(" The grate of the student is C+");
        }
        else if ( p>=40)
        {
            printf(" The grate of the student is C");
        }
        else if ( p>=30)
        {
            printf(" The grate of the student is D+");
        }
        else
        {
            printf(" \nYou are fail in examanination");
        }



    }
    return 0;

}
