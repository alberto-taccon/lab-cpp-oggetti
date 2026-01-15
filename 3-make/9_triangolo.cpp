#include <iostream>
#include <math.h>

using namespace std;

class triangolo{
    private:
        float lato1;
        float lato3;
        float lato2;
    public:
        void setLato1(float nuovo_lato1){
            lato1=nuovo_lato1;
        }
        void setLato2(float nuovo_lato2){
            lato2=nuovo_lato2;
        }
        void setLato3(float nuovo_lato3){
            lato3=nuovo_lato3;
        }
        bool isIsoscele(){
            if(lato1==lato2 || lato1==lato3 || lato2==lato3){
                return true;
            }else{
                return false;
            }
        }
        float calcolaPerimetro(){
            float p = (lato1 + lato2 + lato3);
            return p;
        }
        float calcolaAltezza(){
            float base, altezza;
            if(lato1==lato2){
                base = lato3;
                altezza = sqrt((lato1*lato1) - ((base*base)/4));
            }else if(lato1==lato3){
                base = lato2;
                altezza = sqrt((lato1*lato1) - ((base*base)/4));
            }else{
                base = lato1;
                altezza = sqrt((lato2*lato2) - ((base*base)/4));
            }
            return altezza;
        }
        float calcolaArea(){
            float base, area;
            if(lato1==lato2){
                base = lato3;
            }else if(lato1==lato3){
                base = lato2;
            }else{
                base = lato1;
            }
            area = (base * calcolaAltezza()) / 2;
            return area;
        }

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
    cout << "\nArea: " << t.calcolaArea();
    if(t.isIsoscele()){
        cout << "\nIl triangolo e' isoscele";;
    }else{
        cout << "\nIl triangolo non e' isoscele";;
    }
    return 0;
}
