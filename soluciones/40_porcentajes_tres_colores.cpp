/*En una galería se pregunta 10 visitantes de los colores luz primarios (rojo, verde, azul) les
gusta más. Elabore un algoritmo que evalúe en porcentaje el gusto del público*/

#include <iostream>
#include <unistd.h>

using namespace std;

int get_info(int visitor){
    system("cls");
    int response;

    do{

        cout << "================================" << endl;
        cout << "BIENVENIDO, VISITANTE No. " << visitor << endl;
        cout << "================================\n" << endl;
        cout << "POR FAVOR, ELIGE TU COLOR FAVORITO" << endl;
        cout << "0: AZUL" << endl;
        cout << "1: VERDE" << endl;
        cout << "2: ROJO" << endl;
        cout << "\n --> "; cin >> response;

    } while (response < 0 || response > 2);

    system("cls");
    cout << "================================" << endl;
    cout << "GRACIAS POR PARTICIPAR" << endl;
    cout << "================================" << endl;
    sleep(1);

    return response;
}

int main(){
    
    double r = 0, g = 0, b = 0;

    for (int i = 0; i < 10; i++){
        switch (get_info(i + 1)){
            case 0: r++; break;
            case 1: g++; break;
            case 2: b++; break;
        }
    }

    system("cls");
    
    cout << "================================" << endl;
    cout << "RESULTADOS DE LA ENCUESTA" << endl;
    cout << "================================\n" << endl;
    cout << "ROJO: \t" << (r / 10.0) * 100 << "% = " << r << " PERSONAS" << endl;
    cout << "VERDE: \t" << (g / 10.0) * 100 << "% = " << g << " PERSONAS" << endl;
    cout << "AZUL: \t" << (b / 10.0) * 100 << "% = " << b << " PERSONAS" << endl;
    cout << "\n================================" << endl;
    cout << "FIN DE LA EJECUCION DEL PROGRAMA" << endl;
    cout << "================================\n" << endl;
    
    system("pause");
    return 0;
    
}