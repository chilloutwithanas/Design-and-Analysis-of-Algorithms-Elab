// Books price list of [195,200,175,255,105] is sorted.
// Shop manager wants to check whether book of Rs 195 is available.

#include <iostream>
using namespace std;
int main()
{
    int size, key;
    cin >> size;
    int arr[10];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cin >> key;
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            cout << "Book Available";
            break;
        }
        else
        {
            cout << "Book is not available";
            break;
        }
    }
    return 0;
}