#include<stdio.h>
#include<stdlib.h>
int isize=0;
int frequency(int *arr,int ielement)
{
    int icnt=0;
    for(int i=0;i<isize;i++)
        {
        if(ielement==arr[i])        
            icnt++;
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
     

    }
    int ielement=0;
    printf("enter an element to be searched :\n");
    scanf("%d",&ielement);
    iret=frequency(ptr,ielement);
    if(iret==0)
        printf("element not found\n");
    else
        printf("frequency of %d is %d\n",ielement,iret);
   
    return 0;
}