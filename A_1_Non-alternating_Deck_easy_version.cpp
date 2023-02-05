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

    long long int i = 1, j = 1, totalCardsGiven = 0;

    while (cards > 0)
    {
      if (j % 2 != 0)
      {
        //* alice
        alice += min(i, cards);
        cards -= min(i, cards);
      }
      else
      {
        //* bob
        bob += min(i, cards);
        cards -= min(i, cards);
      }
      i += 4;
      j++;
    }

    cout << alice << " " << bob << endl;
  }
  return 0;
}