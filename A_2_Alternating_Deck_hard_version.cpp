#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long int cards;
    cin >> cards;
    long long int alice = 0, bob = 0;

    long long int i = 1, j = 1, aliceWhite = 0, aliceBlack = 0,
                  bobWhite = 0, bobBlack = 0, k = 1;

    while (cards > 0)
    {
      if (j % 2 != 0)
      {
        //* alice
        int x = min(i, cards);
        alice += x;

        if (x % 2 == 0)
        {
          aliceWhite += (x / 2);
          aliceBlack += (x / 2);
        }
        else
        {
          aliceWhite += (x / 2) + 1;
          aliceBlack += (x / 2);
        }
        cards -= x;
      }
      else
      {
        //* bob
        int x = min(i, cards);
        bob += x;

        if (x % 2 == 0)
        {
          bobWhite += (x / 2);
          bobBlack += (x / 2);
        }
        else
        {
          bobBlack += (x / 2) + 1;
          bobWhite += (x / 2);
        }
        cards -= x;
      }
      i += 4;
      j++;
    }

    cout << aliceWhite << " " << aliceBlack << " " << bobWhite << " " << bobBlack << endl;
  }
  return 0;
}