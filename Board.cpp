#include "gameboard.hpp"

GameBoard::GameBoard(int w, int h) : boardWidth(w), boardHeight(h) {}

int GameBoard::Width() const {
    return boardWidth;
}
int GameBoard::Height() const {
    return boardHeight;
}
Board Board::operator=(const Board &other)
{
    _width = other.GetWidth();
    _height = other.GetHeight();
    return *this;
}
bool Board::operator==(const Board &other) const
{
    return GetWidth() == other.GetWidth() && GetHeight() == other.GetHeight();
}
std::istream &operator>>(std::istream &in, Board &board)
{
    int width, height;
    in >> width >> height;
    board = Board(width, height);
    return in;
}
std::ostream &operator<<(std::ostream &out, const Board &board)
{
    out << board.GetWidth() << " " << board.GetHeight();
    return out;
