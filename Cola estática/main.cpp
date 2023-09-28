#include "Cola.h"

using namespace std;

int main()
{
    Cola colaConstancias;
    Constancia x;
    Constancia c("--", "--", 0, 0.0);

    int opc = 0;
    while(opc != 3){

        cout<< "1.Dar de alta solicitud de constancia\n";
        cout<< "2.Elaborar constancia\n";
        cout<< "3.Salir\n";
        cout<< " --->";
        cin>> opc;

        switch(opc){
            case 1:
                if(colaConstancias.llena())
                    cout<< "\nLa cola esta llena\n";
                else{
                    cout<< "\n- Datos de la solicitud -\n";
                    cin>> x;
                    colaConstancias.enqueue(x);
                }
                break;
            case 2:
                cout<< "\n";
                cout<< colaConstancias.dequeue(c);
                break;
            case 3:
                break;
            default:
                cout<< "Ingresa una opcion valida\n";
        }

        cout<< "\n\n";
    }

    return 0;
}
