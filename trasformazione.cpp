#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    ifstream fileInput ("maggio.txt");
    ofstream fileOutput ("output.txt");
    if (fileInput.is_open())
    {
        cout<<"il file e aperto"<<endl;
    }
    else
    {
        cout<<"il file non e aperto bene"<<endl;
    }
    string riga;
    int n=1;
    while(getline(fileInput, riga))
    {   
        
        if(riga == "")
        {
            fileOutput<< riga << endl;
        }
        else if(n<10)
        {
            fileOutput << n <<"   - "<< riga << endl;  
            n++; 
        }
        else if(n<100)
        {
            fileOutput << n <<"  - "<< riga << endl;
            n++;
        }
        else
        {
        fileOutput << n <<" - "<< riga << endl;
        n++;
        }
            
    }
    fileInput.close();
}