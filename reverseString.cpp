class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int i, j, temp;

        i = s.size() - 1;
        for (j = 0; j < i; j++, i--)
        {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
    }
};

// https://leetcode.com/problems/reverse-string/submissions/914926491/