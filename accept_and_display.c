
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

void display(int *arr)
{

 for(int icnt=0;icnt<isize;icnt++)
    {
        printf("arr[%d]--->%d \n",icnt,arr[icnt]);
      //  scanf("%d",(arr+icnt));

    }

}
int main()
{
   int *arr= accept();
   display(arr);
    return 0;
}