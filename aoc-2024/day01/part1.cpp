#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("input");

    vector<int> leftList;
    vector<int> rightList;
    int a, b;

    while(cin >> a >> b) {
        leftList.push_back(a);
        rightList.push_back(b);
    }

    int sum = 0;
    sort(leftList.begin(), leftList.end());
    sort(rightList.begin(), rightList.end());

    int n = leftList.size();
    for(int i = 0; i < n; ++i) {
        int l = leftList[i], r = rightList[i];
        sum += abs(l - r);
    }

    cout << sum << "\n";

    return 0;
}