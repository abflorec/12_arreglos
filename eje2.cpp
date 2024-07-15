#include <iostream>
#include <string>
using namespace std;
struct per{
    string nom,DNI;
    int e;
};
int main(){
    int n;
    cout<<"Ingrese el numero total de personas: ";cin>>n;
    per pers[n];
    int ma50=0;
    int se=0;
    for(int i=0;i<n;++i){
        cout<<"ingrese el nombre de la persona "<<i+1<<": ";cin.ignore(); 
        getline(cin, pers[i].nom);
        cout<<"ingrese DNI de la persona "<<i+1<<": ";getline(cin,pers[i].DNI);
        cout<<"ingrese edad de la persona "<<i+1<<": ";cin>>pers[i].e;
        se+=pers[i].e;
        if (pers[i].e>50) {
            ma50++;
        }
    }
    double pe=static_cast<double>(se)/n;
    cout<<"personas mayores de 50: "<<ma50<<endl;
    cout<<"promedio de las edades: "<<pe<<endl;
    cout<<"datos de las personas:";
    for(int i=0;i<n;++i){
        cout<<"persona "<<i+1<<":";
        cout<<"nombres: "<<pers[i].nom<<endl;
        cout<<"DNI: "<<pers[i].DNI<<endl;
        cout<<"edad: "<<pers[i].e<<endl;
        cout<<endl;
    }
    return 0;
}
