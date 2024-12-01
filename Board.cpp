#include "board.hpp"

GameBoard::GameBoard(int w, int h) : _width(w), _height(h) {}

int GameBoard::GetWidth() const {
    return _width;
}

int GameBoard::GetHeight() const {
    return _height;
}

GameBoard GameBoard::operator=(const GameBoard& other) {
    _width = other.GetWidth();
    _height = other.GetHeight();
    return *this;
}

bool GameBoard::operator==(const GameBoard& other) const {
    return GetWidth() == other.GetWidth() && GetHeight() == other.GetHeight();
}

std::istream& operator>>(std::istream& in, GameBoard& board) {
    int width, height;
    in >> width >> height;
    board = GameBoard(width, height);
    return in;
}

std::ostream& operator<<(std::ostream& out, const GameBoard& board) {
    out << board.GetWidth() << " " << board.GetHeight();
    return out;
}

