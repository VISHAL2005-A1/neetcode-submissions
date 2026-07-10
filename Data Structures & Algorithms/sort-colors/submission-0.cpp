class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> freq(3, 0);

        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        int index = 0;
        for (int i = 0; i < freq.size(); i++) {
            while (freq[i] > 0) {
                nums[index] = i;
                index++;
                freq[i]--;
            }
        }
    }
};