#include<iostream>
#include<CLI11.hpp>

int main(int argc, char** argv) {
    CLI::App app{"C Compiler driver"};
    argv = app.ensure_utf8(argv);

    std::string filePath;
    app.add_option("source", filePath, "Path to source file to be compiled")->required()->expected(-1)->check(CLI::ExistingFile);

    bool lex, parse, code_gen, S;

    app.add_flag("--lex", lex, "Stop after lexing");
    app.add_flag("--parse", parse, "Stop after parsing");
    app.add_flag("--code-gen", code_gen, "Stop after assembly generation, before code emission");
    app.add_flag("-S", S, "Stop after lexing");

    CLI11_PARSE(app, argc, argv);
    std::cout << "Source file: " << filePath << std::endl;
    return 0;
}