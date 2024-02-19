#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int countA = 0, countB = 0;
        for (char c : s) {
            if (c == 'A') {
                countA++;
            } else {
                countB++;
            }
        }


        cout << (countA > countB ? 'A' : 'B') << endl;
    }

    return 0;
}

