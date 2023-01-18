
#include "htmlwriter.h"
#include <iostream>

using namespace design_pattern;

HtmlWriter::HtmlWriter()
  : PlainWriter()
{
}

void HtmlWriter::writeData(const std::string& stringData)
{
  std::string htmlStr = this->conversionString(stringData);
  this->getImpl()->writeData(htmlStr);
}

std::string HtmlWriter::conversionString(const std::string& stringData)
{
  return "<tag>" + stringData + "</tag>";
}
