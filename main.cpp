#include <iostream>
using namespace std;

//DECLARACIONES DE FUNCIONES. 

int main()
{
int a [5], b[5], i, k=0, h=0;

for (i = 0; i<5; i++)
{
cout << "\nIngrese a["<< i<< "]=";
cin >> a [i];
}

for (i=0; i<5; i++)
{
  if (a[i]%2 == 0)
  {
    b[k] = a[i]; k++;
  }
}

cout << "\nLos numeros pares son:"<< endl;

for (i=0;i<k;i++)
{
  cout << endl <<"b["<<i<<"]="<<b[i];
}

}
