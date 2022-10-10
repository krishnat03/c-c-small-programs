#include <bits/stdc++.h>
using namespace std;
// class question
// {
// public:
//     string Name;
//     string Category;
//     question(string name, string cat)
//     {
//         Name = name;
//         Category = cat;
//     }
// };
void findCostliestBrand(unordered_map<string, int> mp)
{
    int currMax = INT_MIN;
    string maxBrand;
    for (auto it : mp)
    {
        if (it.second > currMax)
        {
            currMax = it.second;
            maxBrand = it.first;
        }
    }
    cout << "Costliest Brand = " << maxBrand;
}
int main()
{
    system("cls");
    // unordered_map<string, int> mp = {{"hello", 1}, {"hello 5", 5}, {"hello 3", 3}};
    unordered_map<string, int> mp;
    int quantity;
    cout << "Enter quantity : ";
    cin >> quantity;
    string prod;
    cin >> prod;
    string arrstr[quantity];
    int arrint[quantity];
    for (int i = 0; i < quantity; i++)
    {
        cin >> arrstr[i];
        cin >> arrint[i];
        mp.insert({arrstr[i], arrint[i]});
    }
    findCostliestBrand(mp);
    return 0;
}

// Question 1 :
// Define a class Product with following attributes:
// Name – of type string
// Category – of type string
// BrandPrice – of type dictionary of brand:price (string:number) as key:value pairs
// Add the __init__ method to the class to initialize the attribute values.

// Add a method to the class as below:
// findCostliestBrand: This method will find the brand of the product having highest price from the BrandPrice of the Product and return.
// Assumption: No two brands will have same price.

// Define the main section for the following:

// 1. Create Product object as per the specification above.
// To create the Product object
// a. Read the values for attributes – Name and Category one after another.
// b. Create the BrandPrice dictionary. To create the dictionary,
// i. Read a number representing count of elements to be added to the dictionary.
// ii. Read a string and a number representing the brand and the price respectively and add to the dictionary as brand:price (key:value) pair.
// Repeat this step for the number of times taken as input in the previous step.
// Create the Product object by passing the values read in point #1.a and the dictionary created in point #1.b as argument.

// 2. Call the method findCostliestBrand of the Product object created in point #1 and store the value returned in a variable.
// 3. Print a message “Costliest Brand =” (excluding the quotes) followed by the value returned by the method findCostliestBrand in the same line.
// You can use/refer to the below sample input and output to verify your solution using Test against Custom input option.

// Sample Input description:
// The first input is the string to represent Name , second input is the string to represent the Category . Next input is the value for count of elements to be added to the dictionary, suppose n.
// Next n*2 lines of inputs are the values for n brand:price key:value pairs to be added to the dictionary.

// Check the sample input and output below.

// Sample Input 1:
// For example, to create a Product the input should be read/given as follows:
// TShirt
// Fashion
// 3
// Disney
// 400
// Champion
// 600
// Lee Cooper
// 500

// And the output for the above set of input will be:
// Costliest Brand = Champion