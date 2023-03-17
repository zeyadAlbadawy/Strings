class Solution
{
public:
    string defangIPaddr(string address)
    {

        const string first = "[";
        const string second = "]";

        for (int i = 0; i < address.size(); i++)
        {
            if (address[i] == '.')
            {
                address.insert(i, first);
                ++i;
                address.insert(i + 1, second);
            }
        }

        return address;
    }
};
// https://leetcode.com/problems/defanging-an-ip-address/submissions/915680667/