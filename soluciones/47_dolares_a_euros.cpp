/*. Calcular el sueldo mensual de un empleado que trabaja por horas, el pago de cada hora
trabajada depende de su categoría:*/

#include <iostream>
#include <unistd.h>

using namespace std;

int main(){

    char categoria; int horas; float valor_total;
    
    do{
        system ("cls");
        cout << "POR FAVOR INTRODUZCA LA CATEGORIA A LA QUE PERTENECE: " << endl;
        cout << "A: 26.90" << endl;
        cout << "B: 24.30" << endl;
        cout << "C: 21.50" << endl;
        cout << "\n--> "; cin >> categoria;

    } while (categoria != 'A' && categoria != 'B' && categoria != 'C');

    cout << "AHORA INTRODUZCA SUS HORAS TRABAJARAS: "; cin >> horas;

    switch (categoria){
        case 'A': valor_total = horas * 26.90; break;
        case 'B': valor_total = horas * 24.30; break;
        case 'C': valor_total = horas * 21.50; break;
    }
    system("cls");

    cout << "\nUSTED PERTENECE A LA CATEGORIA" << categoria << endl;
    cout << "TRABAJO " << horas << " HORAS Y RECIBIRA " << valor_total << " POR SU TRABAJO" << endl;

    system("pause");
    return 0;
}