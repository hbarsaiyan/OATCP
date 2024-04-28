# Algorithm - Finding Maximum Flow

## Input and Initialization:

The program begins by opening an input file (`input.txt`) and an output file (`output.txt`) using `freopen()` for redirection of standard input and output streams.
It reads an integer `n` representing the number of nodes in the graph.
It reads the source and destination nodes `src` and `dst`.
It initializes a 2D vector `graph` of size `n x n` to represent the graph and its capacities.

## Ford-Fulkerson Algorithm:

The `ford_fulkerson` function implements the Ford-Fulkerson algorithm to find the maximum flow in a flow network.
It initializes a residual graph `residual_g` as a copy of the original graph.
It initializes a vector `parent` to keep track of the augmenting path found during the BFS traversal.
It repeatedly performs BFS on the residual graph to find augmenting paths from the source to the sink.
While there exists an augmenting path, it finds the minimum residual capacity along the path and updates the residual capacities of the edges.
It accumulates the flow found along each augmenting path.

## Breadth-First Search (BFS):

The `bfs` function performs a BFS traversal from the source node to the destination node in the residual graph to find augmenting paths.
It uses a queue to explore nodes in breadth-first order.
It marks visited nodes and keeps track of the parent node to reconstruct the augmenting path.
If the destination node is reached, it returns true indicating the existence of an augmenting path; otherwise, it returns false.

## Output:

The program computes the maximum flow using the `ford_fulkerson` function and prints it to the output file (`output.txt`).
It also measures and prints the time taken for the computation in milliseconds using `std::chrono` for performance analysis.

## Time Complexity:

The time complexity of the Ford-Fulkerson algorithm depends on the method used to find augmenting paths. In the worst case, it has a time complexity of O(VE^2), where V is the number of vertices and E is the number of edges in the graph. However, with efficient implementations, such as Edmonds-Karp using BFS, the time complexity reduces to O(VE^2).
