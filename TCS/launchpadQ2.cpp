#include <bits/stdc++.h>
using namespace std;
unordered_map<char, int> countVowels(string s)
{
    unordered_map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'A')
        {
            mp['a']++;
        }
        else if (s[i] == 'e' || s[i] == 'E')
        {
            mp['e']++;
        }
        else if (s[i] == 'i' || s[i] == 'I')
        {
            mp['i']++;
        }
        else if (s[i] == 'o' || s[i] == 'O')
        {
            mp['o']++;
        }
        else if (s[i] == 'u' || s[i] == 'U')
        {
            mp['u']++;
        }
    }
    if (mp.empty())
    {
        cout << "No vowels found.";
    }
    else
    {
        return mp;
    }
    // for(auto it : mp){
    //     cout <<  "'" << it.first << "'" << ": " << it.second<< endl;
    // }
    return mp;
}
int main()
{
    system("cls");
    unordered_map<char, int> ans = countVowels("Good Morning All");
    for (auto it : ans)
    {
        cout << it.second;
    }
    return 0;
}
/*
Question 1 :
Define a function as given below.

countVowels: This function will take as input a string and find the frequency of occurrence each vowel in the string and return as a dictionary having :frequency of occurrence as the key:value pair . In case no vowels found in the input string , return None.

Note:
1. The search should be case insensitive. That is O and o will be considered as o.
2. In the dictionary , vowels should be considered in the lower case.

Define the main section for the following:

1. Read a string to be passed as argument to the method countVowels

2. Call the function countVowels by passing the string read in point #1 as argument.

3. Print the dictionary returned by the function countVowels . If the function returns None , print “ No vowels found.” Excluding the quotes.



You can use/refer to the below sample input and output to verify your solution using Test against Custom input option.
Check the sample input and output below.

Sample Input 1:
For example, if the input string is “Good Morning All “, then the input should be read/given as follows:
Good Morning All

And the output for the above set of input will be:

{'o': 3, 'i': 1, 'a': 1}

Sample Input 2:   
SWQRTY PLKJHG

And the output for the above set of input will be

No vowels found.
*/