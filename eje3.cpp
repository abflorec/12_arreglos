#include <iostream>
#include <string>
using namespace std;
struct per {
    string nom;
    int dian,mesn,anon;
};
int main() {
    int n;
    cout<<"ingrese el numero de personas: ";cin>>n;
    per pers[n];
    for(int i=0;i<n;++i){
        cout<<"ingrese el nombre de la persona "<<i+1<<": ";cin.ignore();
        getline(cin,pers[i].nom);
        cout<<"ingrese el dia de nacimiento de "<<i+1<<": ";cin>>pers[i].dian;
        cout<<"ingrese el mes de nacimiento de "<<i+1<<": ";cin>>pers[i].mesn;
        cout<<"ingrese el ano de nacimiento de "<<i+1<<": ";cin>>pers[i].anon;
    }
    int mesc;
    do{
        cout<<"ingrese un numero de mes ";cin>>mesc;
        if(mesc==0){
            break;
        }
        if(mesc<1||mesc>12){
            cout<<"mes incorrecto";
            continue;
        }
        bool found=false;
        cout<<"personas que cumplen anos en el mes "<<mesc<<":";
        for(int i=0;i<n;++i){
            if(pers[i].mesn==mesc){
                cout<<"nombre: "<<pers[i].nom<<endl;
                cout<<"dia de nacimiento: "<<pers[i].dian<<endl;
                cout<<"ano de nacimiento: "<<pers[i].anon<<endl;
                cout<<endl;
                found=true;
            }
        }
        if(!found){
            cout<<"nadie cumplan anos en el mes "<<mesc<<".";
        }
    } while (mesc !=0);
    return 0;
}
