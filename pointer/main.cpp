#include <iostream>

int main() {
  char c, *pC1, *pC2, *pC3;
  c = 'a';
  pC1 = NULL;
  pC2 = &c;
  pC3 = pC2;

  *pC3 = 'e';

  std::cout << c;

  return 0;
}
