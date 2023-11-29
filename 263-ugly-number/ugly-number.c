int arr[3] = {2,3,5};
bool helper(int n) {
    if (n == 1)
        return true;
    if (n == 0) 
        return false;
    for( int i = 0; i < 3; ++i) {
        int div = n / arr[i];
        if(n%arr[i] == 0)
        return true && helper(div);
    }
    return false;
};

bool isUgly(int n) {
    return helper(n);
}