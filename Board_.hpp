#pragma once

class GameBoard {
    int _width;
    int _height;

public:
    GameBoard(int width = 20, int height = 20);
    GameBoard(const GameBoard& other);
    int GetWidth() const;
    int GetHeight() const;

    GameBoard operator = (const GameBoard& other);
    bool operator == (const GameBoard& other) const;
};

std::istream& operator >> (std::istream& in, GameBoard& board);
std::ostream& operator << (std::ostream& out, const GameBoard& board);
