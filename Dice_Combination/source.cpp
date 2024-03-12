#include <bits/stdc++.h>
using namespace std;

const int MAX_VAL = 1e6;
const int MOD = 1e9 + 7;

int NUM, memo[MAX_VAL + 1];

int calculateWays(int num) {
    if (num == 0) {
        return 1;
    }

    for (int i = 0; i <= num; ++i) {
        memo[i] = 0;
    }

    memo[0] = 1;

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= 6 && i - j >= 0; j++) {
            memo[i] = (memo[i] + memo[i - j]) % MOD;
        }
    }

    return memo[num];
}

int main() {
    ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        cerr << "Error opening input file" << endl;
        return 1;
    }

    ofstream outputFile("output.txt");
    if (!outputFile.is_open()) {
        cerr << "Error opening output file" << endl;
        return 1;
    }

    int testCases;
    inputFile >> testCases;

    for (int caseNum = 1; caseNum <= testCases; ++caseNum) {
        int value;
        inputFile >> value;

        if (value < 0) {
            outputFile << "Case #" << caseNum << ": Invalid input (negative sum)" << endl;
            continue;
        }

        int ways = calculateWays(value);
        outputFile << "Case #" << caseNum << ": " << ways << endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}