#include <algorithm>
#include <iostream>

using namespace std;
int arr[10001];
int main() {
    int N, temp;

    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> temp;
        arr[temp]++;
    }

    for (int i = 1; i < 10001; i++) {
        if (arr[i] > 0) {
            for (int j = 0; j < arr[i]; j++) {
                cout << i << "\n";
            }
        }
    }

    return 0;
}