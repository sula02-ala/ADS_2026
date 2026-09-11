#include <iostream>
#include <deque>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        deque<int> deck;

        for (int i = N; i >= 1; i--) {
            deck.push_front(i);

            for (int j = 0; j < i; j++) {
                deck.push_front(deck.back());
                deck.pop_back();
            }
        }

        for (int x : deck) {
            cout << x << " ";
        }

        cout << "\n";
    }

    return 0;
}