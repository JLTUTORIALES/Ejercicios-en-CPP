//*Evaluar la función y=5/3x + 3/2x + 8 cuando x–> -5…20 (rango de -5 hasta 20)

#include <iostream>

using namespace std;

double ecuacion(int x){ return ((5.0/3.0) * x) + ((3.0/2.0) * x) + 8; }

int main(){
    cout << "X \t Y" << endl << endl;
    for (int i = -5; i <= 20; i++){
        cout << i << "\t" << ecuacion(i) << endl;
    }
    
    system("pause");
    return 0;
}