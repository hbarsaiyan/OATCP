Approach
The problem of finding the maximum number of ice cream bars a boy can purchase given his budget and the prices of available ice cream bars can be efficiently solved by sorting the prices in ascending order and iterating through them while subtracting from the budget.

Steps
Sort Prices:

Arrange the array costs in ascending order to have the ice cream bars sorted by price.
Initialize Variables:

Initialize a variable ans to 0 to track the quantity of ice cream bars purchased.
Purchase Ice Cream Bars:

Iterate through each ice cream bar price in the sorted costs array.
Check if the boy's current amount of coins is less than or equal to the cost of the ice cream bar.
If so, increase ans by 1 and deduct the price of the ice cream bar from the boy's total coin count.
Repeat the above step until the boy runs out of coins or there are no more ice cream bars available for purchase.
Result:

Finally, return the value of ans as the maximum allowed amount of ice cream bars the boy can buy.

Time Complexity - O(n log n)
Space Complexity - O(n)
