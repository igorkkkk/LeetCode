int min(int a, int b) {
    return a < b ? a : b;
};

int nthUglyNumber(int n) {
    int* dp = (int*)malloc(sizeof(int)*n);
    dp[0] = 1;

    int i2 = 0, i3 = 0, i5 = 0;
    int next2 = 0, next3 = 0, next5 = 0;
    int next = 0;
    
    for(int i = 1; i < n;++i){
        next2 = dp[i2]*2;
        next3 = dp[i3]*3;
        next5 = dp[i5]*5;

        next = min(next2, min(next3, next5));

        if(next == next2) i2++;
        if(next == next3) i3++;
        if(next == next5) i5++;
        dp[i] = next;

    }
    
    int result = dp[n - 1];
    free(dp);
    return result;
}