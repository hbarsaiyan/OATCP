
# Algorithm -

- Input and Initialization:
    - The program starts by opening an input file (input1.txt) and an output file (output1.txt) using freopen().
    - It reads an integer n from the input file, representing the size of a square grid.
    - A 2D dynamic array array of size n x n is allocated to store the color information of each cell in the grid.

- Grid Color Input:
    - The program reads the color information of each cell in the grid from the input file and stores it in the 2D array array.
    - The value 1 represents a colored cell, and 0 represents an uncolored cell.

- Counting Subgrids:
    - The count_subgrids function calculates the number of subgrids in which both row a and row b have at least one colored cell in the same column.
    - It iterates over all pairs of rows a and b in the grid, where a is less than b.
    - For each pair of rows, it checks if there are any columns where both rows have colored cells (color[a][i] == 1 and color[b][i] == 1). If so, it increments the counter x.
    - Finally, it updates the total number of subgrids by adding the number of subgrids formed by the pair of rows a and b. The formula (x - 1) * x / 2 calculates the number of subgrids formed by x colored cells.

- Output:
    - The program prints the total number of subgrids counted by the count_subgrids function to the output file (output1.txt), followed by a newline character.

- Memory Management:
    - After the computation, the program deallocates the memory allocated for the 2D array array to avoid memory leaks.




