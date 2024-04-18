
# Algorithm -

- Input and Initialization: The program begins by opening input and output files using freopen(). It reads a string s and a number x from the input file. The string s represents a non-negative integer, and x indicates the maximum number of digits that can be removed from s.

- Digit Removal Algorithm: The algorithm iterates through each character of the input string s. For each character, it compares it with the last character of the result string ans. If the current character is smaller than the last character of ans, and there are still removals (x > 0) remaining, it removes the last character of ans and decrements x. This process ensures that the resulting number in ans is as small as possible while maintaining its relative order of digits.

- Building the Result String: If ans is not empty or the current character is not '0', it appends the current character to ans. This step ensures that leading zeros are not included in the final result unless the result itself is '0'.

- Handling Remaining Removals: After processing all characters in s, the algorithm continues removing digits from ans if there are any remaining removals (x > 0). This step ensures that the resulting number has at most x digits.

- Output: Finally, the program converts the resulting string ans to an integer (final) and prints it to the output file. If ans is empty (indicating all digits were removed), it sets the result to 0 before printing.