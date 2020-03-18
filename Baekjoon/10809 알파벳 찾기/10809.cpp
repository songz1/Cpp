#include <iostream>
#include <string>
using namespace std;

int main() {
    int alphabet[26];

    string s;
    cin >> s;

    for (int i = 0; i < 26; i++) {
        alphabet[i] = -1;
    }

    for (int i = 0; i < s.length(); i++) {
        int c = s[i] - 97;

        if (alphabet[c] == -1) {
            alphabet[c] = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        cout << alphabet[i] << " ";
    }

    return 0;
}