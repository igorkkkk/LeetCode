bool isPerfectSquare(int num) {
    long int start = 1;
    long int end = num;
    while (start<=end){
        long int mid = (start+end)/2;
        if (mid*mid == num)
            return true;
        else if (mid*mid < num)
            start =mid+1;
        else
            end=mid-1;
    }
    return false;
}