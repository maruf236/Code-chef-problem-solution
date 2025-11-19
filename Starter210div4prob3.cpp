
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int m, d;
        cin >> m >> d;

        int satisfaction;
        if (m == d)
            satisfaction = m + d - 1;
        else
            satisfaction = m + d;

        cout << satisfaction << endl;
    }

    return 0;
}
