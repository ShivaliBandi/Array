// Function to get maximum occuring 
// character in given string str
char getMaxOccuringChar(char* str)
{
    int count[26]={0},max=-1;
    char result='\0';
    for(int i=0;i<strlen(str);i++)
        count[str[i]-'a']++;
    for(int i=0;i<26;i++)
    {
       if(max<count[i])
       {
           max=count[i];
           result='a'+i;
       }
    }
    return result;
    // Your code here
}

