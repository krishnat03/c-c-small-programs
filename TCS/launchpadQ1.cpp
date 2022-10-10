#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    string s = "Book is in the table and book is mine";
    string target = "book";
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    stringstream str(s);
    string word;
    int count = 0;
    while (str >> word)
    {
        if (word == target)
        {
            count++;
        }
    }
    if (count == 0)
        cout << "Word not found.";
    else
        cout << count;
    return 0;
}
// Question 1 :
// Define a function as given below.

// findFrequency : Function will find the frequency of a word in a sentence ignoring cases.
// Both the word and the sentence will be taken as input from user.
// Note:
// The search word should not be a substring
// The search should be case insensitive.

// Define the main section for the following:

// 1. Read a sentence (string).

// 2. Read a word.

// 3. Call the function findFrequency by passing the string read in point #1 and #2 as arguments.

// 4. Print the value returned by the function findFrequency .
// If the function returns 0 , print “ Word not found.” Excluding the quotes.

// You can use/refer to the below sample input and output to verify your solution using Test against Custom input option.
// Check the sample input and output below.

// Sample Input 1:
// For example, if the input sentence is “Book is in the table and book is mine “ and the word to be searched is book , then the input should be read/given as follows:
// Book is in the table and book is mine
// book

// And the output for the above set of input will be:

// 2

// Sample Input 2:   
// Book is in the table and book is new.
// new

// And the output for the above set of input will be

// Word not found.
// (In this case the output is “Word not found.” Because, the word new in the sentence is followed by ‘.’ without space .)