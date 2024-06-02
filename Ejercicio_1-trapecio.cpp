#include <iostream>

using namespace std;

int main(){

   float Area = 0.00;

   float altura1 = 0.00;

   float altura2 = 0.00;
  
   float Base = 0.00;

    cout << "\n<>><>---Calculo de la area de un trapecio---<><>\n";

    do
    {
        cout << "\nEscribe la altura1: ";
        cin >> altura1;
        if (altura1 <= 0) {
        cout << "\nHaz ingresado un dato negativo intenta con un dato entero positivo.\n";
        
        }
    } while (altura1 <= 0);
    
    do
    {
        cout << "\nEscribe la altura2: ";
        cin >> altura2;
        if (altura2 <= 0) {
        cout << "\nHaz ingresado un dato negativo intenta con un dato entero positivo.\n";
        
        }
    }while(altura2 <= 0);

    do
    {
        cout << "\nEscribe la Altura: ";
        cin >> Base;
        if (Base <= 0) {
        cout << "\nHaz ingresado un dato negativo intenta con un dato entero positivo.\n";
        
        }
    }while(Base <= 0);

    if( Area = ((altura1 + altura2 )/ 2) * Base){

        cout << "\nEl Area es: "<< Area<<"\n";

    }
    else
    {
        Area != 0;
        cout << "\nError... "<< "\n";

    }

    return 0;
}