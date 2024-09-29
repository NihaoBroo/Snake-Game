#include "gameboard.hpp"

GameBoard::GameBoard(int w, int h) : boardWidth(w), boardHeight(h) {}

int GameBoard::Width() const {
    return boardWidth;
}

int GameBoard::Height() const {
    return boardHeight;
}
