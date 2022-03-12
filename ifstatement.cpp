#include <iostream>

using namespace std;

int
main ()
{
  int n;
  cin >> n;
  if (n >= 1000)
    {
      cout << "college bunk" << endl;
      cout << "go to movie" << endl;
    }
  else if (n >= 500)
    {
      cout << "bunk" << endl;
    }
  else
    {
      cout << "go to college" << endl;
    }
}
\\
1000
college bunk
go to movie
500
bunk
100
go to college
