#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string stack = "";

    for (char c : s) {
        if (!stack.empty() && stack.back() == c) {
            stack.pop_back();
        }
        else {
            stack += c;
        }
    }

    if (stack.empty()) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}