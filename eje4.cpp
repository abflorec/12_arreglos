#include <iostream>
#include <string>
using namespace std;
struct empl{
    string noms;
    char sx;
    double s;
};
int main(){
    int n;
    cout<<"ingrese el numero de empleados: ";cin>>n;
    empl empls[n];
    for(int i=0;i<n;++i){
        cout<<"ingrese nombre del empleado "<<i+1<<": ";cin.ignore();
        getline(cin,empls[i].noms);
        cout<<"ingrese sexo del empleado "<<i+1<<" (M/F): ";
        cin>>empls[i].sx;
        cout<<"ingrese sueldo del empleado "<<i+1<<": ";
        cin>>empls[i].s;
    }
    int max=0;
    for(int i=1;i<n;++i) {
        if(empls[i].s>empls[max].s){
            max=i;
        }
    }
    int min=0;
    for(int i=1;i<n;++i){
        if(empls[i].s<empls[min].s){
            min=i;
        }
    }
    cout<<"empleado con mayor sueldo:";
    cout<<"nombre: "<<empls[max].noms<<endl;
    cout<<"sexo: "<<empls[max].sx<<endl;
    cout<<"sueldo: " << empls[max].s<<endl;
    cout<<"empleado con menor sueldo:";
    cout<<"nombre: "<<empls[min].noms<<endl;
    cout<<"sexo: "<<empls[min].sx<<endl;
    cout<<"sueldo: "<<empls[min].s<<endl;
    return 0;
}
