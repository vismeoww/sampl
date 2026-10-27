# Create the library from source files
add_library(lib
    src/parser/ast.cpp 
    src/parser/parser.cpp
    #lexer
    src/parser/token.cpp
    src/parser/lexer.cpp
)


target_include_directories(lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
