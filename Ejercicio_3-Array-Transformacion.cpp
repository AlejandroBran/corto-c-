#include <iostream>

using namespace std;

int main(){

    int n;

   
    cout << "\n<|||>Transformacion de numeros con Array<|||>\n";
    cout << "\nIngrese la cantidad de numeros ha transformar o cero para salir: ";
    cin >> n;
    

    int Numeros_Array [n];

    for(int i = 0; i<n; i++){

        cout << "\nIngrese el numero ha transformar: ";

        cin >> Numeros_Array [i];
    }
    for(int j = 0; j<n; j++){
        if(Numeros_Array [j] %2 == 0){

            Numeros_Array [j] /=2;
        }else{
            Numeros_Array[j] *= 10;

        }
    }
    for(int k = 0; k<n; k++){

        cout <<"\n<-|||->Numeros Transformados<-|||->  " <<Numeros_Array[k];
    }
    for (int b = 0; b<n; ++b){

        cin >> Numeros_Array[b];
        if (Numeros_Array[b] < 0){
         cout << "\nHaz ingresado un numero negativo. ";
        }
        
    }
    for(int c = 0; c<n; c++){

        if(Numeros_Array[c]!=0){
            cout << "\nPrograma cerrado o haz ingresado cero. ";
        }
    }


    return 0;
}