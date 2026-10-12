#include <bits/stdc++.h>
using namespace std;

int main() {
  // vektori, unutar <> se navodi tip podataka koji vektor sadrži, npr. int, double, string...
  vector<int> v1; // deklaracija vektora - nema elemenata
  for (int i = 0; i < 5; i++) {
    //v1.push_back(2); // dodavanje elemenata na kraj vektora
    v1.emplace_back(2); // dodavanje elemenata na kraj vektora
    // povećava se mjesto u memoriji
  }
  vector<int> v2(5); // deklaracija vektora s 5 elemenata
  vector<int> v3(5, 10); // deklaracija vektora s 5 elemenata, svaki element ima vrijednost 10
  vector<int> v4; // deklaracija vektora
  // rezervacija prostora za n elemenata, ali vektor nema elemenata
  int n=5;
  //cin >> n;
  v4.reserve(n);
  for (int i = 0; i < n; i++) {
    v4[i]=2; // dodavanje elemenata na kraj vektora
    // povećava se mjesto u memoriji
  }
  cout << "kraj programa\n";
  return 0; // nije nužno, ali funkcija predviđa povratnu vrijednost
}