//Szyfry przestawieniowe
#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  unsigned i;

  // odczytujemy tekst



  // zamieniamy miejscami litery

  for (i = 0; i < s.length()-1; i += 2)
    swap(s[i],s[i+1]);

  // wyœwietlamy wynik

  cout << s << endl;

  return 0;
} 
