#include <iostream>
#include <string>
#include <cctype>   // per toupper
using namespace std;

 // numero di email
const int N = 12;

// array di email
string emails[N] = {
    "marco.rossi@studio.alberghetti.it",
    "anna.bianchi@studio.alberghetti.it",
    "luca.verdi@studio.alberghetti.it",
    "giulia.moretti@studio.alberghetti.it",
    "alessandro.ferrari@studio.alberghetti.it",
    "chiara.galli@studio.alberghetti.it",
    "matteo.martinelli@studio.alberghetti.it",
    "sara.ricci@studio.alberghetti.it",
    "stefano.colombo@studio.alberghetti.it",
    "elena.sartori@studio.alberghetti.it",
    "gianluca.marini@studio.alberghetti.it",
    "marta.leone@studio.alberghetti.it"
    };


/*
    TODO: la seguente funzione prende in input una string s minuscola e modifica il primo carattere rendendolo maiuscolo.
    Esempio: "marco" -> "Marco", "rossi" -> "Rossi"

    Hint: usare la funzione toupper(), vedi funzione minuscolo() in esercizio 3_userGenerator.cpp

*/
string primoCarattereMaiuscolo(string &s) {

}

int main() {

    // array destinazione per "Nome Cognome"
    string nomiCognomi[N];
    string app, nome, cognome;


    // ciclo su tutte le email
    for (int i = 0; i < N; i++) {
        string email = emails[i]; //email corrente
        email.erase(email.find("@"), email.size());
        app = email.find(".");
        nome = email.substr(0,app);
        cognome = email.substr(app, email.size());
        // TODO: spezzare la stringa in due parti diverse: nome e cognome (utilizzare il punto come criterio per separare)

        // TODO: rendere maiuscolo il primo carattere di nome e cognome (usare la funzione primoCarattereMaiuscolo)
        nomiCognomi[i]=nome+cognome;
        // TODO: inserire in nomiCognomi[i] l'insieme delle due stringhe (concatenarle con l'operatore +)

    }

    // stampa il risultato
    cout << "Risultato:\n";
    for (int i = 0; i < N; i++) {
        cout << nomiCognomi[i] << endl;
    }

    return 0;
}
