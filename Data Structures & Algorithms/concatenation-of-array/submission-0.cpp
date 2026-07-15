class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int len = nums.size();
        nums.resize(2 * len);
        for (int i=0 ; i<len;i++){
            nums[len+i]=nums[i];
        }
        return nums;
    }
};