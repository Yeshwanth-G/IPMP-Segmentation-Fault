Shortest Path:

- DAG
  - **O(V+E)** using Toposort
  - get toposort and relax the vertices.
- Unit Edges
  - BFS=>dir/undir -> **O(V+E)**
- No negative edges
  - Dijkstra's
  - O(V+ElogV)
  -  standard implementation will fail for negative edges and may run into infinte loop for negative cycles.
- Negative Edges/Cycles
  - Bellmann ford
  - Relax each edge and do it V - 1 times.
  - O(V^2)
  -  ONLY FOR DIRECTED GRAPHS -> works for negative edges and also helps in detecting negative cycles.
- Multi Source: Floyd Warshall
    - O(V^3)
    - go via each vertex and keep on updating adjacency matrix.

---------------
CYCLE DETECTION:

- Directed 
  - dfs with path_visited or Toposort using Khann's.
- Undirected
  - dfs/bfs with parent.
- Negative cycle
  - Bellann Ford
