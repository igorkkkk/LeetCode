/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int guessNumber(int n){
	long int start = 0;
    long int end = n;
    long int mid = 0;
    while (start <= end){
        mid = (start+end)/2;
        if (guess(mid) == 0)
            return mid;
        else if (guess(mid) == 1)
            start = mid+1;
        else
            end = mid-1;
    }
    return start;
}