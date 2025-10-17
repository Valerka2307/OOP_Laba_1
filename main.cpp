#include <iostream>
#include "include/chocotile.hpp"

int main() {
  int lhv,rhv;
  std::cout << "enter left value:";
  std::cin  >> lhv;
  std::cout << "enter right value:";
  std::cin  >> rhv;


  std::cout << "result: " << choco_sep(lhv, rhv) << std::endl;

  return 0;
}