
#ifndef HTML_WRITER_H_
#define HTML_WRITER_H_

#include "plainwriter.h"

namespace design_pattern
{

class HtmlWriter : public PlainWriter
{
public:
  explicit HtmlWriter();
  virtual ~HtmlWriter() = default;

  void writeData(const std::string& stringData) override;

private:
  std::string conversionString(const std::string& stringData);
};

}

#endif // HTML_WRITER_H_
