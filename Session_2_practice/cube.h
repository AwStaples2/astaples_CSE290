// two different ways to tell the compiler to only include the file once

#pragma once

// #ifndef CUBE_H
// #define CUBE_H

class cube {

    public:
        void setLength(double);

        void setWidth(double);

        double getArea();

    private:
        double length_;
        double width_;
};