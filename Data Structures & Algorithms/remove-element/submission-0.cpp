class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int k=0;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(val!=nums[i]){
                nums[k]=nums[i];
                k++;
            }
        }
       
        return k;
    }
};