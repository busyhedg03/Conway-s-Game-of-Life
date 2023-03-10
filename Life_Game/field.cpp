#include "field.h"

Field::Field() {}

Field::Field(int h, int w)
{
    std::vector<std::vector<char>> field(h, std::vector<char>(w, 0));
    this->vec = std::move(field);
}

char Field::get_value(const int y, const int x) {
    return vec[y][x];
}

void Field::set_value(const int y, const int x, const char new_value){
    this->vec[y][x] = new_value;
}

void Field::resize(int new_h, int new_w){
    vec.resize(new_h, std::vector<char>(new_w, 0));
    for (int i = 0; i < new_h; ++i) {
        vec[i].resize(new_w, 0);
    }
}
