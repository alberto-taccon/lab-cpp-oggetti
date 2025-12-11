#include <iostream>
#include <string>

using namespace std;


void lunghezzaStringa(string stringa){
/*
    size() e length()
    TODO: stampa la lunghezza della string passata in input
*/
    cout << stringa.size() << endl;
}


void trovaCiao(string stringa){

/*
    find()
    TODO: immettere una stringa da tastiera e comunicare all'utente se è presente la parola "ciao"
            se la parola è presente, stampare "La parola ciao è presente"
            altrimenti stampare "La parola ciao NON è presente"
*/
    int app = stringa.find("ciao");
    if(app==-1)
        cout << "La parola ciao NON e' presente." << endl;
    else
        cout << "La parola ciao e' presente." << endl;
}

void sostituisciPizzaConPasta(string stringa){

/*
    replace()
    TODO: sostituire la parola "pizza" con la parola "pasta" e stampare la nuova stringa
*/
    int app = stringa.find("pizza");
    if (app==-1)
        cout << "La parola pizza non fa parte della stringa." << endl;
    else {
        stringa.replace(app, 5, "pasta");
        cout << stringa << endl;
    }
}



void stampaPrimaParola(string stringa){
    /*
    substr()
    TODO: estrarre e stampare la prima parola della stringa passata in input

    HINT: la prima parola termina al primo spazio (trovabile con find())
*/
    char appp = stringa.find(" ");
    string app = stringa.substr(0, appp);
    cout << app << endl;
}



void aggiungiGiovanni(string frase){
/*
    insert()
    TODO: inserire alla fine della stringa passata in input " Giovanni!" e stampare la nuova stringa
*/
    frase.insert(frase.size(), " Giovanni!");
    cout << frase << endl;
}

int main()
{

    string str;

    cout << "Inserire valore stringa: ";
    getline(cin, str);


    lunghezzaStringa(str);
    trovaCiao(str);
    sostituisciPizzaConPasta(str);
    stampaPrimaParola(str);
    aggiungiGiovanni(str);



    return 0;
}
