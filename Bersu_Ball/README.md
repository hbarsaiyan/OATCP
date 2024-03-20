1. Read an integer `n` from the standard input, which represents the number of boys.
2. Create a vector `boys` of size `n` to store the dancing skills of the boys.
3. Read `n` integers from the standard input and store them in the `boys` vector.
4. Read an integer `m` from the standard input, which represents the number of girls.
5. Create a vector `girls` of size `m` to store the dancing skills of the girls.
6. Read `m` integers from the standard input and store them in the `girls` vector.
7. If both `n` and `m` are greater than 0, do the following:
    - Sort the `boys` vector in non-decreasing order of dancing skills.
    - Sort the `girls` vector in non-decreasing order of dancing skills.
    - Initialize a variable `result` to 0 to store the number of pairs formed.
    - Iterate over each boy and girl:
        - If the absolute difference in dancing skills between the current boy and girl is at most 1, pair them by incrementing `result` and mark the girl as paired.
    - Print the value of `result`, which represents the maximum possible number of pairs formed.
8. If either `n` or `m` is 0, print 0 (since no pairs can be formed).
9. Exit the program.
