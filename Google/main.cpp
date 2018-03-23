#include <iostream>
#include <string>

// Global variables.
std::string browser[26];
std::string *browserp;

void browser_detect() {
  // &client=firefox-b-ab
  std::cout << "Enter browser type (e.g: 'firefox')" << std::endl;
  std::cin >> browser;
  if (std::string::compare(browser, "firefox") == 0) {
      browserp = "&client=firefox-b-ab";
  } else {
    browserp = "";
  }
}

int main(void) {
  std::string string[26];
  char *stringp = string;
  
  browser_detect();
  
  std::cout << "Enter URL: ";
  std::cin >> string >> std::endl;
  
  return 0;
}
