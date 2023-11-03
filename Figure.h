#pragma once

#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>

class Figure
{
protected:
	char* name;
	static const char* Names[2];
	static const char* Parameters[2];
	static short idGenerator;
	short id;
	float perimeter;
	float square;

	Figure() : name{}, id{}, perimeter {}, square{} {}

	Figure(const float& perimeter, const float& square) : 
		perimeter{ perimeter }, square{ square } {
		id = idGenerator++;
		name = (char*)Names[id];
	}

	void setPerimeter() {
		this->perimeter = getPerimeter();
	}

	void setSquare() {
		this->square = getSquare();
	}

	virtual float getSquare() const = 0;
	virtual float getPerimeter() const = 0;

	virtual std::istream& setData(std::istream& is) = 0;

	friend std::ostream& operator<<(std::ostream&, const Figure&);
	friend std::istream& operator>>(std::istream&, Figure&);

public:
	static char* getDataNames(const short& id) {
		return (char*)Parameters[id];
	}

	inline short getiDFigure() const {
		return this->id;
	}

	char* getName() const {
		return this->name;
	}

	~Figure() {
		name = nullptr;
	}
}
;
#endif