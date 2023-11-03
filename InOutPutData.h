#pragma once

#ifndef INOUTPUTDATA_H
#define INOUTPUTDATA_H

#include "Figure.h"
#include "Circle.h"
#include "Rectangle.h"

void createFigures (Figure** (&), const short&);

void outPut (Figure**, const short&);

void fillFigures(Figure**, const short&);

void cleanRAM (Figure**, const short&);

#endif