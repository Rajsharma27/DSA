class Solution {
public:
    void solve(vector<int> candidates, vector<int> path, vector<vector<int>>& answers, int index, int target){
        if(target==0){
            answers.push_back(path);
            return;
        }
        for(int i=index;i<candidates.size();i++){
            if(candidates[i] <= target){
                path.push_back(candidates[i]);
                solve(candidates,path,answers,i,target-candidates[i]);
                path.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> answers;
        vector<int> path;
        solve(candidates,path,answers,0,target);

        return answers;
    }
};