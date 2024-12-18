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

    string corruptedMemory;
    regex pattern(R"(mul\((\d+),(\d+)\)|do\(\)|don't\(\))");
    smatch matches;
    int totalSum = 0;
    bool validSection = true;

    while(cin >> corruptedMemory) {
        string::const_iterator searchStart(corruptedMemory.cbegin());
        while(regex_search(searchStart, corruptedMemory.cend(), matches, pattern)) {
            if (matches[0].str() == "do()") {
                validSection = true;
            } else if (matches[0].str() == "don't()") {
                validSection = false;
            } else if (validSection && matches[0].str().find("mul(") == 0) {
                int num1 = stoi(matches[1].str());
                int num2 = stoi(matches[2].str());
                totalSum += num1 * num2;
            }
            searchStart = matches.suffix().first;
        }
    }

    cout << totalSum << "\n";

    return 0;
}