
#ifndef HTML_CONSOLE_WRITER_H_
#define HTML_CONSOLE_WRITER_H_

#include "plainconsolewriter.h"

namespace design_pattern
{

class HtmlConsoleWriter : public PlainConsoleWriter
{
public:
  explicit HtmlConsoleWriter();
  virtual ~HtmlConsoleWriter() = default;

  void writeString(const std::string& str);

private:
  std::string conversionString(const std::string& stringDat);
};

}

#endif // HTML_CONSOLE_WRITER_H_
