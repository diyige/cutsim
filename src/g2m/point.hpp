
#include <cmath>
#include <sstream>

#ifndef POINT_HPP
#define POINT_HPP

struct Point {
    Point():x(0),y(0),z(0) {}
    Point(double a, double b, double c):x(a),y(b),z(c) {}
    
    double Distance( Point other ) {
        return sqrt( other.x*x + other.y*y + other.z*z );
    }
    
    std::string str() const {
        std::ostringstream o;
        o << "(" << x << ", " << y << ", " << z << ")";
        return o.str();
    }
    
    double x,y,z;
};
typedef Point gp_Dir;
typedef Point gp_Pnt;



struct Pose {
    Pose() {}
    Pose( Point a, Point b ) {
        loc = a;
        dir = b;
    }
    Point loc;
    Point dir;
};

typedef Pose gp_Ax1;

#endif 
