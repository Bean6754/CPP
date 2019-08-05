#include <iostream>
#include <fstream>
#include <string>

std::string location = ".";

void user_input()
{
  std::cout << "Please enter a file path: ";
  std::cin >> location;
  std::cout << "Location is: " << location << std::endl;
}

void file_read()
{
  ifstream file;
  file.open(location);
  
  if(!file)
  {
    std::cout << "Not able to access file, please try again." << std::endl;
  }
  else if (file)
  {
    //
  }
  else
  {
    std::cout << "An unknown error has occured." << std::endl;
	return 1;
  }
}

int main(void)
{
  user_input();
  file_read();
  
  return 0;
}
