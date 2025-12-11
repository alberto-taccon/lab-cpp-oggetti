/***************************************************************************
 *                         Username generator                              *
 *                                                                         *
 *  Capire il funzionamento della funzione minuscolo                       *
 *  e implementare le due funzioni usernameGenerator                       *
 **************************************************************************/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;


// Funzione che trasforma una stringa in minuscolo
string minuscolo(string s){
    for(int i = 0; i < s.length(); i++)
        s.at(i) = tolower(s.at(i));
    return s;
}


string usernameGenerator(string nome, string cognome){
/*
    TODO: Implementare la funzione affinchè, a partire da 2 stringhe nome e cognome
          generi in output una stringa contenente uno username utente nella forma:
          prima lettera del nome + tutto il cognome (tutto minuscolo)
*/
    string nome2=nome.substr(0,1);
    string cognome2=minuscolo(cognome);
    string username=nome2.insert(nome2.size(), cognome2);
    return username;
}


string usernameGenerator(string nomeCognome){
    string nome = nomeCognome.substr(0, 1);
    string cognome = nomeCognome.substr(5, nomeCognome.size());
    cognome=minuscolo(cognome);
    string username = nome.insert(nome.size(), cognome);
    return username;
}

// main con testing
int main()
{

    string nome = "Mario";
    string cognome = "Rossi";

    string nomeCognome = "Luca Bianchi";

    string username1 = usernameGenerator(nome, cognome);

    string username2 = usernameGenerator(nomeCognome);
    cout << "Primo utente: " << nome << " " << cognome << ". Username: " << username1 << endl;
    cout << "Secondo utente: " << nomeCognome << ". Username: " << username2 << endl;

    return 0;
}
