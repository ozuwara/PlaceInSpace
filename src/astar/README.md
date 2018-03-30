# AStar
Peter-Benja collab project

AStar is using the power of the Bellman-Ford algorithm, to find the shortest path from A to B,
where A and B is positions in a two dimensional space.

Example:
#include "Astar.hpp"
Astar astar;
int fromX=0, fromY=0, toX=2, toY=2;
std::vector<std::vector<int> > map = astar.generateMap(3,3);
std::vector<Node> path = astar.shortest_path(fromX, fromY, toX, toY,  map);

path[0] contains start position = (fromX, fromY)
path[n] contains end position = (toX, toY);
In between 0 .. n, you'll find which nodes you should step through, to get from A to B fastest. 