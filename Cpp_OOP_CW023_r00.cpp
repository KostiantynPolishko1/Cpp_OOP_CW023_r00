#include "InOutPutData.h"

int main()
{     
    Figure** figure = nullptr;
    createFigures(figure, 2);//create array of object
    
    outPut(figure, 2);//print default data of objects

    fillFigures(figure, 2);//modify data of objects

    outPut(figure, 2);//print modified data of objects

    cleanRAM(figure, 2);//clean RAM of objects

    return 0;
}