#include "board.hpp"
#include "snake.hpp"
#include "painter.hpp"

int main() {
    Board board(20, 20);
    Snake snake;
    Painter painter;

    painter.WriteText(Point(0, 0), "Game Started!");
    return 0;
}
