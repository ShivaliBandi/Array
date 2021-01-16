
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
void evenGreaterThan30(int *arr)
{
    
    printf("even numbers greater then 30:\n");
 for(int icnt=0;icnt<isize;icnt++)
    {
      if(arr[icnt]%2==0 && arr[icnt]>30)
            printf("arr[%d]--->%d \n",icnt,arr[icnt]);
    }
    
    //printf("MAX is %d \n",imax);

}

int main()
{
   int *arr= accept();
   evenGreaterThan30(arr);
    return 0;
}