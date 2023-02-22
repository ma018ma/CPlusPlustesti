#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    ifstream fileInput("maggio.txt");
    ofstream fileoutputcerca("output.txt");
    if (fileInput.is_open())
    {
        cout << "il file e aperto" << endl;
    }
    else
    {
        cout << "il file non e aperto bene" << endl;
    }
    string parola = "tanto";
    string riga;
    int numeroRigaParolaTrovata = 1;

    while (getline(fileInput, riga)) // per scorrere tutte righe del testo
    {
        numeroRigaParolaTrovata++;
        bool flag = false;                      // se trovo parolo imposto true
        for (int i = 0; i < riga.length(); i++) // per analizzare tutta riga

        {
            // cout << "i:" << i << endl;
            for (int j = 0; j < parola.length(); j++) // incremento indice j di parola
            {
                if (riga[i] == parola[j])
                {
                    if (j == parola.length() - 1)
                    {
                        flag = true;
                        cout << "trovata" << endl;
                    }
                    i++;
                }
                else
                {
                    break;
                }
            }
        }
        if (flag == true)
        {
            cout << "la parola e nella riga:" << numeroRigaParolaTrovata << endl;
        }
    }

    fileInput.close();
    fileoutputcerca.close();
}