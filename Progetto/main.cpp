using namespace std;

#include "Matrice.h"
#include <iostream>

int main() {
    Matrice<int> A (3,2, {2, 4, 1, 2, 5, 7});
    Matrice<int> B (3,2, {1, 2, 2, 1, 5, 7});
    Matrice<float> C (3,2, {2.1, 3.4, 1, 2, 1, 1.1});
    Matrice<float> D (2,2, {1.2, 2.2, 3.4, 4.3});





    cout << " matrice A= " << endl;
    A.stampa();
    cout << endl;




    cout << " matrice B= " << endl;
    B.stampa();
    cout << endl;




    cout << " matrice C= " << endl;
    C.stampa();
    cout << endl;






    cout << " matrice D= " << endl;
    D.stampa();
    cout << endl;






    cout<< "A + B = " << endl;
    Matrice<int> matriceSomma = A+B;
    matriceSomma.stampa();
    cout << endl;


    cout<< " C * D = " << endl;
    Matrice<float> matriceProdotto = C*D;
    matriceProdotto.stampa();
    cout << endl;

    cout<< " A trasposta : " << endl;
    Matrice<int> trasposta = A.trasposizione();
    trasposta.stampa();
    cout <<endl;


    return 0;




}
