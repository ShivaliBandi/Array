
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
void min(int *arr)
{
    int imin=arr[isize-1];
 for(int icnt=0;icnt<isize;icnt++)
    {
       if(imin>arr[icnt])
           imin=arr[icnt];
    }
    
    printf("MIN is %d \n",imin);

}

int main()
{
   int *arr= accept();
   min(arr);
    return 0;
}