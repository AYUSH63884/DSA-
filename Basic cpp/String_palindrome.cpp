#include <iostream>
#include <string>
#include <utility>
#include <vector>
using std::string;
class Solution
{
public:
    bool isPalindrome(string s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] <= 90 && s[i] >= 65)
            {
                s[i] += 32;
            }
            else if ((s[i] > 90 && s[i] < 97) || s[i] < 65)
            {
                s.erase(i);
            }
        }

        int left = 0;
        int right = s.length() - 1;
        while (left < right)
        {
            if (s[left] != s[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

int main()
{
    string s = {"Ayu uya"};
    Solution sol;
    bool result = sol.isPalindrome(s);
    std::cout << (result ? "Palindrome" : "Not Palindrome") << std::endl;
    return 0;
}