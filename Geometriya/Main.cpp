#include"Point.h"
#include"Shablon_objects.h"
#include"Line.h"
#include"Krug.h"
#include"Kvadratr.h"
#include"Pryamougolnik.h"
#include"triangle.h"
#include<iostream>
#include<stdlib.h>
#include"Cube.h"
#include"Conteiner.h"
using namespace std;
int main()
{
  cout << "Object Poin" << "\n";
  Point<char> A;
  cout << A << "\n";
  cout << "Object Line" << "\n";
  Line<char> C(15, '-');
  cout << C << "\n";
  cout << "Object Line" << "\n";
  Line<char> EE(10, '*');
  C = EE;
  cout << C<<"\n";
  cout << "Object Krug" << "\n";
  Krug<int> D(5, 2);
  cout << D<<"\n";
  cout << "Object Kvadrat" << "\n";
  Kvadrat<int> AB(5, 3);
  cout << AB<<"\n";
  cout << "Object Pryamougolnik" << "\n";
  Pryamougolnik<int> ABC(5, 2, 7);
  cout << ABC<<"\n";
  cout << "Object Cube" << "\n";
  Cube<char> ABCD(5,'*');
  cout << "proyectciya Cuba" << "\n";
  cout << ABCD<<"\n";
  cout << "Object Triangle" << "\n";
  Triangle<int> ABCDE(7, 1);
  cout << ABCDE<<"\n";

  cout << "-----------Memory----------" << "\n";
  Container Memory;
  Memory.Add(A);
  Memory.Add(C);
  Memory.Add(D);
  Memory.Add(AB);
  Memory.Add(ABC);
  Memory.Add(ABCD);
  Memory.Add(ABCDE);
  cout << Memory;
  cout << "cout 3 object" << "\n";
  Memory.out_object(3);
  cout << "Delete object 1,3" << "\n";
  cout << "--------Memory---------" << "\n";
  Memory.Delete(C);
  Memory.Delete(AB);
  cout << Memory;
  return 0;
}