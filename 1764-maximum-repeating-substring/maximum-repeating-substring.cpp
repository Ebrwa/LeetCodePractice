class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int maxCount = 0;
        int n = sequence.size(), m = word.size();
        for (int i = 0; i + m <= n; ++i) {
            int count = 0;
            while (i + (count + 1) * m <= n &&
                   sequence.substr(i + count * m, m) == word) {
                ++count;
          }
         maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};
