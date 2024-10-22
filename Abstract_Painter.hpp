#pragma once

#include "point.hpp"

class AbstractPainter {
public:
    virtual void DrawImage(const Point& topLeft, const Point& bottomRight, char** image) = 0;  
    virtual void WriteText(const Point& position, const char* text) = 0;                      
};
