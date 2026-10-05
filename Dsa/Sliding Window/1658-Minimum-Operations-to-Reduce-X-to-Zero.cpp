class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int totalSum = 0;
        for(auto i: nums){
            totalSum+= i;
        }

        int sum = 0;
        int count = -1;
        int j=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];

             while(sum > totalSum-x && i>=j){
                sum -= nums[j];
                j++;
            }

            if(sum == totalSum -x){
                count = max(count, i-j+1);
            }

        }

        if(count==-1){ return -1;} 
        return nums.size() -count; 

    }
};