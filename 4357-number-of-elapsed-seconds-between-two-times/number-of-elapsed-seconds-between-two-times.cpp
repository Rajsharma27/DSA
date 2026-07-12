class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int h1, m1, s1;
        int h2, m2, s2;
        char c;

        stringstream ss1(startTime);
        ss1 >> h1 >> c >> m1 >> c >> s1;

        stringstream ss2(endTime);
        ss2 >> h2 >> c >> m2 >> c >> s2;

        int start = h1 * 3600 + m1 * 60 + s1;
        int end = h2 * 3600 + m2 * 60 + s2;

        return end - start; 
    }
};