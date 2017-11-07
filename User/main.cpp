#include <iostream>
// #include <fstream>

int main(void)
{
  std::string s[26];

  std::cout << "What is your first name? ";
  std::cin >> s;
  std::cout << "Hello, " << s << "." << std::endl;
  return 0;
}
