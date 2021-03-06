#include "Point.hh"
Point::Point(int x, int y){
    X = x;
    Y = y;
}
bool Point::operator==(const Point other){
    return X == other.X && Y == other.Y;
}
bool Point::operator!=(const Point other) {
  return !(*this==other);
}
