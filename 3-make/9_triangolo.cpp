#include <iostream>

using namespace std;

class triangolo{
    private:
        float lato1;
        float lato3;
        float lato2;
    public:
        float setLato1(float nuovo_lato1){
            lato1=nuovo_lato1;
        }
        float setLato2(float nuovo_lato2){
            lato2=nuovo_lato2;
        }
        float setLato3(float nuovo_lato3){
            lato3=nuovo_lato3;
        }
        //isoscele,
        float calcolaPerimetro(){
            float p = (lato1 + lato2 + lato3);
            return p;
        }
        //float area
};

int main()
{
    triangolo t;
    float lato1,lato2,lato3;
    cout << "Inserisci i 3 lati del triangolo" << endl;
    cout << "Lato 1: ";
    cin >> lato1;
    t.setLato1(lato1);
    cout << "Lato 2: ";
    cin >> lato2;
    t.setLato2(lato2);
    cout << "Lato 3: ";
    cin >> lato3;
    t.setLato3(lato3);
    cout << "Perimetro: " << t.calcolaPerimetro();
     
    return 0;
}
