class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        string ans = "";
        if(rows==1){
            return encodedText;
        }
        int cols = encodedText.size()/rows;
        
        for(int col=0;col<cols;col++){
            int i = 0;
            int j = col;
            while (i < rows && j < cols) {
                ans += encodedText[i * cols + j];
                i++;
                j++;
            }
        }

        while (!ans.empty() && ans.back() == ' ') {
            ans.pop_back();
        }
        return ans;
    }
};