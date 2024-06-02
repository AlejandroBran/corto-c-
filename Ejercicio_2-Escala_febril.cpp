#include <iostream>

using namespace std;

int main(){
    cout << "\n<--->""Niveles de tempereaturas""<--->\n";
    float Temperatura = 0.00;
 
    
    cout << "\nIngrese su temperatura: ";
    cin >> Temperatura;

   

    if(Temperatura >= 37.4 && Temperatura <= 37.9){

        cout << "\nFebricula o \n";
    }
    else if (Temperatura >= 38.0 && Temperatura <= 38.9){

        cout << "\nFiebre moderada. \n";
    }
    else if(Temperatura >= 39.0 && Temperatura <= 39.9){
        cout << "\nFiebre alta. \n";
    }
    else if(Temperatura >= 40.0 && Temperatura <= 41.5){
        cout << "\nFiebre muy alta. \n";
    }
    else if(Temperatura >= 41.5){
        cout << "\nHperpirexia. \n";
    }
    else
    {
        cout << "\nHaz ingresado un dato no valido. \n";
    }

    
    return 0;   
}


