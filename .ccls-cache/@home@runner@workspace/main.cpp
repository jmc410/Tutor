#include <iostream>
#include <cstdlib>
#include <ctime>
int main() { 
  std::srand(static_cast<unsigned int>(std::time(nullptr)));

  int num1 = std::rand() % 100 + 1;
  int num2 = std::rand() % 100 + 1;

  // Display
  std::cout << "Solve the problem, you got this!\n";
  std::cout << num1 << " + " << num2 << " = ? \n" << std::endl;
  std::cout << "___" << std::endl;
    

  std::cin.get();
  std::cin.get();

  std::cout << "\nThe right awnser is... " << (num1 + num2) << " Did you get it?" << std::endl;

  return 0;
}