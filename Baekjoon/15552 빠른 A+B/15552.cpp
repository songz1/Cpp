#include <iostream>

using namespace std;

int T;
int A, B;

int main(void) {
    cin.tie(NULL);

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> A;
        cin >> B;

        cout << A + B << '\n';
    }

    return 0;
}