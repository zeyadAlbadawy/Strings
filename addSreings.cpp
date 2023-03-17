class Solution
{
public:
    string addStrings(string num1, string num2)
    {

        int n1 = num1.size() - 1;
        int n2 = num2.size() - 1;
        int rem = 0;
        string res;

        while (n1 >= 0 || n2 >= 0)
        {
            if (n1 < 0)
            {
                res.push_back(((num2[n2] - 48 + rem) % 10) + 48);
                rem = (num2[n2] - 48 + rem) / 10;
                n2--;
            }
            else if (n2 < 0)
            {
                res.push_back(((num1[n1] - 48 + rem) % 10) + 48);
                rem = (num1[n1] - 48 + rem) / 10;
                n1--;
            }
            else
            {
                res.push_back(((num1[n1] - 48 + num2[n2] - 48 + rem) % 10) + 48);
                rem = (num1[n1] - 48 + num2[n2] - 48 + rem) / 10;
                n1--;
                n2--;
            }
        }

        if (rem)
            res.push_back(rem + 48);

        reverse(res.begin(), res.end());
        return res;
    }
};

// https://leetcode.com/problems/add-strings/submissions/916836672/