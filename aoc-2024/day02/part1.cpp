#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

bool isValidSequence(const vector<int>& nums) {
    if(nums.size() < 2) return true;

    bool isIncreasing = nums[1] > nums[0];
    for(size_t i = 1; i < nums.size(); ++i) {
        int diff = nums[i] - nums[i - 1];
        if(isIncreasing) {
            if(diff <= 0 || diff > 3) return false;
        } else {
            if(diff >= 0 || diff < -3) return false;
        }
    }
    return true;
}

int main() {
    setIO("input");

    vector<vector<int>> reports;
    string line;

    while(getline(cin, line)) {
        stringstream ss(line);
        vector<int> row;    
        int num;
        while(ss >> num) {
            row.push_back(num);
        }
        reports.push_back(row);
    }

    int safeReports = 0;
    for(const auto& report : reports) {
        if(isValidSequence(report)) {
            safeReports++;
        }
    }

    cout << safeReports << "\n";

    return 0;
}