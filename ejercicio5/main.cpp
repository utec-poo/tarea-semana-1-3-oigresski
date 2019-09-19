#include <iostream>
using namespace std;

int main(){
  int contenedor;
  int contadorA=0;
  int contadorB=0;

  int num;
  int suma=0;

    do{ 
   cout<<"ingrese varios numeros: "; 
   cin>>num; 
    
   if(num%2==0){
     contadorA++;
     if(num==0)
      contadorA--;
     }
   else
    contadorB++;
    }
    while(num!=0);
  
 int total=contadorA+contadorB;
 cout<<"numeros totales"<<total<<endl;
 cout<<"numeros pares"<<contadorA<<endl; 
 cout<<"numeros impares"<<contadorB<<endl;
 return 0;
    
}
