
set(MAIN_SRC
  main.cpp
  consolewriter.h
  consolewriter.cpp
  htmlwriter.h
  htmlwriter.cpp
  localfilewriter.h
  localfilewriter.cpp
  plainwriter.h
  plainwriter.cpp
  writer.h
  writer.cpp
  writerimpl.h
)

add_executable(
  ${PROJECT_NAME}
  ${MAIN_SRC}
)

