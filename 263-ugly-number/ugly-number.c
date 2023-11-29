int arr[3] = {2,3,5};

bool isUgly(int n) {
    if (n == 1)
        return true;
    if (n == 0) 
        return false;
    for( int i = 0; i < 3; ++i) {
        int div = n / arr[i];
        if(n%arr[i] == 0)
            return true && isUgly(div);
    }
    return false;
}