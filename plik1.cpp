//sito Eratostena 

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
<<<<<<< HEAD
char ch12;
  unsigned int g,i,n,w;
=======

  unsigned int g,i,n,w, ii2;
>>>>>>> master
  bool * S;

  cin >> n;
  S = new bool[n + 1];
  for(i = 2; i <= n; i++) S[i] = true;
  g = (unsigned int)sqrt(n);
  for(i = 2; i <= g; i++)
    if(S[i])
    {
     w = i * i;
      while(w <= n)
      {
        S[w] = false; w += i;
      }
    } 
  for(i = 2; i <= n; i++) if(S[i]) cout << i << " ";
  cout << endl;
  delete [] S;
  return 0;
} 
