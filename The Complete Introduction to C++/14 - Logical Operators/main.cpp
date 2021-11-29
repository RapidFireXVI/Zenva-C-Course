/*
#include <iostream>

int main() {
  // ! (not) && (and) || (or)
  
  bool isGameOver = false;
  bool isNotGameOver = !isGameOver;

  // std::cout << isGameOver << std::endl;
  // std::cout << isNotGameOver << std::endl;

  int health = 0;
  int lives = 0;
  isGameOver = health <= 0 && lives <= 0;
  // std::cout << isGameOver << std::endl;

  bool result;
  // 1. What is the result? False / 0
  int a = 1;
  result = a - 1 != 0;

  // 2. What is the result? True / 1
  std::string y = "y";
  std::string x = "x";
  result = !(x > y);

  // 3. What is the result? True / 1
  bool hasKey = true;
  bool isDoorLocked = true;
  int movementPoints = 1;
  result = (hasKey || !isDoorLocked) && movementPoints > 0;
  std::cout << result << std::endl;
  } 
*/