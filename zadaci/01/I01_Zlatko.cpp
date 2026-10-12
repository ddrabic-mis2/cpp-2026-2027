// Zlatko | Infokup 2026, zupanijska razina, 7. razred.
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  //cin >> n >> x; -- slijedeće 2 linije su identične s ovom linijom, ali su razdvojene radi lakšeg unosa
  cin >> n;
  cin >> x;
  int fB=4, fV=4, fN=2; // početna formacija - ujedno i vrijednost u X-toj minuti
  int M, RA, BR, VE, NA; // varijable koje će služiti za unos
  for (int i = 0; i < n; i++) {
    cin >> M >> RA >> BR >> VE >> NA;
    // odradimo sve promjene u formaciji, ako je M<=X, inače preskočimo
    if (M <= x) {
      fB=BR;
      fV=VE;
      fN=NA;
    }
  }
  // s koliko igrača je Zlatkov tim završio utakmicu
  cout << BR+VE+NA << '\n';
  cout << fB+fV+fN << '\n';
  cout << fB << '-' << fV << '-' << fN << '\n';

  return 0;
}