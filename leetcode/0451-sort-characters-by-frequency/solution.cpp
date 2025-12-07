class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>freq;
        for (auto x:s) freq[x]++;
        //to sort in decreasing order 
        priority_queue<pair<int,char>>p;

        for (auto it:freq)
        p.push(make_pair(it.second, it.first));
        
        s="";

        while (!p.empty())
        {
            char c = p.top().second;
            for (int i=0; i<p.top().first;i++)
            s.push_back(c);
            p.pop();
        }
        return s;
    }
};
