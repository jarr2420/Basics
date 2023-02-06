#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter : " << endl;
    cin >> n;
    int *p = new int[n];        // created a dynamic memory in heap which has ony address
    cout << "Enter : " << endl; // without having name
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    // now its our duity to delete this heap memory otherwise it will cause memory leak
    delete[] p;

    return 0;
}