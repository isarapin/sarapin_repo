//Szyfr Cezara
#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  int i;
long a[];
// odczytujemy wiersz znak�w

  getline(cin,s);

// zamieniamy ma�e litery na du�e
// i kodujemy szyfrem cezara

  for(i = 0; i < s.length(); i++)
  {
    s[i] = toupper(s[i]);
    if((s[i] >= 'A') && (s[i] <= 'Z')) s[i] = char(65 + (s[i] - 62) % 26);
  }

// wypisujemy zaszyfrowany tekst

  cout << s << endl << endl;
  return 0;
} 
