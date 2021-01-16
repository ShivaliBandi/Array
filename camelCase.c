/*
Example:
Input : 
3
ckjkUUYII
HKJT
njnnk

Output : 
5
4
0

Explanation:
Testcase 1: The camel case characters present in the given string are: 'U', 'U', 'Y', 'I', 'I'.
*/

#include <stdio.h>
#include<string.h>
int camelCase(char *buffer)
{
    int isum=0;
   for(int icnt=0;icnt<strlen(buffer);icnt++)
       if(buffer[icnt]>='A' && buffer[icnt]<='Z')
        isum++;
    return isum;
}
int main() {
	//code
	int t=0,iret=0;
	char *buffer;
	scanf("%d",&t);
	while(t!=0)
	{
	    scanf("%s",buffer);
	    iret=camelCase(buffer);
	    printf("%d\n",iret);
	    t--;
	}
	return 0;
}
