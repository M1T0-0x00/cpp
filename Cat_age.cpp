#include <iostream>

int main() {
  std :: cout << "Welcome to the Cat Years program! This only works for cats older than 2 years old.\n\n";
  
  int cat;
  int human;
  
  std :: cout << "Enter your cat's age : ";
  std :: cin >> cat;

  human = (cat - 2) * 4 + 24;

  std :: cout << "\nYour furry friend is "<< human << " years old in human years";
}
