class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int count = 0;
        int total = 0;
        sort(capacity.begin(), capacity.end());
        for(int i:apple) total = total+i;
        for (int j = capacity.size() - 1; j >=0; j--) {
           // if (capacity[j] <= total){ //kitna hi time barbaaaad kiyaaaa
            total = total - capacity[j];
                count++;
             if(total<=0) break;
        }
        return count;
    }
};
