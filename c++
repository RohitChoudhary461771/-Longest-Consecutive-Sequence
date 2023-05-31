Example 1:

Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

Brute Approach:-

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size()<2){
            return nums.size();
        }

        sort(nums.begin(),nums.end());
        int maxi=INT_MIN;
        int prev=nums[0];
        int cnt=1;
        
        for(int i=1;i<nums.size();i++){
            if(nums[i]==prev+1){
                cnt++;
            }
            else if(nums[i]!=prev){
                cnt=1;
            }
            prev=nums[i];
            maxi=max(maxi,cnt);
        }
        maxi=max(maxi,cnt);
        return maxi;
      
    }
};
