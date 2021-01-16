
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

void palindrome(int n)
{
    int ireverse = 0, remainder, ioriginal;
ioriginal = n;
    while (n != 0) {
        remainder = n % 10;
        ireverse = ireverse * 10 + remainder;
        n /= 10;
    }
    if (ioriginal == ireverse)
      printf("%d ",ioriginal);

}
int main()
{
   int *arr= accept();
    for(int icnt=0;icnt<isize;icnt++)

        palindrome(arr[icnt]);
    printf("\n");
    return 0;
}