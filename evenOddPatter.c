
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

void displayN(int *arr)
{
          
    for(int icnt=0;icnt<isize;icnt++)
    {
        
        if(arr[icnt]%2==0)
            printf("* *");
        else
        {   int icnt1=1;
            while (icnt1<=arr[icnt])
            {
                printf("# ");
                icnt1++;
            }
            
        }
        printf("\n");
   
    }
    
}
int main()
{
   int *arr= accept();
   
   displayN(arr);
    return 0;
}