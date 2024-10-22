#include "painter.hpp"

void Painter::DrawImage(const Point& topLeft, const Point& bottomRight, char** image) 
{
     std::cout << "Drawing image from (" << topLeft.x << ", " << topLeft.y << ") to ("
              << bottomRight.x << ", " << bottomRight.y << ")" << std::endl;
}

void Painter::WriteText(const Point& position, const char* text) 
{
   std::cout << "Writing text at (" << position.x << ", " << position.y << "): " << text << std::endl;
   
}
