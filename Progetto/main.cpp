using namespace std;

#include "Matrice.h"
#include <iostream>

int main() {
    Matrice<int> A (3,2, {2, 4, 1, 2, 5, 7});
    Matrice<int> B (3,2, {1, 2, 2, 1, 5, 7});
    Matrice<float> C (3,2, {2.1, 3.4, 1, 2, 1, 1.1});
    Matrice<float> D (2,2, {1.2, 2.2, 3.4, 4.3});





    cout << " matrice A= " << endl;
    cout << A.toString() << endl;





    cout << " matrice B= " << endl;
    cout << B.toString() << endl;




    cout << " matrice C= " << endl;
    cout << C.toString() << endl;






    cout << " matrice D= " << endl;
    cout << D.toString() << endl;






    cout<< "A + B = " << endl;
    Matrice<int> matriceSomma = A+B;
    cout << matriceSomma.toString() << endl;


    cout<< " C * D = " << endl;
    Matrice<float> matriceProdotto = C*D;
    cout << matriceProdotto.toString() << endl;

    cout<< " A trasposta : " << endl;
    Matrice<int> trasposta = A.trasposizione();
    cout << trasposta.toString() << endl;



    cout<< " A * 3 =" <<endl;
    Matrice<int> matriceProdotto2= A*3;
    cout << matriceProdotto2.toString() << endl;



    return 0;




}
