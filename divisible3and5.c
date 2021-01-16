#include<stdio.h>
#include<stdlib.h>

int isize=0;
void divisible3and5(int *arr)
{
    
    for(int icnt=0;icnt<isize;icnt++)
        {
            if(arr[icnt]%5==0 && arr[icnt]%3==0)
                printf("%d is divisible by 3 and 5\n",arr[icnt]);
            else
                 printf("%d is not divisible by 3 and 5\n",arr[icnt]);
        }
        
       
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
    divisible3and5(ptr);
    
   
    return 0;
}