#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool if_palindrome (string& str);

int main()
{
    string text1 = "Was it a car or a cat I saw?";

    string text2 = "Amore, Roma.";

   if (if_palindrome(text1))
       {
           cout << "The phrase is a palindrome. " << endl;
       }
    else
        cout << "The phrase is not a palindrome. " << endl;

    return 0;
}

bool if_palindrome (string& str)
{
    str.erase(remove(str.begin(), str.end(), ' '), str.end());

    transform(str.begin(), str.end(), str.begin(), ::toupper);

    string temp = str;

    int n = str.length();

     for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);

    if (temp == str)
        return true;

    return false;
}