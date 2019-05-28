#include <vector>
#include <string>
#include <iostream>

int main() {
  const std::vector<std::string> scores = { "F", "D", "C", "B", "A", "A++"};
  std::string LetterGrade;
  int grade;
  std::cin >> grade;  
  if (grade >= 60)
    lettergrade = scores[(grade - 50) / 10];
  else
    LetterGrade = scores[0];
  std::cout << LetterGrade << std::endl;

  return 0;
}
