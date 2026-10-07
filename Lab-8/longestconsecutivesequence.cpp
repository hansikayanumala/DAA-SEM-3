#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr[] = {100, 4, 200, 1, 3, 2};
    int n = 6;

    unordered_set<int> s;

    for (int i = 0; i < n; i++) {
        s.insert(arr[i]);
    }

    int longest = 0;

    for (int i = 0; i < n; i++) {
        int num = arr[i];

        if (s.find(num - 1) == s.end()) {
            int current = num;
            int count = 1;

            while (s.find(current + 1) != s.end()) {
                current++;
                count++;
            }

            if (count > longest)
                longest = count;
        }
    }

    cout << "Length = " << longest;

    return 0;
}