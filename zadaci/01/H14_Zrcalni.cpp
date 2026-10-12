// Zrcalni | HONI 2021/2022, 1. kolo.
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  bool zrcalni=false;
  if (n==0 || n==8)
  {
    // imamo samo jednoznamenkast broj koji je zrcalni
    zrcalni=true;
  }
  else  if (n%10!=0)
  {
    while(n>0){
      if (n%10!=0 && n%10==8) {
        break;
      }
      n/=10;
    }
  }
  // ternarni operator za ispis rezultata
  cout << (zrcalni ? "DA" : "NE") << '\n';

  return 0;
}