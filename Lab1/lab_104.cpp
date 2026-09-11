#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    int count = 0;
    int number = 2;

    while (count < a) {
        bool prime = true;

        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                prime = false;
                break;
            }
        }

        if (prime) {
            count++;
        }

        if (count == a) {
            cout << number;
            break;
        }

        number++;
    }

    return 0;
}