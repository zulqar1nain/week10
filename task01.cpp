#include <iostream>
using namespace std;
// int checkcondition(string temp, string letter);
int main()
{

    string word;
    int arrsize[5];
    int count = 0;
    for (int count = 0; count < 5; count++)
    {
        cout << "Enter word: ";
        cin >> arrsize[count];
    }
    char letter;
    cout << "Enter letter find: ";
    cin >> letter;
    // int checkcondition(temp, letter)
    // {
    string temp;
    int sum = 0;
    for (int idx = 0; idx < 5; idx++)
    {
        temp = word[idx];
        // sum = sum + checkcondition(temp, letter);
        int i = 0;
        while (temp[i] != '\0')
        {
            if (temp[i] = letter)
            {
                count = count + 1;
            }
            i++;
        }
        if (count != 0)
        {
            cout << "The letter" << letter << "  " << count;
        }
        else
        {
            cout << "The word is not found";
        }
    }
}
