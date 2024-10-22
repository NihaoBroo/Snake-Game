#pragma once

#include "abstract_painter.hpp"

class Painter : public AbstractPainter {
public:
    void DrawImage(const Point& topLeft, const Point& bottomRight, char** image) override; 
    void WriteText(const Point& position, const char* text) override;                     
};
