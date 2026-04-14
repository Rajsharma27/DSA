class Solution {
public:
    void solve(vector<int>& candidates, vector<int>& path, vector<vector<int>>& answers, int index, int target) {
        if (target == 0) {
            answers.push_back(path);
            return;
        }
        for (int i = index; i < candidates.size(); i++) {
            if (i > index && candidates[i] == candidates[i - 1]){
                 continue;
            }
            if (candidates[i] > target){
                break;
            }  
            path.push_back(candidates[i]);
            solve(candidates, path, answers, i + 1, target - candidates[i]);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> answers;
        vector<int> path;
        solve(candidates,path,answers,0,target);

        return answers;
    }
};