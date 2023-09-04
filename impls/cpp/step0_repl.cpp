//
// Created by colin on 9/4/23.
//
#include <iostream>
#include <string>
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
  string input;
  for(;;) {
    cout << "User> ";
    getline(cin, input);
    cout << rep(input) << endl;
  }
}