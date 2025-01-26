#include <iostream>
#include <vector>

using namespace std;

vector<string> res;

void rec(string s, int n, int a, int b, int c) {
    if (s.size() == n) {
        res.push_back(s);
        return;
    }

    if (a > 0) {
        rec(s + "A", n, a - 1, b, c);
    }
    if (b > 0) {
        rec(s + "B", n, a, b - 1, c);
    }
    if (c > 0) {
        rec(s + "C", n, a, b, c - 1);
    }


}

int main()
{
    int N, i, j, k;
    cin >> N >> i >> j >> k;
    rec("",N,i,j,k);
    cout << res.size() << "\n";
    for (auto x : res) {
        cout << x << "\n";
    }

    return 0;
}
