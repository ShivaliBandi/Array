
#include<stdlib.h>
#include<stdio.h>
int isize=0;
char *accept()
{
    char *ptr;
    printf("enter length of array");
    scanf("%d",&isize);
    ptr=(char *)malloc(isize*sizeof(char));
    for(int icnt=0;icnt<isize;icnt++)
    {
        printf("enter %d value",icnt);
        getchar();
        scanf("%c",&ptr[icnt]);
        

    }
    return ptr;


}

void display(char *arr)
{

 for(int icnt=0;icnt<isize;icnt++)
    {
        printf("arr[%d]--->%c \n",icnt,arr[icnt]);
      //  scanf("%d",(arr+icnt));

    }

}
int main()
{
   char *arr= accept();
   display(arr);
    return 0;
}