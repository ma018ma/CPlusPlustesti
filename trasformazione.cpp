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
        cout << n <<"-"<< riga << endl;
        n+=1;
            
    
    }
    fileInput.close();
}
   //for (int i=0; i<150; i+6)  
    //fileOutput <<n<<"-"<< riga <<endl;

    
    
    
    
    
    /*while(getline(in, riga))
    {
        cout<<riga<<endl;
    }*/



