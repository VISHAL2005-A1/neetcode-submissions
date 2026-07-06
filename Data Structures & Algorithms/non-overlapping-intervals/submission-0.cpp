class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        int prev = intervals[0][1];
        int count = 0;
        for (int i = 1; i < n; i++) {
            if (prev > intervals[i][0])
                
            {
                count++;
                prev = min(intervals[i][1], prev);
            }
            else {
                prev = intervals[i][1];
            }
        }
        return count;
    }
};