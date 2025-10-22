class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> vec(2*n,0);

        int i=0;

        while(i<vec.size()){
            vec[i] = nums[i%n];
            i++;
        }

        return vec;
    }
};