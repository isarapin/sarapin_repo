//Szyfry przestawieniowe
#include <iostream>
#include <string>

using namespace std;

int main() //To jest funkcja, w ktorej wszystko sie odbywa
{
  string s;
  unsigned i;

  // odczytujemy tekst

  getline(cin,s);

  // zamieniamy miejscami litery

  for (i = 0; i < s.length()-1; i += 2)
    swap(s[i],s[i+1]);

  // wyświetlamy wynik

  cout << s << endl;

  return 0;
} 
