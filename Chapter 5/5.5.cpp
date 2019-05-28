#include <vector>
#include <string>
#include <iostream>

using namespace std;
int main() {
  const vector<string> scores = { "F", "D", "C", "B", "A", "A++"};
  string LetterGrade;
  int grade;
  cin >> grade;
  if (grade >= 60)
    LetterGrade = scores[(grade - 50) / 10];
  else
    LetterGrade = scores[0];
  cout << LetterGrade << std::endl;

  return 0;
}
