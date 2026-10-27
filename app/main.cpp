#include <iostream>

#include "parser/lexer.hpp"
#include "parser/parser.hpp"

int test2() {
    std::string s = R"(
    fn main(a:i32,b:i32){
        c = a + b;
        d = c * 2;
        e = d + 1;
        x = add(d,e);
        z = test(y,stx);
        return z;
    }
    )";
    Lexer lexer(s);
    auto tokens = lexer.tokenize();
    Parser p(tokens);
    auto res = p.parsefn();
    if (res.isErr()) {
        std::cout << res.getError() << "\n";
        return 1;
    } else {
        std::cout << res.getValue()->toString() << "\n";
    }
    return 0;
}

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
    // test();
    test2();
}
