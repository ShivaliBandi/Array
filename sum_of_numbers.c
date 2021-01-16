
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

void displaySum(int *arr)
{
    int isum=0;        
    for(int icnt=0;icnt<isize;icnt++)
    {
        isum=isum+arr[icnt];

    }
    printf("SUM IS --> %d",isum);
}
int main()
{
   int *arr= accept();
   displaySum(arr);
    return 0;
}