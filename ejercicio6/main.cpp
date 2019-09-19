#include <iostream>
using namespace std;

int main(){
  int num;
  int digito;
  int contadorpar=0;
  int contadorimpar=0;
  int total=0;
  
  cout<<"ingrese numero de 3 digitos: ";
  cin>>num;
  if (num/100!=0){
    do{
      digito=num%10;
      if(digito%2==0)
        contadorpar++;
      if(digito%2!=0)
        contadorimpar++;
      num=num/10;
      cout<<digito<<endl;
      
    }while(num!=0);
    
    total=contadorpar + contadorimpar;
    
      cout<<"hay "<<contadorpar<<" par"<<endl;
      cout<<"hay "<<contadorimpar<<" impar"<<endl;
      cout<<"hay "<<total<<" digitos"<<endl;}
  else
    cout<<"tiene que ser de 3 digitos";

  return 0;
}
