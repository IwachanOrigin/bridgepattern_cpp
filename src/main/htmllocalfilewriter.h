
#ifndef HTML_LOCAL_FILE_WRITER_H_
#define HTML_LOCAL_FILE_WRITER_H_

#include "plainfilewriter.h"

namespace design_pattern
{

class HtmlLocalFileWriter : public PlainFileWriter
{
public:
  explicit HtmlLocalFileWriter(const std::string& filename);
  virtual ~HtmlLocalFileWriter() = default;

  virtual void writeString(const std::string& str);

private:
  std::string conversionString(const std::string& stringDat);
};

}

#endif // HTML_LOCAL_FILE_WRITER_H_
