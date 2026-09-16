#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of characters: ";
    cin >> n;

    char ch[20];
    int freq[20];

    for (int i = 0; i < n; i++) {
        cin >> ch[i] >> freq[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (freq[i] > freq[j]) {
                swap(freq[i], freq[j]);
                swap(ch[i], ch[j]);
            }
        }
    }

    cout << "\nCharacters in increasing frequency:\n";

    for (int i = 0; i < n; i++) {
        cout << ch[i] << " : " << freq[i] << endl;
    }

    return 0;
}
