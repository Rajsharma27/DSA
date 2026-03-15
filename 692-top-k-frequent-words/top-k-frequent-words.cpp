class Solution {
public:
    struct Compare {
    bool operator() (pair<int, string> a, pair<int, string> b) {
        if(a.first == b.first)
            return a.second > b.second;
        else
            return a.first < b.first;
    }
};
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int>mp;
        for(auto i:words) mp[i]++;

        priority_queue<pair<int, string>, vector<pair<int, string>>, Compare> q;
        for(auto p : mp)
            q.push({p.second, p.first});
        
        vector<string> ans;
        while(k--) {
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};