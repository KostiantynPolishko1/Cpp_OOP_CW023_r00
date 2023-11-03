#pragma once

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Figure.h"

class Rectangle final :
    public Figure
{
private:
    short height{};
    short width{};

public:
    Rectangle() : Figure(getPerimeter(), getSquare()) {}

    Rectangle(short height, short width) : 
        Figure(getPerimeter(), getSquare()), height{height}, width{width} {}

private:
    virtual float getSquare() const override final {
        return (float)this->height * (float)this->width;
    }

    virtual float getPerimeter() const override final {
        return 2 * ((float)this->height + (float)this->width);
    }

    virtual std::istream& setData(std::istream& is) override final 
    {
        is >> this->height >> this->width;
        this->setPerimeter();
        this->setSquare();

        return is;
    }
}
;
#endif