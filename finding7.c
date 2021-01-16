
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

void Digit7(int inum)
{
    int icnt=inum;
    while(inum!=0)
    {   if(inum%10==7)
            printf("%d ",icnt);
        inum=inum/10;
    
    }
    
}
int main()
{
   int *arr= accept();
    for(int icnt=0;icnt<isize;icnt++)

        Digit7(arr[icnt]);
    printf("\n");
    return 0;
}