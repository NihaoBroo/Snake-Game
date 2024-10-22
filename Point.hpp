#pragma once

  struct Point {
      int x;
      int y;

    Point() : x(0), y(0) {}  
    Point(int xPos, int yPos) : x(xPos), y(yPos) {}  
  
    Point operator=(const Point& other);  
    bool operator==(const Point& other) const;  

    friend std::istream& operator>>(std::istream& in, Point& point);  
    friend std::ostream& operator<<(std::ostream& out, const Point& point);  
};
