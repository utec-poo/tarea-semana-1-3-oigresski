#include <iostream>
using namespace std;
int cantseg,horas,min,seg,aux, mi;
int main(){
 cout << "introduce segundos: ";
 cin >> cantseg;
  //instrucciones matemáticas
  horas = cantseg/3600;
  aux = cantseg%3600;
  mi = aux/60;
  seg = aux%60;
 cout << "horas " << horas;
 cout <<  "minutos "<< mi;
 cout << "segundos "<< seg;

 return 0;
}
