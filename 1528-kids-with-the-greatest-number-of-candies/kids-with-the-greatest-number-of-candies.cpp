class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCurrent = 0;
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] > maxCurrent) {
                maxCurrent = candies[i];
            }
        }

        vector<bool> result;
        for (int i = 0; i < candies.size(); i++) {
            int totalCandies = candies[i] + extraCandies;
            if (totalCandies >= maxCurrent) {
                result.push_back(true);
            } else {
                result.push_back(false);
            }
        }

        return result;
    }
};
