#include "../include/board.hpp"
#include <cassert>
#include <iostream>

void TestGameBoardOperations() {
    GameBoard board(20, 15);

    // Test dimensions
    assert(board.GetWidth() == 20);
    assert(board.GetHeight() == 15);

    // Test operator==
    GameBoard board2(20, 15);
    assert(board == board2);

    // Test operator=
    GameBoard board3 = board;
    assert(board3 == board);

    // Test I/O operators
    GameBoard board4;
    std::stringstream input("30 25");
    input >> board4;
    assert(board4 == GameBoard(30, 25));

    std::stringstream output;
    output << board4;
    assert(output.str() == "30 25");
}

int main() {
    TestGameBoardOperations();
    std::cout << "All GameBoard tests passed!" << std::endl;
    return 0;
}
