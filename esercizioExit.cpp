#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    ifstream filedalavoro("maggio.txt");
    ofstream fileoutputcerca("outputcerca.txt");
    if (filedalavoro.is_open())
    {
        cout << "il file e aperto" << endl;
    }
    else
    {
        cout << "il file non e aperto bene" << endl;
    }
    string parola = "";
    string riga;    
   // cout<<"Inserisci una parola da cercare. Inserici EXIT per uscire."<<endl;
    //cin>> parola;
    int n=1;
    while(getline(filedalavoro, riga))
    {   
        
        if(riga == "")
        {
            fileoutputcerca<< riga << endl;
        }
        else if(n<10)
        {
            fileoutputcerca<< n <<"   - "<< riga << endl;  
            n++; 
        }
        else if(n<100)
        {
            fileoutputcerca<< n <<"  - "<< riga << endl;
            n++;
        }
        else
        {
            fileoutputcerca<< n <<" - "<< riga << endl;
            n++;
        }

    int numeroRigaParolaTrovata = 1;

    while (getline(filedalavoro, riga)) // per scorrere tutte righe del testo
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

    filedalavoro.close();
    fileoutputcerca.close();
}
}