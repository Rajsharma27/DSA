#include <iostream>
using namespace std;
bool find_number(int arr[], int n, int key)
{
    if (n == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool remainingpart = find_number(arr + 1, n - 1, key);
        return remainingpart;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int key = 4;
    bool ans = find_number(arr, n, key);
    if (ans)
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not present" << endl;
    }
    return 0;
}