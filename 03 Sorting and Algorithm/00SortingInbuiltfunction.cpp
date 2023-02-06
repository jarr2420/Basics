#include <iostream>
#include <string>
#include <vector>
#include <algorithm> //including header file having inbuit function
using namespace std;
int main()
{
    int arr[] = {5, 4, 3, 2, 1, 3, 5, 6, 7, 8, 23, 25, 42, 245, 65};
    int n = sizeof(arr) / sizeof(int);
    sort(arr, arr + n); // faster than inertion and bubble and selection sort
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
    reverse(arr, arr + n);   //for reversing the array
    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}