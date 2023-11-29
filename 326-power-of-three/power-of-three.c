bool isPowerOfThree(int n) {
    // return (n > 0) && (1162261467 % n == 0);
        double log = log10(n)/ log10(3);
        return (roundf(log) == log) && n;
}