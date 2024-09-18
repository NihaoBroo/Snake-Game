#pragma once

class Board {
    int width;
    int height;

public:
    Board(int w, int h); 
    int GetWidth() const; 
    int GetHeight() const; 
};


Board::Board(int w, int h) : width(w), height(h) {}


int Board::GetWidth() const {
    return width;
}


int Board::GetHeight() const {
    return height;
}
