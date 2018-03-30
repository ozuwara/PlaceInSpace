#include "src/astar/astar.hpp"

int main(int argc, char *args[])
    {

    Astar astar;
    std::vector<Node> path = astar.shortest_path(0, 0, 2, 2, astar.generateMap(3,3), false);

    for(int i = 0; i < path.size(); i++) std::cout << " -> (" << path[i].x << ", " << path[i].y << ")";

    return 0;
    };