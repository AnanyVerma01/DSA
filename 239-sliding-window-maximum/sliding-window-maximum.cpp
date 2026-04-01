class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> q;
        int n = nums.size();
        vector<int> res(n-k+1);

        for(int i=0;i<k;i++){
            while(!q.empty() && nums[i]>=nums[q.back()]){
                q.pop_back();
            }
            q.push_back(i);
        }

        res[0]=nums[q.front()];
        
        for(int i=1;i<n-k+1;i++){
            if(!q.empty() && q.front()<=i-1){
                q.pop_front();
            }
            while(!q.empty() && nums[i+k-1]>=nums[q.back()]){
                q.pop_back();
            }
            q.push_back(i+k-1);
            res[i] = nums[q.front()];
        }

        return res;
    }
};