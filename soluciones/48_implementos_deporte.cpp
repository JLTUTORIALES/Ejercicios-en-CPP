//RUA que lea dos deportes y muestre los implementos utilizados en cada deporte

#include <iostream>
using namespace std;

int main(){

    int deporte;
    string implementos;

    do{
        cout << "ELIGA UN DEPORTE " <<endl;
        cout << "0: FUTBOL" << endl;
        cout << "1: BALONCESTO" << endl;
        cout << "2: AJEDREZ" << endl;
        cout << "3: NATACION" << endl;
        cout << "\n-->" << endl; cin >> deporte;
    } while (deporte < 0 || deporte > 3);

    switch (deporte){
        case 0: implementos = "CAMISETA\nPANTALONETA\nCALCETINES\nCANILLERAS\nZAPATILLAS\n"; break;
        case 1: implementos = "CAMISETA SIN MANGAS\nPANTALONETA\nCALCETINES\nZAPATOS O BOTAS\n"; break;
        case 2: implementos = "TABLERO DE AJEDREZ\nPIEZAS\nDOS JUGADORES\nSILLAS\nMESA"; break;
        case 3: implementos = "GORRO DE NATACION\nGAFAS DE NATACION\nTAPONES PARA OIDOS\n"; break;
        default: implementos = "NINGUNO"; break;
    }

    cout << "LOS IMPLEMENTOS CORRESPONDIENTES SON: "<< endl;
    cout << implementos << endl;


    system("pause");
    return 0;
}