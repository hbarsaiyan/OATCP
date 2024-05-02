# Algorithm -

- Subsequence Generation:
    - The genSubsequences function generates all subsequences of a given string up to length 4 recursively.
    - It maintains a current string and explores including or excluding each character from the input string to build all possible subsequences.
- Main Function:
    - The program reads an integer n and n strings from the input file.
    - For each string, it generates all unique subsequences of lengths 1 to 4 and stores them in a vector.
    - Unique subsequences are ensured using a set to avoid duplicates.
    - The generated subsequences for each string are printed to the output file, separated by blank lines.
- Output:
    - Each input string's subsequences, ranging from lengths 1 to 4, are printed in separate blocks, with each subsequence on a separate line.
    - Each block of subsequences is separated by two blank lines.
- Complexity:
    - The time complexity of the algorithm is exponential in the length of the input strings due to the generation of all possible subsequences up to length 4.