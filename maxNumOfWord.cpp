class Solution
{
public:
    int mostWordsFound(vector<string> &sentences)
    {
        int n = sentences.size();
        int maxNum = 0, count = 0;
        vector<int> max;
        for (int i = 0; i < n; i++)
        {
            count = 0;
            string s = sentences[i];
            for (char c : s)
            {
                if (c == ' ')
                {
                    count++;
                }
            }
            max.push_back(count + 1);
        }

        maxNum = max[0];
        for (int j = 0; j < n; j++)
        {
            if (max[j] > maxNum)
                maxNum = max[j];
        }

        return maxNum;
    }
};

// https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/submissions/916598424/