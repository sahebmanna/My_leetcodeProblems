class Solution {
public:
    bool canJump(vector<int>& nums) {
        int intmax=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(i>intmax)
                return false;
            intmax=max(intmax,i+nums[i]);
        }
        return true;
    }
};
