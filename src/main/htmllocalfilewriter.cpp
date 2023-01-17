
#include "htmllocalfilewriter.h"
#include <iostream>

using namespace design_pattern;

HtmlLocalFileWriter::HtmlLocalFileWriter(const std::string& filename)
  : PlainFileWriter(filename)
{}

void HtmlLocalFileWriter::writeString(const std::string& stringDat)
{
    m_ofs << this->conversionString(stringDat) << std::endl;
}

std::string HtmlLocalFileWriter::conversionString(const std::string& stringDat)
{
    return "<tag>" + stringDat + "</tag>";
}
