#include <bits/stdc++.h>
using namespace std;
class person
{
public:
    string name;
    string address;
    string gender;
    person(string name, string address,string gender)
    {
        name = name;
        address = address;
        gender = gender;
    }
    void countVowels(string name)
    {
        int count = 0;
        for (int i = 0; i < name.length(); i++)
        {
            if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' || name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U')
            {
                count++;
            }
        }
        cout << "Count Of Vowels in Name = " << count << endl;
    }

    void countDigits(string address)
    {
        int count = 0;
        for (int i = 0; i < address.length(); i++)
        {
            if (isdigit(address[i]))
            {
                count++;
            }
        }
        cout << "Count Of Digits in Address = " << count << endl;
    }
};
int main()
{
    system("cls");
    cout << "Enter info : ";
    string name, gender, address;
    getline(cin, name);
    getline(cin, address);
    getline(cin, gender);
    person p1(name, address, gender);
    p1.countVowels(name);
    p1.countDigits(address);
    return 0;
}
/*
Define a class Person with following attributes:

Name – of type string

Address – of type string

Gender – of type string

Add the __init__ method to the class to initialize the attribute values.



Add a method to the class as below:



countVowels: This method will count how many vowels are there in the Name of the Person and return.

Add another method to the class as below:

countDigits: This method will count how many digits are there in the Address of the Person and return.

Define the main section for the following:

Create a Person object as per the specification above.


To create the Person object, read the values for attributes – Name,Address and Age



1. Create the Person object by passing the values read in point #1 as argument .

2. Call the method countVowels of the Person object created in point #2 and store the value returned in a variable.

3. Call the method countDigits of the Person object created in point #2 and store the value returned in a variable.

4. Print a message “Count Of Vowels in Name =” (excluding the quotes) followed by the value returned by the method countVowelsin the same line.

5. Print a message “Count Of Digits in Address =” (excluding the quotes) followed by the value returned by the method countDigitsin the same line.


You can use/refer to the below sample input and output to verify your solution using Test against Custom input option.



Sample Input description:

The first input is the string to represent Name , second input is the string to represent the Address and the last input is the string to represent the gender of the Person object to be created.



Check the sample input and output below.


Sample Input 1:

For example, to create a Person the input should be read/given as follows:

Hima Das

House No 23, Lane -6, Nagaon , Assam

Female

And the output for the above set of input will be:

Count Of Vowels in Name = 3

Count Of Digits in Address = 3
*/