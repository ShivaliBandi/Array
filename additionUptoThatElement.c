
#include<stdlib.h>
#include<stdio.h>
int isize=0;
int *accept()
{
    int *ptr;
    printf("enter length of array");
    scanf("%d",&isize);
    ptr=(int *)malloc(isize*sizeof(int));
    for(int icnt=0;icnt<isize;icnt++)
    {
        printf("enter %d value",icnt);
        scanf("%d",&ptr[icnt]);

    }
    return ptr;


}

void SumUptoN(int *arr,int inum)
{
    int isum=0;        
    for(int icnt=0;icnt<inum;icnt++)
    {
        isum=isum+arr[icnt];

    }
    printf("SUM IS --> %d",isum);
}
int main()
{
   int *arr= accept();
   int inum=0;
   point1: 
            printf("enter a number till which u want addition\n");
            scanf("%d",&inum);

   if(inum>isize)
        goto point1;
    else    
        SumUptoN(arr,inum);
    return 0;
}