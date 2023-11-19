#include <iostream>
#include <string>
using namespace std;
string reverse(string word)
{
    int m = word.length();
    string reverse = "";
    string result = "";
    int n;
    for (int i = 0; i < m; i++)
    {
        if (word[i] != ' ')
        {
            result += word[i];
        }
        if (word[i ] == word[m - 1])
        {
            reverse = result + reverse;
        }
        else if (word[i] == ' ')
        {
            reverse = " " + result + reverse;
            result = "";
        }
    }
    return reverse;
}
main()
{
    string word;
    cout << "Enter a string: ";
    getline(cin, word);
    cout << reverse(word);
}