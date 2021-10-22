/*1. Se tiene un grupo de N personas, para cada una de las cuales se ha elaborado una tarjeta
de registro indicando el sexo y los puntos obtenidos en un examen. Se desea conocer con
base en los promedios de los puntos obtenidos, cual sexo tuvo mejor desempeño.*/

#include <iostream>
#include <array>
#include <unistd.h>

using namespace std;

array<float, 2> get_info(int visitor){
    system("cls");
    array<float, 2>response;

    do{

        cout << "================================" << endl;
        cout << "BIENVENIDO, VISITANTE No. " << visitor << endl;
        cout << "================================\n" << endl;
        cout << "POR FAVOR, ELIGE TU SEXO: " << endl;
        cout << "0: MASCULINO" << endl;
        cout << "1: FEMENINO" << endl;
        cout << "\n --> "; cin >> response[0];

    } while (response[0] < 0 || response[0] > 2);

    cout << "\nPOR FAVOR, INTRODUCE TU PUNTAJE OBTENIDO:" << endl;
    cout << "\n --> "; cin >> response[1];

    system("cls");
    cout << "================================" << endl;
    cout << "GRACIAS POR PARTICIPAR" << endl;
    cout << "================================" << endl;
    sleep(1);

    return response;
}

int main(){
    
    float fpoints = 0, mpoints = 0, fpromedio = 0, mpromedio = 0;
    float cmale = 0, cfemale = 0;

    int cantidad_personas;

    cout << "CUANTAS PERSONAS PARTICIPARAN?: "; cin >> cantidad_personas;
    
    for (int i = 0; i < cantidad_personas; i++){
        array<float, 2> points = get_info(i + 1);
        switch ((int)points[0]) {
            case 0: mpoints += points[1]; cmale++; break;
            case 1: fpoints += points[1]; cfemale++; break;
        }
    }

    fpromedio = fpoints / cfemale;
    mpromedio = mpoints / cmale;

    system("cls");

    cout << "================================"   << endl;
    cout << "RESULTADOS DE LA ENCUESTA"          << endl;
    cout << "================================\n" << endl;
    cout << "MUJERES: " << (cfemale/cantidad_personas) * 100  << "%. \tHOMBRES: " << (cmale/cantidad_personas) * 100 << "%.\n" <<endl;
    cout << "PROMEDIO MUJERES: \t" << fpromedio  << endl;
    cout << "PROMEDIO HOMBRES: \t" << mpromedio  << endl;
    cout << "\n================================" << endl;
    cout << "FIN DE LA EJECUCION DEL PROGRAMA"   << endl;
    cout << "================================\n" << endl;
    
    system("pause");
    return 0;
    
}