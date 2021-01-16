#include<stdio.h>
#include<stdlib.h>

void prime(int inum)
{
    int i=2;
    while(i<inum/2 && inum%i!=0)
        i++;
    if(inum==1)
        printf("%d is nor prime nor composite\n",inum);
    else if(inum==4)
        printf("%d is not prime\n",inum);
    else if(i>=inum/2)
        printf("%d is prime\n",inum);
    else
        printf("%d is not prime\n",inum);
    
    
}

int main()
{
   int *ptr;
   int isize=0;
    printf("enter length of array");
    scanf("%d",&isize);
    ptr=(int *)malloc(isize*sizeof(int));
    for(int icnt=0;icnt<isize;icnt++)
    {
        printf("enter %d value",icnt);
        scanf("%d",&ptr[icnt]);
       // prime(ptr[icnt]);

    }

     for(int icnt=0;icnt<isize;icnt++)
    {
        
        prime(ptr[icnt]);

    }
   
    return 0;
}