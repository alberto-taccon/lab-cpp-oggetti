/*
Realizza in C++ una classe chiamata Data che rappresenti una data del calendario gregoriano.
La classe deve consentire di memorizzare una data, garantire che i valori inseriti siano corretti e permetterne la visualizzazione in diversi formati.

La classe deve contenere tre attributi privati che rappresentano il giorno, il mese e l’anno. Deve essere presente un costruttore di default che inizializza la data al valore 01/01/1980. Deve inoltre essere presente un costruttore con parametri che riceve giorno, mese e anno; nel caso in cui la data fornita non sia valida, la data deve essere impostata al valore di default.

La classe deve assicurare che la data sia valida secondo il calendario gregoriano. In particolare, il mese deve essere compreso tra 1 e 12, il giorno deve essere coerente con il mese e con l’anno e il mese di febbraio deve tenere conto degli anni bisestili.

Devono essere implementati i metodi get e set per ciascun attributo. I metodi set devono modificare il valore solo se la data risultante è valida; in caso contrario, la data non deve essere modificata.

La classe deve inoltre fornire due metodi per la stampa della data: uno nel formato numerico gg/mm/aaaa e uno nel formato testuale gg mese aaaa, in cui il nome del mese deve essere scritto in italiano.*/
#include <iostream>
#include <string>

using namespace std;

class Data {
    private:
        int giorno;
        int mese;
        int anno;
        string mesi[12] = {"gennaio", "febbraio", "marzo", "aprile", "maggio", "giugno", "luglio", "agosto", "settembre", "ottobre", "novembre", "dicembre"};
        int giornimese[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        bool isBisestile(int anno) {
            return (anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0); //soluzione di chatgpt
        }

        bool isDataValida(int g, int m, int a) {
            bool valido = true;
            if (m < 1 || m > 12) {
                valido = false;
            }
            if (g < 1) {
                valido = false;
            }
            if (isBisestile(a)) {
                giornimese[1] = 29; // Febbraio ha 29 giorni negli anni bisestili
            }
            if (g > giornimese[m - 1]) {
                valido = false;
                cout << "Data non valida. Impostata un valore consentito." << endl;
            }
            return valido;
        }

    public:
        Data() : giorno(01), mese(1), anno(1980) {}

        Data(int g, int m, int a) {
            if (isDataValida(g, m, a)) {
                giorno = g;
                mese = m;
                anno = a;
            } 
            else {
                giorno = 1;
                mese = 1;
                anno = 1980;
            }
        }

        // Metodi get e set
        int getGiorno(){ 
            return giorno; 
        }
        int getMese() { 
            return mese; 
        }
        int getAnno() { 
            return anno; 
        }

        void setGiorno(int g) {
            if (isDataValida(g, mese, anno)) {
                giorno = g;
            }
        }
        void setMese(int m) {
            if (isDataValida(giorno, m, anno)) {
                mese = m;
            }
        }
        void setAnno(int a) {
            if (isDataValida(giorno, mese, a)) {
                anno = a;
            }
        }
        //stampe
        void stampaNumerica() {
            if (giorno < 10)
                cout << "0";
            cout << giorno << "/";
            if (mese < 10)
                cout << "0";
            cout << mese << "/" << anno << endl;
        }

        void stampaTestuale() {
            cout << giorno << " " << mesi[mese - 1] << " " << anno << endl;
        }
};

int main() {
    Data data1;
    int g, m, a;
    cout << "Inserisci una giorno: " << endl;
    cin >> g;
    cout << "Inserisci un mese: " << endl;
    cin >> m;
    cout << "Inserisci un anno: " << endl;
    cin >> a;
    Data data2(g, m, a); 
    data1.stampaNumerica();
    data1.stampaTestuale();
    data2.stampaNumerica();
    data2.stampaTestuale();
    Data data3(31, 2, 2021); // Data non valida
    data3.stampaNumerica();
    data3.stampaTestuale();
    return 0;
}