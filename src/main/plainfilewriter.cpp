
#include "plainfilewriter.h"
#include <iostream>

using namespace design_pattern;

PlainFileWriter::PlainFileWriter(const std::string& filename)
    : m_filename(filename)
{
}

void PlainFileWriter::openFile()
{
    m_ofs.open(m_filename.c_str(), std::ios::trunc);
}

void PlainFileWriter::closeFile()
{
    m_ofs.close();
}

void PlainFileWriter::writeData(const std::string& stringDat)
{
    m_ofs << stringDat.c_str() << std::endl;
}
