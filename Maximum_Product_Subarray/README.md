1. Define a function called `findMaxProduct` that takes a vector of integers `nums` as input and returns an integer.
2. Initialize two variables: `maxi` to store the maximum product found so far (initialized to `INT_MIN`), and `prod` to store the current product (initialized to 1).
3. Iterate through the `nums` vector from left to right:
    - Update `prod` by multiplying it with the current element of `nums`.
    - Update `maxi` with the maximum of `prod` and the current value of `maxi`.
    - If `prod` becomes 0, reset it to 1.
4. Reset `prod` to 1.
5. Iterate through the `nums` vector from right to left:
    - Update `prod` by multiplying it with the current element of `nums`.
    - Update `maxi` with the maximum of `prod` and the current value of `maxi`.
    - If `prod` becomes 0, reset it to 1.
6. Return `maxi`.

In the `main` function:

-   Read an integer `n` from the standard input.
-   If `n` is greater than 0, proceed with the following steps; otherwise, print 0 and exit.
-   Read `n` integers from the standard input and store them in a vector `nums`.
-   Call the `findMaxProduct` function with `nums` as the argument and store the result in a variable `product`.
-   Print the value of `product` to the standard output.
