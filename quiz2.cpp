#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "koydin khelse polay: ";
    cin >> n;

    int score[n], sum = 0;  // Initialize sum to 0
    double avg;

    for (int i = 0; i < n; i++) {  // Loop runs from 0 to n-1
        cout << "Enter score[" << i+1 << "]: ";
        cin >> score[i];
        sum += score[i];  // Accumulate sum
    }

    avg = static_cast<double>(sum) / n;  // Calculate average
    cout << "Average: " << avg << endl;

    if (avg >= 100) {
        cout << "chorom" << endl;
    } else if (avg >= 50 && avg < 100) {  // Correct logical conditions
        cout << "Chole" << endl;
    } else if (avg >= 30 && avg < 50) {
        cout << "Cholbe na faltu" << endl;
    } else {
        cout << "ashol bengali player " << endl;
    }
}
