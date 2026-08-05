#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n], temp[n];
	cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter k: ";
    cin >> k;
    k = k % n;
    for (int i = 0; i < n; i++)
        temp[(i + k) % n] = arr[i];
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
    cout << "Rotated array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
