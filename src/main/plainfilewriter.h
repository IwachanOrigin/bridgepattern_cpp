
#ifndef PLAIN_FILE_WRITER_H_
#define PLAIN_FILE_WRITER_H_

#include "writer.h"
#include <fstream>

namespace design_pattern
{

class PlainFileWriter : public Writer
{
public:
    explicit PlainFileWriter(const std::string& filename);
    virtual ~PlainFileWriter() = default;

    void openFile();
    void closeFile();
    void writeData(const std::string& stringDat);

protected:
  std::ofstream m_ofs;

private:
    std::string m_filename;
};

}

#endif // PLAIN_FILE_WRITER_H_
