class Solution
{
public:
    bool isPalindrome(string s)
    {
        bool final = true;
        int i = 0, j = s.size() - 1;
        while (i < j)
        {
            while (i < s.size() && !isalnum(s[i]))
                i++;
            while (j >= 0 && !isalnum(s[j]))
                j--;
            if (i >= j)
                break;
            if (tolower(s[i]) != tolower(s[j]))
                return false;
            i++;
            j--;
        }
        return true;
    }
};

// https://leetcode.com/problems/valid-palindrome/submissions/916630855/