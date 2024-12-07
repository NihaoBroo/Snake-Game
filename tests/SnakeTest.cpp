#include "../include/snake.hpp"
#include <cassert>
#include <iostream>

void TestSnakeOperations() {
    Snake snake;

    // Initial state
    assert(snake.GetHeadPosition() == Point(10, 10));

    // Test movement
    snake.Move(Point(1, 0));
    assert(snake.GetHeadPosition() == Point(11, 10));

    // Test growth
    snake.Grow();
    snake.Move(Point(0, 1));
    assert(snake.GetHeadPosition() == Point(11, 11));
}

int main() {
    TestSnakeOperations();
    std::cout << "All Snake tests passed!" << std::endl;
    return 0;
}
