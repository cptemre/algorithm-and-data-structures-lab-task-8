#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int key = 0;
    int index = 0;
    vector<int> myList{ 7,22,9,86,4,7,13,28,7,99 };

    cout << "a) Search key - the result is the first found value equal to the key and its index: \n";
    cout << "Please enter a key to find its first index: ";
    cin >> key;
    cout << endl;

    for (int i = 0; i < myList.size(); i++)
    {
        if (key == myList.at(i))
        {
            cout << "The key you search " << key << " is found at index position " << i << endl;
            index = i;
            break;
        }
        else
        {
            if (i == myList.size() - 1 && index == 0)
            {
                cout << "The key you search " << key << " is not in our list";
            }
        }
    }

    cout << "\nb) Search for a key - the result is all the values ​​in the table corresponding to the key and theirs indexes.";
    cout << "\nPlease enter a key to find its indexes: ";
    cin >> key;
    index = 0;
    cout << endl;

    for (int i = 0; i < myList.size(); i++)
    {
        if (key == myList.at(i))
        {
            cout << "The key you search " << key << " is found at index position " << i << endl;
            index = i;
        }
        else
        {
            if (i == myList.size() - 1 && index == 0)
            {
                cout << "The key you search " << key << " is not in our list";
            }
        }
    }
    return 0;
}
