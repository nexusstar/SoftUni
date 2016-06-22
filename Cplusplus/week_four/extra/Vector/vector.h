// vector.h  - Vector class declaration

#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>

namespace VECTOR
{
  class Vector
  {
    public:
      enum Mode {RECT, POL};
    private:
      double x;
      double y;
      double mag;
      double ang;
      Mode mode;
      //setters
      void set_mag();
      void set_ang();
      void set_x();
      void set_y();
    public:
      Vector();
      Vector(double n1, double n2, Mode form = RECT);
      void reset(double n1, double n2, Mode form = RECT);
      ~Vector();
      //getters
      double xval() const {return x;}
      double yval() const {return y;}
      double magval() const {return mag;}
      double anval() const {return ang;}
      void polar_mode(); //set mode to POL
      void rect_mode(); //set mode to RECT
      //operator overloading
      Vector operator+(const Vector &b) const;
      Vector operator-(const Vector &b) const;
      Vector operator-() const;
      Vector operator*(double n) const;
      //friends
      friend Vector operator*(double n, const Vector &a);
      friend std::ostream & operator<<(std::ostream &os, const Vector &v);
  }; //end class definition
} // end namespace VECTOR
#endif
