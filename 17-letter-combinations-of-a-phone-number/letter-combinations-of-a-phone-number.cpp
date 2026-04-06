class Solution {
public:
    map<char,string> mp = {{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},
        {'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
    void solve(string digits, string path, vector<string>& v, int index){

        if(index==digits.size()){
            v.push_back(path);
            return;
        }
        string letters = mp[digits[index]];
        for(char letter : letters){
            solve(digits,path+letter,v,index+1);
        }
    }
    vector<string> letterCombinations(string digits) {

        vector<string> v;
        string path;
        solve(digits,path,v,0);
        return v;
    }
};