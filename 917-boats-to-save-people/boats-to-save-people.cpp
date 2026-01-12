class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int boats = 0;
        int i = 0;
        int j = people.size()-1;
        sort(people.begin(),people.end());

        while(i<=j){
            int sum = people[i] + people[j];
            if(sum<=limit){
                boats++;
                i++;
                j--;
            }
            else{
                boats++;
                j--;
            }
        }
        return boats;
    }
};