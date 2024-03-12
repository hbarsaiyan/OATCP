The problem can be solved efficiently using dynamic programming by breaking down the problem into smaller subproblems and storing the solutions to avoid redundant calculations.

1. Create an array `dp` of size `n + 1` to store the number of ways to obtain each sum from 0 to `n`.
2. Initialize `dp[0]` to 1, as there is only one way to obtain a sum of 0 (by not throwing any dice).
3. Iterate through all possible sums from 1 to `n`:

    - For each sum `i`, iterate through all possible dice throws from 1 to 6.
    - If the remaining sum `i - j` (where `j` is the current dice throw) is non-negative, the number of ways to obtain the sum `i` is equal to the sum of the number of ways to obtain the remaining sum `i - j` (stored in `dp[i - j]`) and the number of ways to obtain the current dice throw `j` (which is always 1).
    - Update `dp[i]` with this value.

4. After iterating through all sums, `dp[n]` will store the total number of ways to obtain the target sum `n`.

The base case of `dp[0] = 1` is handled during the initialization step.

time complexity of O(n \* 6)
space complexity of O(n)
