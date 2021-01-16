#include<stdio.h>
#include<stdlib.h>

int countDigit(int inum)
{
    int iret=0;
    while(inum!=0)
    {
        
        iret=iret+(inum%10);
        inum=inum/10;
    }
    return iret;
}

int main()
{
   int *ptr, isize=0,iret=0;
    printf("enter length of array");
    scanf("%d",&isize);
    ptr=(int *)malloc(isize*sizeof(int));
    for(int icnt=0;icnt<isize;icnt++)
    {
        printf("enter %d value",icnt);
        scanf("%d",&ptr[icnt]);
       // prime(ptr[icnt]);

    }

     for(int icnt=0;icnt<isize;icnt++)
    {
        
        iret=countDigit(ptr[icnt]);
        printf("%d ",iret);
    }
    printf("\n");
   
    return 0;
}