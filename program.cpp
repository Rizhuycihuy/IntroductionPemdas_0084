#include<iostream>
using namespace std;

float a,t,pembagi;

void input() 
{
  cout << "masukkan alas : " ;
  cin >> a;
  cout << "masukkan tinggi : " ;
  cin >> t;
}

float LuasSegitiga(float a, float t, float pembagi)
{
    return a*t/2;
}

void output ()
{
  cout << "Hasil nya = " << LuasSegitiga(a,t,pembagi) ;  
}

int main()
{
  input();
  output();
}
