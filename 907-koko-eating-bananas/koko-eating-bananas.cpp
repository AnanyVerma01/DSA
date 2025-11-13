class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int left=1,right=*max_element(piles.begin(), piles.end());
        int res=right;

        while(left<=right){
            int mid = (right+left)/2;
            long long sum=0;

            for(int p:piles){
                sum+=ceil(double(p)/mid);
            }

            if(sum<=h){
                res=mid;
                right=mid-1;
            } 
            else left=mid+1;
        }

        return res;

    }
};