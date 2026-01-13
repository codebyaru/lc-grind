class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int ans = 0;
        int i = 0;
        int j = height.size() - 1;
            while (i < j) {
                int len = min(height[i], height[j]);
                int bre = j - i;
                area = len * bre;
                ans = max(area, ans);
                if(height[i]<height[j]) i++;
                else j--;
        }
        return ans;
    }
};
