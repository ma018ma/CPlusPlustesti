#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main()
{
    ifstream filecreato("maggio.txt");
    string parola = "";
    string riga;
    string accumulatore;
    int numeroRiga = 0;

    cout << "inserisci parola, per terminare inserisci EXIT" << endl;
    cin >> parola;
    if (parola == "EXIT")
    {
        cout << "il gioco e finito." << endl;
    }
    else
    {
        while (getline(filecreato, riga)) // per scorrere tutte righe del testo
        {
            numeroRiga++;
            if (riga != "")
            {
                accumulatore = accumulatore + to_string(numeroRiga) + riga + "\n";
            }
            else
            {
                accumulatore = "";
            }

            // bool flag = false;                      // se trovo parola imposto true
            for (int i = 0; i < riga.length(); i++) // per analizzare tutta riga
            {
                for (int j = 0; j < parola.length(); j++) // incremento indice j di parola
                {
                    if (riga[i] == parola[j])
                    {
                        if (j == parola.length() - 1)
                        {
                            cout << "La parola: " << parola << " e' nella riga: " << numeroRiga << "-- " << riga << endl;
                            cout << "Fa parte del paragrafo: " << endl << accumulatore << endl;
                            while (getline(filecreato, riga))
                            {
                                if (riga == "")
                                {
                                    break;
                                }
                                else
                                {
                                    cout << riga << endl;
                                }
                            }
                        }
                        i++;

                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        filecreato.close();
    }
}