#include <iostream>
#include <algorithm>
#include <string>
#include <limits>
#include <cctype>

using namespace std;

int main()
{
    int choice;

    while (true)
    {
        cout << "\n=====================================\n";
        cout << "      STRING MANIPULATION TOOL\n";
        cout << "=====================================\n";
        cout << "1. Reverse String\n";
        cout << "2. Convert to Uppercase\n";
        cout << "3. Convert to Lowercase\n";
        cout << "4. Count Vowels\n";
        cout << "5. Count Words\n";
        cout << "6. Check Palindrome\n";
        cout << "7. Find String Length\n";
        cout << "8. Exit\n";
        cout << "=====================================\n";

        cout << "Enter your choice: ";

        if (!(cin >> choice))
        {
            cout << "\nInvalid input! Please enter a number between 1 and 8.\n";

            cin.clear();
            cin.ignore(1000, '\n');

            continue;
        }

        if (choice >= 1 && choice <= 8)
        {
            if (choice == 8)
            {
                cout << "\nThank you for using the program!\n";
                break;
            }
if (choice >= 1 && choice <= 3)
{
    string text;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nEnter a string: ";
    getline(cin, text);

    if (text.empty())
    {
        cout << "\nInput cannot be empty!\n";
        continue;
    }

    if (choice == 1)
    {
        reverse(text.begin(), text.end());

        cout << "\nReversed String: " << text << endl;
    }

    else if (choice == 2)
    {
        for (char &ch : text)
        {
            ch = toupper(ch);
        }

        cout << "\nUppercase String: " << text << endl;
    }

    else if (choice == 3)
    {
        for (char &ch : text)
        {
            ch = tolower(ch);
        }

        cout << "\nLowercase String: " << text << endl;
    }
}
else
{
    cout << "\nFeature will be implemented in the next commits.\n";
}
        }
        else
        {
            cout << "\nInvalid choice! Please select between 1 and 8.\n";
        }
    }

    return 0;
}