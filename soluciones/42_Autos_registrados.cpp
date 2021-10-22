/*En un determinado peaje se desea saber cuántos carros particulares y cuántos buses pasaron
en un día, lo mismo que el promedio de personas que viajan en carro particular y el promedio
de personas que viajan en bus. Se debe tener en cuenta que por cada vehículo que pase, se
debe indagar por el tipo de vehículo que es y el número de pasajeros que transporta.*/

#include <iostream>
#include <unistd.h>

using namespace std;

int main(){

    int option, autos = 0, buses = 0, diferentes = 0;

    while (true){
        
        system("cls");

        cout << "\nPOR FAVOR, REALICE UNA OPERACION\n" <<endl;
        cout << "1: REGISTAR EL PASO DE UN AUTO PARTICULAR" << endl;
        cout << "2: REGISTAR EL PASO DE UN BUS" << endl;
        cout << "3: REGISTAR EL PASO DE OTRO TIPO DE TRANSPORTE" << endl;
        cout << "4: FINALIZAR EL DIA" << endl;
        cout << "\n--> "; cin >> option;

        if (option == 4){ break; }
        else {
            switch (option){
                case 1: autos ++;      break;
                case 2: buses ++;      break;
                case 3: diferentes ++; break;
                default: system("cls"); cout << "OPCION NO VALIDA" <<endl; sleep(1); break;
            }
        }

        if (option == 1 || option == 2 || option == 3){
            system("cls"); cout << "SE REGISTRO LA OPCION" <<endl; sleep(1);
        }
    }

    system("cls");
    cout << "\nAL FINALIZAR EL DIA, SE OBTUVIERON LOS SIGUIENTES DATOS:" << endl << endl;
    cout << "AUTOS QUE PASARON: \t\t" << autos << endl;
    cout << "BUSES QUE PASARON: \t\t" << buses << endl;
    cout << "VEHICULOS DISTINTOS PASARON: \t" << diferentes << endl;

    system("pause");
    return 0;
    
}