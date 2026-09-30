#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main ()
{
    // Variablen
    string spielerEins, spielerZwei, neustart;

    // Eingabe
    do
    {
        system("cls");

        cout << "\t\tSchere, Stein, Papier" << endl << endl;

        do
        {
            cout << "Spieler 1 Eingabe: ";
            cin >> spielerEins;
        }
        while
        (
            spielerEins != "Schere" && spielerEins != "Stein" && spielerEins != "Papier" && spielerEins != "schere" && spielerEins != "stein" && spielerEins != "papier"
        );
        system("cls");

        cout << "\t\tSchere, Stein, Papier" << endl << endl;

        // Eingabe
        do
        {
            cout << "Spieler 2 Eingabe: ";
            cin >> spielerZwei;
        }
        while
        (
            spielerZwei != "Schere" && spielerZwei != "Stein" && spielerZwei != "Papier" && spielerZwei != "schere" && spielerZwei != "stein" && spielerZwei != "papier"
        );
        system("cls");

        cout << "Spieler 1: " << spielerEins << endl;
        cout << "Spieler 2: " << spielerZwei << endl << endl;


        // Alle Bedingungen
        if (spielerEins == "Schere" || spielerEins == "schere")
        {
            if (spielerZwei == "Schere" || spielerZwei == "schere")
            {
                cout << "Unentschieden!";
            }
            else if (spielerZwei == "Papier" || spielerZwei == "papier")
            {
                cout << "Spieler 1 gewinnt!";
            }
            else
            {
                cout << "Spieler 2 gewinnt!";
            }
        }
        else if (spielerEins == "Stein" || spielerEins == "stein")
        {
            if (spielerZwei == "Stein" || spielerZwei == "stein")
            {
                cout << "Unentschieden!";
            }
            else if (spielerZwei == "Schere" || spielerZwei == "schere")
            {
                cout << "Spieler 1 gewinnt!";
            }
            else
            {
                cout << "Spieler 2 gewinnt!";
            }
        }
        else if (spielerEins == "Papier" || spielerEins == "papier")
        {
            if (spielerZwei == "Papier" || spielerZwei == "papier")
            {
                cout << "Unentschieden!";
            }
            else if (spielerZwei == "Stein" || spielerZwei == "stein")
            {
                cout << "Spieler 1 gewinnt!";
            }
            else
            {
                cout << "Spieler 2 gewinnt!";
            }
        }

        cout << endl << endl << "Nochmal spielen? (j/n): ";
        cin >> neustart;

    }
    while
    (
        neustart == "j" || neustart == "ja" || neustart == "Ja"
    );

    return 0;
}
