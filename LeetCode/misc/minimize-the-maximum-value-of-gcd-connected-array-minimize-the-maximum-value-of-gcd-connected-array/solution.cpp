class Solution {
public:
    long long minimumMaxValue(int n, int index, int value) {
        if (value == 1) return -1;
        long long p = value;
        for (long long i = 2; i * i <= value; i++){
            if (value % i ==0) {
                p = i;
                break;
            }
        }
        if(index > (value-p)/2){
            return -1;
        }
        long long r = n - 1 - index;
        if (r == 0) return value;
        return value + p + 2 * (r-1);
    }
};
