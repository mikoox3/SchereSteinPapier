#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;

// Funktionen
void SpielerEinsEingabe()
{
    cout << "Spieler 1 Eingabe: ";
}

void SpielerZweiEingabe()
{
    cout << "Spieler 2 Eingabe: ";
}

int main ()
{
    // Variablen
    string spielerEins, spielerZwei;

    cout << "\t\tSchere, Stein, Papier" << endl;
    cout << "Regeln: Immer den ersten Buchstaben gross schreiben!" << endl << endl;

    // Eingabe
    do
    {
        SpielerEinsEingabe();
        cin >> spielerEins;
    }
    while
    (
        spielerEins != "Schere" && spielerEins != "Stein" && spielerEins != "Papier"
    );
    system("cls");

    cout << "\t\tSchere, Stein, Papier" << endl;
    cout << "Regeln: Immer den ersten Buchstaben gross schreiben!" << endl << endl;

    // Eingabe
    do
    {
        SpielerZweiEingabe();
        cin >> spielerZwei;
    }
    while
    (
        spielerZwei != "Schere" && spielerZwei != "Stein" && spielerZwei != "Papier"
    );
    system("cls");

    cout << "Spieler 1: " << spielerEins << endl;
    cout << "Spieler 2: " << spielerZwei << endl << endl;


    // Alle Bedingungen
    if (spielerEins == "Schere")
    {
        if (spielerZwei == "Papier")
        {
            cout << "Spieler 2 gewinnt!";
        }
        else if (spielerZwei == "Stein")
        {
            cout << "Spieler 1 gewinnt!";
        }
    }
    if (spielerEins == "Papier")
    {
        if (spielerZwei == "Stein")
        {
            cout << "Spieler 1 gewinnt!";
        }
        else if (spielerZwei == "Schere")
        {
            cout << "Spieler 2 gewinnt!";
        }
    }
    if (spielerEins == "Stein")
    {
        if (spielerZwei == "Schere")
        {
            cout << "Spieler 1 gewinnt!";
        }
        else if (spielerZwei == "Papier")
        {
            cout << "Spieler 2 gewinnt!";
        }
    }
    else
    {
        cout << "Unentschieden!";
    }

    getch();

    return 0;
}
