
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
void max(int *arr)
{
    int imax=arr[0];
 for(int icnt=0;icnt<isize;icnt++)
    {
       if(imax<arr[icnt])
           imax=arr[icnt];
    }
    
    printf("MAX is %d \n",imax);

}

int main()
{
   int *arr= accept();
   max(arr);
    return 0;
}