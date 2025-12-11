#include <iostream>
#include <string>

using namespace std;

/*
    size() e length()
    TODO: stampa la lunghezza della string passata in input
*/
void lunghezzaStringa(string stringa){
    //modifica
    cout << "Da implementare" << endl;

}

/*
    find()
    TODO: immettere una stringa da tastiera e comunicare all'utente se è presente la parola "ciao"
            se la parola è presente, stampare "La parola ciao è presente"
            altrimenti stampare "La parola ciao NON è presente"
*/
void trovaCiao(string stringa){

    cout << "Da implementare" << endl;
    
}


/*
    replace()
    TODO: sostituire la parola "pizza" con la parola "pasta" e stampare la nuova stringa
*/
void sostituisciPizzaConPasta(string stringa){
    
    cout << "Da implementare" << endl;
    
}


/*
    substr()
    TODO: estrarre e stampare la prima parola della stringa passata in input

    HINT: la prima parola termina al primo spazio (trovabile con find())
*/
void stampaPrimaParola(string stringa){
    // TODO

    cout << "Da implementare" << endl;
    
}


/*
    insert()
    TODO: inserire alla fine della stringa passata in input " Giovanni!" e stampare la nuova stringa
*/
void aggiungiGiovanni(string frase){

    cout << "Da implementare" << endl;
    
}

int main()
{

    string str;

    cout << "Inserire valore stringa: ";
    getline(cin, str);


    lunghezzaStringa(str);
    //trovaCiao(str);
    //sostituisciPizzaConPasta(str);
    //stampaPrimaParola(str);
    //aggiungiGiovanni(str);
    


    return 0;
}
