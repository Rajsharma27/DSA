class Solution {
  public:
    void solve(int start, string out, int n, vector<int>& v)
    {
        if (n == 0)
        {
            v.push_back(stoi(out));
            return;
        }

        for (int i = start; i <= 9; i++)
        {
            // Avoid leading zero
            if (out == "" && i == 0) continue;

            solve(i + 1, out + to_string(i), n - 1, v);
        }
    }

    vector<int> increasingNumbers(int n) {
        vector<int> v;

        // Special case
        if (n == 1) {
            for (int i = 0; i <= 9; i++)
                v.push_back(i);
            return v;
        }

        solve(1, "", n, v);
        return v;
    }
};