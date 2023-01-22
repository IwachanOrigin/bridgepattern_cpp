
#include "writer.h"
#include "writerimpl.h"
#include "consolewriter.h"
#include "htmlwriter.h"
#include "localfilewriter.h"
#include "plainwriter.h"
#include <memory>

using namespace design_pattern;

int main(int argc, char* argv[])
{
  // Create plain console writer.
  std::unique_ptr<Writer> plainConsoleWriter;
  plainConsoleWriter = std::make_unique<PlainWriter>();
  plainConsoleWriter->setImpl(new ConsoleWriter());
  plainConsoleWriter->openFile();
  plainConsoleWriter->writeData("plain console writer.");
  plainConsoleWriter->closeFile();
  
  // Create html console writer.
  std::unique_ptr<Writer> htmlConsoleWriter;
  htmlConsoleWriter = std::make_unique<HtmlWriter>();
  htmlConsoleWriter->setImpl(new ConsoleWriter());
  htmlConsoleWriter->openFile();
  htmlConsoleWriter->writeData("html console writer.");
  htmlConsoleWriter->closeFile();
  
  // Create plain localfile writer.
  std::unique_ptr<Writer> plainLocalfileWriter;
  plainLocalfileWriter = std::make_unique<PlainWriter>();
  plainLocalfileWriter->setImpl(new LocalFileWriter("plainlocalfile.txt"));
  plainLocalfileWriter->openFile();
  plainLocalfileWriter->writeData("plain local file writer.");
  plainLocalfileWriter->closeFile();
  
  // Create html localfile writer.
  std::unique_ptr<Writer> htmlLocalfileWriter;
  htmlLocalfileWriter = std::make_unique<HtmlWriter>();
  htmlLocalfileWriter->setImpl(new LocalFileWriter("htmllocalfile.txt"));
  htmlLocalfileWriter->openFile();
  htmlLocalfileWriter->writeData("html local file writer.");
  htmlLocalfileWriter->closeFile();

  return 0;
}

