//RUA que dado un número del 1 al 12 muestre en pantalla en mes correspondiente del año

#include <iostream>
using namespace std;

int main(){

    int num;
    string result;

    cout << "Por favor introduce un numero del 1 al 12: "; cin >> num;

    switch (num){
        case 1 : result = "Enero";      break;
        case 2 : result = "Febrero";    break;
        case 3 : result = "Marzo";      break;
        case 4 : result = "Abril";      break;
        case 5 : result = "Mayo";       break;
        case 6 : result = "Junio";      break;
        case 7 : result = "Julio";      break;
        case 8 : result = "Agosto";     break;
        case 9 : result = "Septiembre"; break;
        case 10: result = "Octubre";    break;
        case 11: result = "Noviembre";  break;
        case 12: result = "Diciembre";  break;
        default: result = "Mes no valido";
    }
    
    if (result != "Mes no valido"){
        cout << "El numero " << num << " corresponde al mes " << result << endl;
    } else{
        cout << result << endl;
    }
    
    system("pause");
    return 0;

}