//Duze liczby fibonacieg o
#include <iostream>
#include <string>

using namespace std;

// Oblicza sum� podanych liczb
//----------------------------
string dodaj(string & x, string & y)
{
  
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
  string f0,f1,f;
  unsigned int i,n;

  // odczytujemy n

  cin >> n;

  // obliczamy fn



  // wy�wietlamy wynik

  cout << f << endl;

  return 0;
} 
