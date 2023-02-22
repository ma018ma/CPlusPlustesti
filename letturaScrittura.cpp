#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{

    string contenitore;
    ifstream mioFile("maggio.txt"); // istruzione per aprire in LETTURA

    // stampa riga 12

    // while (getline(mioFile, contenitore)) // legge una riga per volta
    // {
    //     cout << contenitore << endl;
    // }

    for (int i = 0; i < 12; i++) // stampa riga 12
    {
        getline(mioFile, contenitore);
    }
    cout << contenitore << endl;
}