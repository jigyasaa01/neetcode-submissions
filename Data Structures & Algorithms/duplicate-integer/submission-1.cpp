class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0, j = 1;
        int n = nums.size();
        int count = 0;
        while(i < n && j < n)
        {
            if(nums[i] != nums[j])
            {
                i++;
                j++;
            }
            else{
                count = 1;
                break;
            }
        }
        if(count == 1) return true;
        return false;
    }
};