#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int r=0;
  while(n>0){
    r=r*10+n%10; // prethoni rezultat pomnožimo s 10 (pomak u lijevo) te dodamo jedinice - ostatak pri dijeljenju s 10
    n/=10; // uklonimo jedinice iz broja
  }
  // ternarni operator za ispis rezultata
  //cout << (r==x ? "DA" : "NE") << '\n';
  cout << r << '\n';

  return 0;
}