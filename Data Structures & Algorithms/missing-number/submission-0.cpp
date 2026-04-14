class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int realnumber=0;
        int ans=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];

        }
        realnumber=n*(n+1)/2;
        ans=realnumber-sum;
        return ans;
    }
};
