#include <iostream>
#include <vector>

using namespace std;

vector<string> res;

void recur(string s, int n, int k, int ok, int count) {
    if (count >= k) {
        ok = 1;
    }

    if (s.size() == n) {
        if(ok) res.push_back(s);
        return;
    }

    recur(s + "0", n, k, ok, 0);

    recur(s + "1", n, k, ok , count + 1);

}

int main()
{
    int n, k;
    cin >> n >> k;
    recur("",n,k,0,0);

    for (auto x : res) {
        cout << x << "\n";
    }

    return 0;
}
