class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1){
            return x;
        }

        int left=0,right=x,mid;

        while(left<=right){
            mid = left + (right-left)/2;

            if(((long)mid*mid)==x) return mid;
            else if(((long)mid*mid)>x) right=mid-1;
            else left=mid+1;
        }

        return round(right);
    }
};