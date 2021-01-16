//leetcode 70. Climbing Stairs
//You are climbing a staircase. It takes n steps to reach the top.

//Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
/*
Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
 

Constraints:

1 <= n <= 45
*/


int climbStairs(int n){
       unsigned  int ans = 2, f1 = 1, f2 = 2;
        for(int i = 2; i < n; ++i){
            ans = f1 + f2;
            f1 = f2;
            f2 = ans;
        }
        return (n == 1) ? 1 : ans;
}   
