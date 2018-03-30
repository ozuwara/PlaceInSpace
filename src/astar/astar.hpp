#include <vector>
#include <cstdlib>
#include <iostream>
#include <ctime>

#ifndef __ASTAR__
#define __ASTAR__

class Node
    {
public:
    int x;
    int y;
    Node(int EDGE, int X, int Y);
    Node() {};
    std::vector<Node*> neighbours;
    int estimatedCost;
    int edge;
    int connectionX;
    int connectionY;
    };

/** 
 * 30-03-2018
 * ozuware/PlaceInSpace
 * 
 * Astar, is used to find the shortest path from A to B
 * where A and B, are positions within a 2-dimensional vector.
 *
 * Example:
 * #include "Astar.hpp"
 * Astar astar;
 * int fromX=0, fromY=0, toX=2, toY=2;
 * std::vector<std::vector<int> > map = astar.generateMap(3,3);
 * std::vector<Node> path = astar.shortest_path(fromX, fromY, toX, toY  map);
 *
 * path[0] contains start position = (fromX, fromY)
 * path[n] contains end position = (toX, toY);
 * In between 0 .. n, you'll find which nodes you should step through, to get from A to B fastest. 
 *
 * shortest path is found using the algorithm of,
 * Bellman-Ford algorithm: https://en.wikipedia.org/wiki/Bellman%E2%80%93Ford_algorithm
 */
class Astar
    {
    std::vector<Node> nodes;

    /* Find all neighbours to a node. 
     * foreach match update n.neighbours, with a reference
     */
    void find_neighbours(const std::vector<std::vector<int> > &map, Node &n);

    /* Initialize all nodes within the map
     * find neighbours foreach node,
     * Where a neighbour is a node withn the same square
     * fx N = neighbour, n = node, then
     * N N N
     * N n N
     * N N N
     */
    void init(const std::vector<std::vector<int> > &map);

    /* This method is used to calulate the cost,
     * of moving to Node n.
     */
    int weigth(Node n)
        {
        return n.edge;
        };
    
    /* This method will return the index of Node(x,y)
     * If no Node was found, the method will return -1 */
    int find_node_id(int x, int y);


protected:
    std::vector<Node> find_path(int x, int y, const std::vector<std::vector<int> > map);

public:
    std::vector<Node> shortest_path(int fromX, int fromY, int toX, int toY, const std::vector<std::vector<int> > map, 
        bool debug=false);

    /* Generate 2-dimensionel vector it random values between 1 and 6 */
    std::vector<std::vector<int> > generateMap(int cols, int rows);
    };
#endif