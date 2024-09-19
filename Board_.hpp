#pragma once

class GameBoard {
    int boardWidth;
    int boardHeight;

public:
    GameBoard(int w, int h); 
    int Width() const; 
    int Height() const; 
};

GameBoard::GameBoard(int w, int h) : boardWidth(w), boardHeight(h) {}

int GameBoard::Width() const {
    return boardWidth;
}

int GameBoard::Height() const {
    return boardHeight;
}
