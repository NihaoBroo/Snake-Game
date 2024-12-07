#include "../include/point.hpp"
#include <cassert>
#include <iostream>

void TestPointOperations() {
    Point p1(5, 10);
    Point p2(5, 10);
    Point p3(0, 0);

    // Test operator==
    assert(p1 == p2);
    assert(!(p1 == p3));

    // Test operator=
    p3 = p1;
    assert(p3 == p1);

    // Test I/O operators
    Point p4;
    std::stringstream input("7 14");
    input >> p4;
    assert(p4 == Point(7, 14));

    std::stringstream output;
    output << p4;
    assert(output.str() == "7 14");
}

int main() {
    TestPointOperations();
    std::cout << "All Point tests passed!" << std::endl;
    return 0;
}
