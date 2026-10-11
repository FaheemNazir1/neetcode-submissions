class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int  n =nums.size();
        map<int,int> mapping;

        for(int i=0;i<n;i++){
            int a=nums[i];
            int rem=target - a;

            if(mapping.find(rem)!=mapping.end()){
                return {mapping[rem], i};

            }
            else{
                   mapping[a] = i; 
            }
        }
        return {};
    }
};
