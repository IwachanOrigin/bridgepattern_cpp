
#include "plainconsolewriter.h"
#include <iostream>

using namespace design_pattern;

void PlainConsoleWriter::writeData(const std::string& stringDat)
{
    std::cout << stringDat << std::endl;
}


