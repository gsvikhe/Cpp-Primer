#include <vector>
#include <string>
#include <iostream>

using namespace std;
int main() {
  const vector<string> scores = { "F", "D", "C", "B", "A", "A++"};
  string LetterGrade;
  int grade;
  cin >> grade;
  LetterGrade = grade < 60 ? scores[0] : scores[(grade - 50) / 10]; // Use of the conditional operator
  cout << LetterGrade << endl;

  return 0;
}
