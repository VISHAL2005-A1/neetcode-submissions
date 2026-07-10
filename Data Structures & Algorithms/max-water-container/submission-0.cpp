class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n - 1;
        long long max_area;
        long long Max = 0;
        while (left < right) {
            // ht=min(height[left],height[right]);
            max_area = min(height[left], height[right]) * (right - left);
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }

            Max = max(Max, max_area);
        }
        return Max;
    }
};