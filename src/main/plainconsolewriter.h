
#ifndef PLAIN_CONSOLE_WRITER_H_
#define PLAIN_CONSOLE_WRITER_H_

#include "writer.h"
#include <fstream>

namespace design_pattern
{

class PlainConsoleWriter : public Writer
{
public:
    explicit PlainConsoleWriter() = default;
    virtual ~PlainConsoleWriter() = default;

    void openFile() {}
    void closeFile() {}
    void writeData(const std::string& stringDat);

protected:
  std::ofstream m_ofs;
};

}

#endif // PLAIN_CONSOLE_WRITER_H_
