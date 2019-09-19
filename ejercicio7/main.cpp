#include <iostream>

using namespace std;


int main(){
  int numero;
  
 cout<<"numero entre 10 y 30: ";
 cin>>numero;

 if(numero>=10 and  numero<=30){
   for(int i=1;i<=numero;++i)
    cout<<'*';
 }
 else
  cout<<"no es un numero entre 10 y 30";
  return 0;
}
