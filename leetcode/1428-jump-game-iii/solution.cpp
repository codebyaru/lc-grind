class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        if(start<0 || start>=arr.size() || arr[start]<0) return false;
    if(arr[start]==0) return true;
    int jump = arr[start];
    arr[start]=-jump; //so that we dont revisit
    return canReach(arr,start+jump) || canReach(arr,start-jump);
    }
};
