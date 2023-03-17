class Solution
{
public:
    int countSegments(string s)
    {

        int count = 0;
        stringstream ss(s);
        while (ss >> s)
        {
            count++;
        }

        return count;
    }
};

// https://leetcode.com/problems/number-of-segments-in-a-string/submissions/916593968/