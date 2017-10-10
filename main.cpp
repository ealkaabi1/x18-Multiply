// Eisa alkaabi

#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  vector<vector<int>> digits(12);
  
  for (int i = 0; i < 12; i++)
    digits[i].resize(12);

  cout << setw(4) << left << "X   |";

  for (int i = 1; i <= 12; i++)
    cout << setw(4) << left << i << "| ";

  cout << endl;

  for (int i = 1; i <= 12; i++) {
    for (int j = 1; j <= 12; j++) {
      digits[i - 1][j - 1] = i * j;
    }
  }

  for (int x = 0; x < 12; x++) {
    cout << setw(4) << left << x + 1 << '|';
    
    for (int y = 0; y < 12; y++) {
      cout << setw(4) << left << digits[x][y] << "| ";
    }
    cout << endl;
  }


  return 0;
}
