#include <iostream>
#include <string>

using namespace std;
 /********************************************************************************************
 *                                  Implementazione classe Rettangolo                        *
 *                                                                                           *
 *   Implementare una classe Rettangolo, che modelli la figura geometrica                    *
 *   Implementarla in maniera coerente ai seguenti requisiti:                                *
 *   - si vuole calcolare l'area e il perimetro del rettangolo                               *
 *   - si vuole stampare le informazioni del rettangolo                                      *
 *                                                                                           *
 *********************************************************************************************/

class Rettangolo {
    private:
    // Campi
        float base;
        float altezza;
    public:
    // Metodi set... e get...
        void setBase(float nuova_base){
            base = nuova_base;
        }
        void setAltezza(float nuova_altezza){
            altezza = nuova_altezza;
        }
        float getBase(){
            return base;
        }
        float getAltezza(){
            return altezza;
        }
    // Altri metodi
        float calcolaPerimetro(){
            return (base+altezza)*2;
        }
        float calcolaArea(){
            return base*altezza;
        }
};

int main()
{
    Rettangolo r;
    float n_base, n_altezza;

    // TODO testare
    cout << "Inserisci base: ";
    cin >> n_base;
    r.setBase(n_base);
    cout << "Inserisci altezza: ";
    cin >> n_altezza;
    r.setAltezza(n_altezza);

    cout << "La base e': " << r.getBase() << endl;
    cout << "La altezza e': " << r.getAltezza() << endl;
    cout << "Il perimetro e': " << r.calcolaPerimetro() << endl;
    cout << "L'area e': " << r.calcolaArea() << endl;
    return 0;
}
