class Solution
{
public:
    bool isVowls(char s)
    {
        if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' || s == 'A' || s == 'E' || s == 'O' || s == 'I' || s == 'U')
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    string reverseVowels(string s)
    {
        int start = 0;
        int end = s.size() - 1;
        while (start < end)
        {

            if (!isVowls(s[start]))
            {
                start++;
            }
            else if (!isVowls(s[end]))
            {
                end--;
            }
            else
            {
                char temp = s[start];
                s[start] = s[end];
                s[end] = temp;
                start++;
                end--;
            }
        }

        return s;
    }
};

// https://leetcode.com/problems/reverse-vowels-of-a-string/submissions/915716007/