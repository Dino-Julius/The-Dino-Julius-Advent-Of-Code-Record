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
    // Define the regex pattern to match "mul(#,#)" where # are digits
    regex pattern(R"(mul\((\d+),(\d+)\))");
    // smatch is a type used to store the results of a regex search on a string, matches[0] contains the entire match
    smatch matches;
    int totalSum = 0;

    while(cin >> corruptedMemory) {
        // string::const_iterator is used to iterate over the string without modifying it
        string::const_iterator searchStart(corruptedMemory.cbegin());
        // Perform regex search on the string
        while(regex_search(searchStart, corruptedMemory.cend(), matches, pattern)) {
            // matches[1] and matches[2] contain the captured groups from the regex
            int num1 = stoi(matches[1].str());
            int num2 = stoi(matches[2].str());
            totalSum += num1 * num2;
            // Update the search start position to continue searching after the current match
            searchStart = matches.suffix().first;
        }
    }

    cout << totalSum << "\n";

    return 0;
}