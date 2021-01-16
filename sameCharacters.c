/*
C++ Corresponding position in the two strings that hold exactly the same characters. 
Given two string of equal length i.e s1 and s2, you need to find how many time the corresponding position in two strings hold exactly the same characters and if a string contains any uppercase character convert that into lowercase and then find the count.   

Input:
The First line of the input contains an integer T denoting the number of test cases. For each test case, there are two strings input s1 and s2 of equal length.

Output:
For each test case, the output is an integer value displaying the number of times characters are same at the corresponding position.

Constraints:
1<=T<=100
The string should contain only alphabets.

Example:
Input:
3
choice chancE
geek Gang
life Tech
Output:
4
1
0
*/
#include<iostream>
using namespace std;
#include<cstring>
// Function to get maximum occuring 
// character in given string str
int maxChar(char* str1,char *str2)
{
    int max=0;
    
    for(int icnt=0;icnt<strlen(str1);icnt++)
    {
     if(str1[icnt]>='A' && str1[icnt]<='Z')
        str1[icnt]=tolower(str1[icnt]);
     if(str2[icnt]>='A' && str2[icnt]<='Z')
        str2[icnt]=tolower(str2[icnt]);
     
     if(str1[icnt]==str2[icnt])
            max++;   
    }
        
    return max;
    // Your code here
}

int main()
 {
     int t=0;
     char str1[100]={'\0'},str2[100]={'\0'};
     scanf("%d",&t);
     getchar();
     while(t!=0)
     {
        scanf("%s%s",str1,str2);
        int ret=maxChar(str1,str2);
        printf("%d\n",ret);
        t--;
     }
	//code
	return 0;
}
