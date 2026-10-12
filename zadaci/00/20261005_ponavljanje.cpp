#include <bits/stdc++.h>
using namespace std;

int main() {
  // samo za one koji će na državno ili u finale
  // odnosno zadaci s iznimno puno unosa
  ios::sync_with_stdio(false); // PREKIDA SINKRONIZACIJU S cin i cout S c FUNKCIJAMA (scanf i printf)
  // ako se koristi, ne smije se koristiti scanf i printf
  cin.tie(nullptr); // PREKIDA VEZU S cin i cout, odnosno ne mora čekati da se završi unos prije ispisa

  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    cout << i << " ";
  }
  // niz
  int a[n]; // niz od n elemenata
  int b[] = {1, 2, 3, 4, 5}; // niz od 5 elemenata
  // ispis elemenata niza b
  for (int i = 0; i < sizeof(b)/sizeof(b[0]); i++) {
    cout << b[i] << " ";
  }
  // ispis elemenata niza b
  // unutar petlje se kreira NOVA varijabla v koja je kopija trenutnog elementa niza b
  for (int v:b) { // for each petlja, prolazi kroz sve elemente niza b
    v=v*2; // promjena vrijednosti varijable v ne utječe na elemente niza b
    cout << v << " ";
  }
  // identično kao i prije
  // automatski tip varijable v je int, jer su elementi niza b tipa int
  for (auto v:b) { // for each petlja, prolazi kroz sve elemente niza b
    v=v*2; // promjena vrijednosti varijable v ne utječe na elemente niza b
    cout << v << " ";
  }
  // ispis elemenata niza b
  // & ispred varijable v znači da se radi o REFERENCIJI na elemente niza b
  for (auto &v:b) { // for each petlja, prolazi kroz sve elemente niza b
    v=v*2; // promjena vrijednosti varijable v utječe na elemente niza b
    cout << v << " ";
  }
  // reference
  int x=5;
  int &y=x; // y je referenca na x, odnosno y i x su
  y=12;
  int *p1=&x; // p1 je pokazivač na x, odnosno p sadrži adresu varijable x
  int *p2=nullptr; // p2 je pokazivač koji ne pokazuje ni na što, odnosno ne sadrži adresu varijable
  cout << x << " " << y << *p1 << " \n"; // ispisuje 12 12 12
  y=12;
  cout << x << " " << y << " \n"; // ispisuje 12 12
  cout << '\n';
  // cjelobrojno djeljenje
  cout << 5/2 << " \n"; // ispisuje 2, jer je rezultat cjelobrojno djeljenje
  cout << 5.0/2 << " \n"; // ispisuje 2.5, jer je rezultat realan broj
  int broj=5;
  int djelitelj=2;
  cout << (double)broj/djelitelj << " \n"; // ispisuje 2.5
  // (double)broj je eksplicitno pretvaranje tipa varijable broj u tip double
  return 0; // nije nužno, ali funkcija predviđa povratnu vrijednost
}