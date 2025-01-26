#include <iostream>
#include <vector>

using namespace std;


vector<string> res;
int a[21];

void recur(int state,int black, int white, int n) {
    if (state == n) {
        for (int i = 0; i < n; i++) {
            cout << a[i];
        }
        cout << "\n";
        return;
    }

    if (black > 0) {
        a[state] = 0;
        recur(state + 1, black - 1, white, n);
    }

    if (white > 0) {
        a[state] = 1;
        recur(state + 1, black, white - 1, n);
    }

}

int main()
{
    int A, B;
    cin >> A >> B;

    recur(0, B-A, A, B);

    return 0;
}
