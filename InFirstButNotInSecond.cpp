

/*

Given two arrays A and B contains integers of size N and M, the task is to find numbers which are present in the first array, but not present in the second array.

Example 1:

Input: N = 6, M = 5
A[] = {1, 2, 3, 4, 5, 10}
B[] = {2, 3, 1, 0, 5}
Output: 4 10
Explanation: 4 and 10 are present in 
first array, but not in second array.
Example 2:

Input: N = 5, M = 5
A[] = {4, 3, 5, 9, 11}
B[] = {4, 9, 3, 11, 10}
Output: 5  
Explanation: Second array does not 
contain element 5.

Your Task:
This is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function findMissing() that takes array A, array B, integer N, and integer M  as parameters and returns an array that contains the missing elements and the order of the elements should be the same as they are in array A.

 

Expected Time Complexity: O(N+M).
Expected Auxiliary Space: O(M).

 

Constraints:
1 ≤ N, M ≤ 106
-106 ≤ A[i], B[i] ≤ 106
*/
#include<bits/stdc++.h> 

class Solution{
	
	
	public:

	vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	    // Your code goes here
	    vector<long long> res;
	    map<long long,int> count ;
	     for(int i = 0; i < M; i++){
	        count[B[i]]++;
	    }
	    for(int i = 0; i < N; i++){
	        if(count[A[i]] == 0)
	          res.push_back(A[i]); 
	    }
	    return res;
	} 
};
