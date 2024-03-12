#include <bits/stdc++.h>
using namespace std;

const int MAXSIZE = 1000;

int N;
char grid[MAXSIZE + 1][MAXSIZE + 1];
long long solutions[MAXSIZE + 1][MAXSIZE + 1];

void processInput(const string &filename, ofstream &outFile)
{
    ifstream inFile(filename);
    if (!inFile.is_open())
    {
        cerr << "Error opening input file: " << filename << endl;
        return;
    }

    inFile >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            inFile >> grid[i][j];
        }
    }

    solutions[1][1] = (grid[1][1] == '.');

    for (int j = 2; j <= N; j++)
    {
        solutions[1][j] = (grid[1][j] == '.' && solutions[1][j - 1]);
    }

    for (int i = 2; i <= N; i++)
    {
        solutions[i][1] = (grid[i][1] == '.' && solutions[i - 1][1]);
    }

    for (int i = 2; i <= N; i++)
    {
        for (int j = 2; j <= N; j++)
        {
            if (grid[i][j] == '.')
            {
                solutions[i][j] = solutions[i - 1][j] + solutions[i][j - 1];
            }
        }
    }

    outFile << "Case: " << solutions[N][N] << endl;
}

int main()
{
    ofstream outFile("output.txt");
    if (!outFile.is_open())
    {
        cerr << "Error opening output file" << endl;
        return 1;
    }

    processInput("grid_paths_test_file1.txt", outFile);
    processInput("grid_paths_test_file2.txt", outFile);

    outFile.close();

    return 0;
}