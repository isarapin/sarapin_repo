//Mnozenie duzych liczb
#include <iostream>
#include <string>
#include <math>
using namespace std;

// Oblicza sum� podanych liczb
//----------------------------
string dodaj(string & x, string & y)
{
  string z;
  int p,w,i,j,k,n;

  i = x.length();
  j = y.length();

  n = i; if(j < i) n = j;

  p = 0;

  z = "";

  for(k = 1; k <= n; k++)
  {
    w  = (int)(x[--i]) + (int)(y[--j]) + p - 96;
    p  = w / 10;
    z = (char)((w % 10) + 48) + z;
  }

  while(i)
  {
    w  = x[--i] + p - 48;
    p  = w / 10;
    z = (char)((w % 10) + 48) + z;
  }

  while(j)
  {
    w  = y[--j] + p - 48;
    p  = w / 10;
    z = (char)((w % 10) + 48) + z;
  }

  if(p) z = (char)(p + 48) + z;

  if(z == "") z = "0";

  return z;  // zwracamy wynik dodawania

}

//********************
//** PROGRAM G��WNY **
//********************

int main()
{
  string a,w;
  unsigned int b;

  // odczytujemy liczby do mno�enia

  cin >> a >> b;

  w = "0";           // zerujemy �a�cuch wyj�ciowy

  while(true)        // wykonujemy mno�enie
  {
    if(b & 1)   w = dodaj(w,a);
    if(b >>= 1) a = dodaj(a,a); else break;
  }

  cout << w << endl; // wy�wietlamy wynik

  return 0;

} 
