
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

void displaySum(int *arr,int istart,int iend)
{
    int isum=0;        
    for(int icnt=0;icnt<isize;icnt++)
    {
        if(arr[icnt]>=istart && arr[icnt]<=iend)
            isum=isum+arr[icnt];

    }
    printf("SUM IS --> %d",isum);
}
int main()
{
   int *arr= accept();
   int istart=0,iend=0;
   printf("enter range:\n");
   scanf("%d %d",&istart,&iend);
   displaySum(arr,istart,iend);
    return 0;
}
