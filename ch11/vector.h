//
// Created by Xuechao Qin on 4/12/2022.
//

#ifndef CPP_LEARNING_VECTOR_H
#define CPP_LEARNING_VECTOR_H

#include "iostream"

namespace VECTOR {
    class Vector {
    public:
        enum Mode {
            // RECT for rectangular, POL for Polar modes
            RECT, POL
        };
    private:
        double x;       // horizontal value
        double y;       // vertical value
        double mag;     // length of vector
        double ang;   // direction of vector in degrees
        Mode mode;

        // private methods for setting values
        void set_mag();

        void set_ang();

        void set_x();

        void set_y();

    public:
        Vector();

        Vector(double n1, double n2, Mode form = RECT);

        void reset(double n1, double n2, Mode form = RECT);

        ~Vector();

        double xval() const { return x; }

        double yval() const { return y; }

        double magval() const { return mag; }

        double angval() const { return ang; }

        void polar_mode();      // set mode to POL
        void rect_mode();       // set mode to RECT
        // operator overloading
        Vector operator+(const Vector &b) const;

        Vector operator-(const Vector &b) const;

        Vector operator-();

        Vector operator*(double n) const;

        // friends
        friend Vector operator*(double n, const Vector &a);

        friend std::ostream &operator<<(std::ostream &os, const Vector &v);
    };
}


#endif //CPP_LEARNING_VECTOR_H
