
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
void sumOfEvenDiffOfOdd(int *arr)
{
    int iret=0,isum=0,idiff=0;
 for(int icnt=0;icnt<isize;icnt++)
    {
       if(arr[icnt]%2==0)
            isum=isum+arr[icnt];
        else
        {   if(idiff>arr[icnt])
                idiff=idiff-arr[icnt];
            else
                idiff=arr[icnt]-idiff;
        }
    }
    iret=isum-idiff;
    printf("%d - %d = %d \n",isum,idiff,iret);

}

int main()
{
   int *arr= accept();
   sumOfEvenDiffOfOdd(arr);
    return 0;
}