#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;

    int arr[n], numberOfTwo = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      numberOfTwo += arr[i] == 2;
    }
    int pre = 0, k = 0;
    for (int i = 0; i < n - 1; i++)
    {
      if (arr[i] == 2)
      {
        pre++;
      }
      if (pre * 2 == numberOfTwo)
      {
        k = i + 1;
        break;
      }
    }
    if (k == 0)
      cout << "-1\n";
    else
      cout << k << endl;
    //* 2^1000 is huge so below method won't work
    // unsigned long long int arr[n], pre[n], suf[n];
    // for (int i = 0; i < n; i++)
    //   cin >> arr[i];
    // unsigned long long int preRes = arr[0];
    // pre[0] = preRes;
    // for (int i = 1; i < n; i++)
    // {
    //   preRes = preRes * arr[i];
    //   pre[i] = preRes;
    // }
    // unsigned long long int sufRes = arr[n - 1];
    // suf[n - 1] = sufRes;
    // for (int i = n - 2; i >= 0; i--)
    // {
    //   sufRes = sufRes * arr[i];
    //   suf[i] = sufRes;
    // }
    // int k = 0, yes = 0;
    // for (int i = 0; i < n - 1; i++)
    // {
    //   if (pre[i] == suf[i + 1])
    //   {
    //     k = i + 1;
    //     yes = 1;
    //     break;
    //   }
    // }
    // if (yes == 1)
    //   cout << k << endl;
    // else
    //   cout << "-1" << endl;
  }
  return 0;
}