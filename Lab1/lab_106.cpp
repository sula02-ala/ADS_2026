#include <iostream>
#include <string>
using namespace std;

string makeString(string s) {
    string result = "";

    for (char c : s) {
        if (c == '#') {
            if (!result.empty()) {
                result.pop_back();
            }
        }
        else {
            result += c;
        }
    }

    return result;
}

int main() {
    string s1, s2;

    cin >> s1 >> s2;

    s1 = makeString(s1);
    s2 = makeString(s2);

    if (s1 == s2) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}