//NOMBRE: HUGO FABIAN GOMEZ
//TP N°: PRIMER PARCIAL

#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <clocale>
#include <iostream>
using namespace std;
#include "Usuarios.h"

int main(){
	setlocale(LC_ALL, "Spanish");
    Usuarios reg;
    ///int ID_Usuarios;
    ///Entrenamiento ent;
    ///inicia el programa llamando al menu principal.
    Menu(); ///activar este

///    cout<<"Usuarios: ";cin>>ID_Usuarios;
///    cout<<Verificar_ApMedico(ID_Usuarios);





    return 0;
}


/**bool Verificar_ApMedico(int ID_Usuarios){
    Usuarios reg;
    FILE *p;
    p=fopen("texto.dat","rb");
    cout<<"abrio";

    if(p==NULL){
        cout<<"No se pudo realizar la apertura del Archivo";
        system("PAUSE");
        return 0;
    }
    cout<<"PASO EL IF NULL";
    system("pause");
    while(fread(&reg,sizeof (Usuarios),1,p)){
        if(ID_Usuarios==reg.ID && reg.Apto_Med==true){
            return true;
        }
    }
    fclose(p);
    return false;
}
*/
