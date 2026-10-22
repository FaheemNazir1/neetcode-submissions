class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
         if (nums.empty()) return 0;


        int n=nums.size();

        int count=1, maxcount=1;

        for(int i=1;i<n;i++){
                if (nums[i] == nums[i - 1]) continue;

        
            if(nums[i]==nums[i-1]+1) count++;

            
            else{
                maxcount= max(count, maxcount);
                count=1;
            }
        }
        
        return max(count, maxcount);
    }
};
