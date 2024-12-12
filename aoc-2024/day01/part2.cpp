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

    unordered_map<int, int> rightCount;
    for(int num : rightList) {
        rightCount[num]++;
    }

    int similarityScore = 0;
    for(int num : leftList) {
        similarityScore += num * rightCount[num];
    }

    cout << similarityScore << "\n";

    return 0;
}