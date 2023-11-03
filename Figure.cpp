#include "Figure.h"

std::ostream& operator<<(std::ostream& out, const Figure& figure)
{
	return out << figure.id+1 << " | " << figure.name << " | Pmm: " << figure.perimeter << " | Smm^2: " << figure.square;
}

std::istream& operator>>(std::istream& is, Figure& figure)
{
	return figure.setData(is);
}

short Figure::idGenerator{ 0 };

const char* Figure::Names[2] = {(char*)"Circle", (char*)"Rectangle"};

const char* Figure::Parameters[2] = {(char*)"Radius, mm", (char*)"Height x Windth, mm"};