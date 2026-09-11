#include <iostream>
#include <deque>
using namespace std;

bool borisWins(int a, int b) {
    if (a == 0 && b == 9)
        return true;

    if (a == 9 && b == 0)
        return false;

    return a > b;
}

int main() {
    deque<int> boris;
    deque<int> nursik;

    for (int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        boris.push_back(x);
    }

    for (int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        nursik.push_back(x);
    }

    int moves = 0;

    while (!boris.empty() && !nursik.empty()) {
        int a = boris.front();
        int b = nursik.front();

        boris.pop_front();
        nursik.pop_front();

        if (borisWins(a, b)) {
            boris.push_back(a);
            boris.push_back(b);
        }
        else {
            nursik.push_back(a);
            nursik.push_back(b);
        }

        moves++;
    }

    if (boris.empty()) {
        cout << "Nursik " << moves;
    }
    else {
        cout << "Boris " << moves;
    }

    return 0;
}