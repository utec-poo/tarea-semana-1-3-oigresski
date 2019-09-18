#include <iostream>
#include "Tipos.h"
using namespace std;

int main(){
    char letra;
    int numero;
    int x;    
    cout<<"letra:";
    cin>>letra;
    cout<<"numero:";
    cin>>numero;
    x=numero%2;
   
    if (letra== 'a' or 'c' or 'e' or 'g'){
        
        if (x==0)  
            cout<<"es negro1";
        else
            cout<<"es blanco1";}
    else{
    if (letra== 'b' or 'd' or 'f' or 'h'){
        if (x==0)
            cout<<"es blanco2";
        else
           cout<<"es negro2";}}
    
    return 0;
    
}d
