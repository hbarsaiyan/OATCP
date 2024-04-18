# Algorithm -

-   Hamming Distance Function:
    The code defines a function hammDis to calculate the Hamming distance between two integers x and y.
    The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
    It iterates through each bit position (from 31 to 0) and checks if the corresponding bits in x and y are different. If so, it increments the count.

-   Input:
    The program reads a sequence of integers from an input file (input1.txt) and stores them in a vector nums.
    It continues reading integers until encountering a newline character, indicating the end of the input sequence.

-   Duplicate Input:
    After reading the initial sequence of integers, the program reads another sequence of integers of the same length (n) from the input file.
    It appends these additional integers to the vector nums, effectively duplicating the input sequence.

-   Hamming Distance Calculation:
    The program computes the total Hamming distance between all pairs of integers in the vector nums.
    It iterates through each pair of integers in nums, computing their Hamming distance using the hammDis function, and accumulates the result in the variable ans.

-   Output:
    Finally, the program prints the total Hamming distance (ans) between all pairs of integers in the vector nums to the output file (output1.txt).
