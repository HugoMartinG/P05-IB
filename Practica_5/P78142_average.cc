#include<iostream>
using namespace std;

int main() {
    int numero, suma=0, prom, cont=1;

    float resultado;
    

    while (numero>=0){
        cin>>numero;
        suma +=numero;
        cont++;
        if (numero>=0){
        suma+=numero;
        cont++;


        }
    }
    prom=suma/cont;
    cout<<prom;



   




    return 0;
}
