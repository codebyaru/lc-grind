class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size(); 
        if(n==1) return 0;
        if(arr[0]==arr[n-1]) return 1;
        unordered_map<int, vector<int>> mp;

        for(int i=0;i<n;i++){
            mp[arr[i]].push_back(i);
        }

        vector<int> vis(n,0);

        queue<pair<int,int>> q;

        q.push({0,0});
        vis[0] = 1;

        while(!q.empty()){

            int idx = q.front().first;
            int steps = q.front().second;
            q.pop();

            if(idx == n-1) return steps;

            // i+1
            if(idx+1 < n && !vis[idx+1]){
                vis[idx+1] = 1;
                q.push({idx+1,steps+1});
            }

            // i-1
            if(idx-1 >= 0 && !vis[idx-1]){
                vis[idx-1] = 1;
                q.push({idx-1,steps+1});
            }

            // same value jump
            for(int j=0;j<mp[arr[idx]].size();j++){

                int next = mp[arr[idx]][j];

                if(!vis[next]){
                    vis[next] = 1;
                    q.push({next,steps+1});
                }
            }

            // important optimization
            mp[arr[idx]].clear();
        }

        return -1;
    }
};
