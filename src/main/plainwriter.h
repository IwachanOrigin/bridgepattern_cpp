
#ifndef PLAIN_WRITER_H_
#define PLAIN_WRITER_H_

#include "writer.h"
#include <fstream>

namespace design_pattern
{

class PlainWriter : public Writer
{
public:
  explicit PlainWriter() = default;
  virtual ~PlainWriter() = default;

  void openFile() override;
  void closeFile() override;
  void writeData(const std::string& stringData) override;
};

}

#endif // PLAIN_WRITER_H_
