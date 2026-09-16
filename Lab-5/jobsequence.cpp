#include <iostream>
using namespace std;

struct Job {
    char id;
    int deadline;
    int profit;
};

int main() {
    int n;
    cout << "Enter number of jobs: ";
    cin >> n;

    Job jobs[20];

    for (int i = 0; i < n; i++) {
        cout << "Enter job id, deadline and profit: ";
        cin >> jobs[i].id >> jobs[i].deadline >> jobs[i].profit;
    }

    // Sort by profit
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (jobs[i].profit < jobs[j].profit) {
                Job temp = jobs[i];
                jobs[i] = jobs[j];
                jobs[j] = temp;
            }
        }
    }

    int slot[20] = {0};
    char result[20];
    int profit = 0;

    for (int i = 0; i < n; i++) {
        for (int j = jobs[i].deadline; j >= 1; j--) {
            if (slot[j] == 0) {
                slot[j] = 1;
                result[j] = jobs[i].id;
                profit += jobs[i].profit;
                break;
            }
        }
    }

    cout << "Job sequence: ";

    for (int i = 1; i <= n; i++) {
        if (slot[i])
            cout << result[i] << " ";
    }

    cout << "\nMaximum profit: " << profit;

    return 0;
}
