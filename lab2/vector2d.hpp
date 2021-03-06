#ifndef vector2d_hpp
#define vector2d_hpp

#include <iostream>
#include <iomanip>

using namespace std;

//////////////////////////////////////////////
// Public API

struct vector2d
{
    float x;
    float y;
};

<<<<<<< HEAD
=======
// This are operators allowing us to do "normal" maths on points
vector2d operator+(const vector2d &a, const vector2d &b);
vector2d operator-(const vector2d &a, const vector2d &b);
vector2d operator*(const vector2d &a, float s);

// Read and write vectors using the syntax in definition
ostream &operator<<(ostream &dst, const vector2d &a);
ostream &operator>>(ostream &dst, vector2d &a);

/*

//////////////////////////////////////////////////////////
// Implementation

vector2d operator+(const vector2d &a, const vector2d &b)
{
    return vector2d{a.x+b.x,a.y+b.y};
}

vector2d operator-(const vector2d &a, const vector2d &b)
{
    return vector2d{a.x-b.x,a.y-b.y};
}

vector2d operator*(const vector2d &a, float s)
{
    return vector2d{a.x*s, a.y*s};
}

// TODO: implement this so that it prints the point `a` to the destination
// in the form `(x,y)`, where x and y are the numeric values.
// Numeric values should be printed with exactly three decimal digits
// of accuracy, in non-scientific format (i.e. no exponent). Whitespace
// should not be inserted anywhere.
ostream &operator<<(ostream &dst, const vector2d &a){
    dst << fixed << std::setprecision(3) << "(" << a.x << "," << a.y << ")";
}

// TODO: implement this so it reads a point into `a`.
// This should match the format using when printing, and you can assume that
// it is in the correct format. Note that whitespace _may_ appear before the
// the opening '(' character, but not whitespace will appear between the
// '(' and ')'
istream &operator>>(istream &src, vector2d &a) {
    cin.ignore(256, '('); //ignore until there is a "("
    src >> a.x;
    cin.ignore(256, ',');
    src >> a.y;
    cin.ignore(256, ')');
    //return src;
};
*/
>>>>>>> 5711cc7c6833a6d28abd04cf8abf07b125c2c24d

#endif
