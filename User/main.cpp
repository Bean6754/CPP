#include <iostream>
// #include <fstream>

int main(void)
{
  char c[26];

  std::cout << "What is your first name? ";
  std::cin >> c;
  std::cout << "Hello, " << c << "." << std::endl;
  return 0;
}
