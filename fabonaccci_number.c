
//fabonacci number 
//leetcode 509
int fib(int n){
    int ans = 0, f1 = 0, f2 = 1;
        for(int i = 1; i < n; ++i){
            ans = f1 + f2;
            f1 = f2;
            f2 = ans;
        }
        return (n == 1) ? 1 : ans;
}
