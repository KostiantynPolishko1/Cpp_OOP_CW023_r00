#include "InOutPutData.h"

void createFigures(Figure** (&figure), const short& size)
{ 
	figure = new Figure * [size];

	*figure = new Circle;
	*(figure + 1) = new Rectangle;

	std::cout << "\n";
}

void outPut (Figure** figure, const short& size)
{
	for (Figure** iter = figure; iter != figure + size; iter++)
		std::cout << **iter << "\n";
	std::cout << "\n";
}

void fillFigures(Figure** figure, const short& size)
{
	for (Figure** iter = figure; iter != figure + size; iter++) {
		std::cout << (*iter)->getName() << "\n";
		std::cout << Figure::getDataNames((*iter)->getiDFigure()) << "->: ";
		std::cin >> **iter;
		std::cout << "\n";
	}
}

void cleanRAM (Figure** figure, const short& size) 
{
	for (Figure** iter = figure; iter != figure + size; iter++){
		delete *iter;
		*iter = nullptr;
	}

	delete[] figure;
	figure = nullptr;
}