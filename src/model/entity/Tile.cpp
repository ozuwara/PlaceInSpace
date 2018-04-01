#include <iostream>

using namespace std;

class Tile{
    int position_x, position_y;
    bool traversible;

    public:
        void set_position_x(int);
        void set_position_y(int);

        void set_traversible(bool);
};

void tile::set_position_x(int new_position_x){
    position_x = new_position_x;
}

void tile::set_position_y(int new_position_y){
    position_y = new_position_y;
}

void tile::set_traversible(bool istraversible){
    traversible = istraversible;
}  
