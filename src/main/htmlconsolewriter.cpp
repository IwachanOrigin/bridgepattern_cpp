
#include "htmlconsolewriter.h"
#include <iostream>

using namespace design_pattern;

HtmlConsoleWriter::HtmlConsoleWriter()
  : PlainConsoleWriter()
{
}

void HtmlConsoleWriter::writeString(const std::string& stringDat)
{
  std::cout << this->conversionString(stringDat) << std::endl;
}

std::string HtmlConsoleWriter::conversionString(const std::string& stringDat)
{
    return "<tag>" + stringDat + "</tag>";
}
