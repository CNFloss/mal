#include <iostream>
#include <string>
#include "linenoise.hpp"
using namespace std;

string READ(string input) { return input; }
string EVAL(string input) { return input; }
string PRINT(string input) { return input; }
string rep(string input) {
  string first = READ(input);
  string second = EVAL(first);
  return PRINT(second);
}

int main() {
  const auto path = "history.txt";
  linenoise::LoadHistory(path);
  string input;
  for(;;) {
    fflush(stdout);
    auto quit = linenoise::Readline("User> ", input);

    if (quit) {
      break;
    }
    cout << rep(input) << endl;
    linenoise::AddHistory(input.c_str());
  }

  linenoise::SaveHistory(path);
}