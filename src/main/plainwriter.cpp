
#include "plainwriter.h"
#include <iostream>

using namespace design_pattern;

void PlainWriter::openFile()
{
  this->getImpl()->openFile();
}

void PlainWriter::closeFile()
{
  this->getImpl()->closeFile();
}

void PlainWriter::writeData(const std::string& stringData)
{
  this->getImpl()->writeData(stringData);
}
