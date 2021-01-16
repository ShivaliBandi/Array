#include<stdio.h>
#include<stdlib.h>
int isize=0;
int lastOcc(int *arr,int ielement)
{
    int icnt=0;
    for( icnt=isize-1;icnt>(-1);icnt--)
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
     

    }
    int ielement=0;
    printf("enter an element to be searched :\n");
    scanf("%d",&ielement);
    iret=lastOcc(ptr,ielement);
    if(iret==-1)
        printf("element not found\n");
    else
        printf("las occurance  of %d is %d\n",ielement,iret+1);
   
    return 0;
}