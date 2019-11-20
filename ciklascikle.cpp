#include <fstream>
#include <iostream>
#include <algorithm>

using namespace std;

ifstream in("duom.txt");
ofstream out("rez.txt");
//funkcijosd prototipai
void kiekis(int &kiek);
void skaitom(int Masyvas[], int kiek);
void rasom(int Masyvas[], int kiek,  string txt);
int maziausias(int Masyvas[], int kiek);


int main(){

    int n; //masyvo elementu kiekis
    kiekis(n);
    cout<<n<<endl;
    int A[n];
    skaitom(A, n);
    rasom(A, n, "Pradinis");
    int maz = maziausias(A, n);
    cout<<maz;



    in.close();
    out.close();
return 0;
}
void kiekis(int &kiek){
    int laikinas;
    kiek=0;
    while(!in.eof()) //skaitom kol yra
    {
        in>>laikinas;
        kiek++;
    }
    in.seekg(0);

}
//--------------------------
void skaitom(int Masyvas[], int kiek){
    for(int i=0; i<kiek; i++){
        in>>Masyvas[i];
    }
}
//--------------------------
void rasom(int Masyvas[], int kiek, string txt){
    out <<txt<<endl;
     for(int i=0; i<kiek; i++){
        out<<Masyvas[i]<<" ";
        if(i%11 == 0){out<<endl;}//galim spausdinti atskirom eilutem
    }
    out<<endl;}
//-------------------
int maziausias(int Masyvas[], int kiek){
    int maz=*min_element(Masyvas, Masyvas+kiek);
    return maz;
}
