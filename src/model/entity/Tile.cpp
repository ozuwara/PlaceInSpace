#include <iostream>

using namespace std;

class Tile{
    int position_x, position_y;
    bool traversible;

    public:
        Tile(int init_position_x, int init_position_y);

        int get_position_x();
        int get_position_y();
        void set_position_x(int);
        void set_position_y(int);

        bool get_traversible();
        void set_traversible(bool);
};

Tile::Tile(int init_position_x, int init_position_y){
    position_x = init_position_x;
    position_y = init_position_y;
}

Tile::Tile(int init_position_x, int init_position_y, bool is_traversible){
    position_x = init_position_x;
    position_y = init_position_y;
    bool traversible = is_traversible;
}

int Tile::get_position_x(){
    return get_position_x;
}

int Tile::get_position_y(){
    return get_position_y;
}

void Tile::set_position_x(int new_position_x){
    position_x = new_position_x;
}

void Tile::set_position_y(int new_position_y){
    position_y = new_position_y;
}

bool Tile::get_traversible(){
    return traversible;
}

void Tile::set_traversible(bool istraversible){
    traversible = istraversible;
}  
