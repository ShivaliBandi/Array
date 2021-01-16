#include<stdio.h>
#include<stdlib.h>
int isize=0;
int linearSearch(int *arr,int ielement)
{
    int icnt=0;
    for(icnt=0;icnt<isize;icnt++)
        {
        if(ielement==arr[icnt])        
            break;
        }
        
        return icnt;
}

int main()
{
   int *ptr,iret=0;
    printf("enter length of array");
    scanf("%d",&isize);
    ptr=(int *)malloc(isize*sizeof(int));
    for(int icnt=0;icnt<isize;icnt++)
    {
        printf("enter %d value",icnt);
        scanf("%d",&ptr[icnt]);
       // prime(ptr[icnt]);

    }
    int ielmnt=0;
    printf("enter an element to b search :");
    scanf("%d",&ielmnt);
    iret=linearSearch(ptr,ielmnt);
    if(iret==isize)
        printf("element not found\n");
    else
        printf("%d\n",iret+1);
   
    return 0;
}