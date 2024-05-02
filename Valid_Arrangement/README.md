# Algorithm -

- Building the Graph:
    - The program constructs a directed graph from the given pairs of nodes. It iterates through each pair and adds an edge from the start node to the end node.
    - It also keeps track of the indegree and outdegree of each node.
- Depth-First Search (DFS):
    - The code defines a DFS function (dfs) to traverse the graph. It starts from a specified node and explores its adjacent nodes recursively.
    - During DFS traversal, it removes edges from the graph to ensure that each edge is visited only once.
- Finding the Starting Node:
    - The program determines the starting node (i0) for DFS traversal based on the nodes' indegrees and outdegrees.
    - It selects a node with outdegree one greater than its indegree as the starting node.
- DFS Traversal:
    - It calls the DFS function (dfs) starting from the chosen starting node (i0). This DFS traversal results in a topological ordering of the nodes.
    - It stores the topologically sorted nodes in the vector v.
- Generating Valid Arrangement:
    - After obtaining the topological ordering, the program constructs the valid arrangement of pairs based on the ordering.
    - It iterates over the sorted nodes (v) in reverse order and generates pairs of nodes in the correct order.
    The generated pairs represent the valid arrangement of pairs that satisfy the conditions of the problem.