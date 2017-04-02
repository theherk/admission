#include <iostream>

using namespace std;

int main()
{
  double gpa; // user grade point average
  int examScore; // user entrance exam score

  while (true)
    {
      cout << "Please enter your GPA: ";
      cin >> gpa;
      if (gpa == 0.0)
        break;
      cout << "Please enter your entrance score: ";
      cin >> examScore;

      if (examScore >= 40)
        {
          cout << "Congratulations!  You are hereby admitted to ABC Medical University." << std::endl;
        }
      else if (gpa >= 3.7 && examScore >= 32)
        {
          cout << "Congratulations!  You are hereby admitted to ABC Medical University." << std::endl;
        }
      else
        {
          cout << "We are sorry!  You are hereby denied admission to ABC Medical University." << std::endl;
        }
    }
  cout << "Thank you for your use of the Admissions Software Program at ABC Medical University." << std::endl;
}
