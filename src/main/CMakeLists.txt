
set(MAIN_SRC
  main.cpp
  writer.h
  plainfilewriter.h
  plainfilewriter.cpp
  plainconsolewriter.h
  plainconsolewriter.cpp
  htmlconsolewriter.h
  htmlconsolewriter.cpp
  htmllocalfilewriter.h
  htmllocalfilewriter.cpp
)

add_executable(
  ${PROJECT_NAME}
  ${MAIN_SRC}
)

