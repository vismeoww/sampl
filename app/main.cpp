#include <iostream>
#include "parser/expr.h"
#include "parser/statement.h"
#include "parser/util.h"
#include "parser/basic.h"
#include "parser/extended.h"

#include "parser/lexer.hpp"


int test() {
    std::string s = "return a*c;";
    Lexer lexer(s);
    auto tokens = lexer.tokenize();
    for (auto &t : tokens) {
        std::cout << tokenToString(t) << "\n";
    }
    return 0;
}


int main() {
    test();
}
