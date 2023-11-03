#pragma once

#ifndef CIRCLE_H
#define CIRCLE_H

#include "Figure.h"

class Circle final:
    public Figure
{
private:
    short radius{};
    const float PI = 3.14f;

public:
    Circle() : Figure(getPerimeter(), getSquare()) {}

    Circle(short radius) : 
        Figure(getPerimeter(), getSquare()), radius{radius} {}

private:
    virtual float getSquare() const override final {
        return this->PI * this->radius * this->radius;
    }

    virtual float getPerimeter() const override final {
        return 2 * this->PI * this->radius;
    }

    virtual std::istream& setData(std::istream& is) override final 
    {
       is >> this->radius;
       this->setPerimeter();
       this->setSquare();

       return is;
    }
}
;
#endif