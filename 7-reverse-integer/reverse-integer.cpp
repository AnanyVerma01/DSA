class Solution {
public:
    int reverse(int x) {
        int n = x,temp=0; long rev=0;
        int max = INT_MAX, min = INT_MIN;

        while(n!=0){
            temp = n%10;
            rev = temp + 10*rev;
            if(rev>max || rev<min) return 0;
            n=n/10;
        }

        return rev;
    }
};