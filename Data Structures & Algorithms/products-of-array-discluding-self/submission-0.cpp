class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n= nums.size();
    vector<int> output;
    for(int i=0;i<n;i++){
    int result=1;
        for(int j=0;j<n;j++){
            if(j==i){
                continue;
            }
            result=result*nums[j];
             
        }
        output.push_back(result);
    }
    return output;
    }
};
