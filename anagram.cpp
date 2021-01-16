/*
Given two strings a and b consisting of lowercase characters. The task is to check whether 
two given strings are an anagram of each other or not. An anagram of a string is another string that contains 
the same characters, only the order of characters can be different. For example, “act” and “tac” are an
 anagram of each other.

Example 1:

Input:
a = geeksforgeeks, b = forgeeksgeeks
Output: YES
Explanation: Both the string have same
characters with same frequency. So, 
both are anagrams.
Example 2:

Input:
a = allergy, b = allergic
Output: NO
Explanation:Characters in both the strings
are not same, so they are not anagrams.


*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/*  Function to check if two strings are anagram
*   c, d: input string
*/
#include<cstring>
bool isAnagram(string str1, string str2){
    
    // Your code here
    int i,j,arr1[26]={0},arr2[26]={0};
    for(i=0;i<str1.length();i++)
        arr1[str1[i]-'a']++;
    for( i=0;i<str2.length();i++)
        arr2[str2[i]-'a']++;
    for( i=0,j=0;i<26 && j<26;i++,j++)
        if(arr1[i]!=arr2[j])
            break;
    if(i<26)
        return false;
    else
        return true;
}


// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;

        if(isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
  // } Driver Code Ends
