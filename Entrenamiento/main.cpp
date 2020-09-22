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
#include "configuracion.h"

int main(){
	setlocale(LC_ALL, "Spanish");
    Usuarios reg;
    ///int ID_Usuarios;
    ///Entrenamiento ent;
    ///inicia el programa llamando al menu principal.
    ///Menu(); ///activar este

///    cout<<"Usuarios: ";cin>>ID_Usuarios;
///    cout<<Verificar_ApMedico(ID_Usuarios);

    Resguardar_BKP();
    system("pause");
    Restaurar_DAT();


    return 0;
}


void Resguardar_BKP(){
    Usuarios reg;
    Entrenamiento ent;
    int Reg=0;
    FILE *A_d, *A_b, *E_d, *E_b;

    A_d=fopen("texto.dat", "rb");
    A_b=fopen("texto.bkp", "wb");
    E_d=fopen("Entrenamiento.dat", "rb");
    E_b=fopen("Entrenamiento.bkp", "wb");


    if(A_d==NULL && A_b==NULL && E_d==NULL && E_b==NULL){
        cout<<"algo paso!!!!!!. ";
        fclose(A_d);
        fclose(A_b);
        fclose(E_d);
        fclose(E_b);
        return;
    }
    cout<<"Resguardó: \n";
    cout<<"datos.txt\n";
    while(fread(&reg, sizeof(Usuarios), 1, A_d)){
        fwrite(&reg, sizeof(Usuarios), 1, A_b);
        Reg++;
    }
    fseek(A_b,0, SEEK_END);
    cout<<"Guardó: "<<ftell(A_b)<<" bytes, "<<Reg<<" Registros."<<endl;

    Reg=0;
    cout<<"Entrenamiento.dat\n";
    while(fread(&ent, sizeof(Entrenamiento), 1, E_d)){
        fwrite(&ent, sizeof(Entrenamiento), 1, E_b);
        Reg++;
    }
    fseek(E_b,0, SEEK_END);
    cout<<"Guardó: "<<ftell(E_b)<<" bytes, "<<Reg<<" Registros."<<endl;
    cout<<endl<<endl;
    fclose(A_d);
    fclose(A_b);
    fclose(E_d);
    fclose(E_b);
}

void Restaurar_DAT(){
    Usuarios reg;
    Entrenamiento ent;
    int Reg=0;
    FILE *A_d, *A_b, *E_d, *E_b;

    A_d=fopen("texto.dat", "wb");
    A_b=fopen("texto.bkp", "rb");
    E_d=fopen("Entrenamiento.dat", "wb");
    E_b=fopen("Entrenamiento.bkp", "rb");


    if(A_d==NULL && A_b==NULL && E_d==NULL && E_b==NULL){
        cout<<"algo paso!!!!!!. ";
        fclose(A_d);
        fclose(A_b);
        fclose(E_d);
        fclose(E_b);
        return;
    }
    cout<<"Restauró: \n";
    cout<<"datos.bkp\n";
    while(fread(&reg, sizeof(Usuarios), 1, A_b)){
        fwrite(&reg, sizeof(Usuarios), 1, A_d);
        Reg++;
    }
    fseek(A_d,0, SEEK_END);
    cout<<"Guardó: "<<ftell(A_d)<<" bytes, "<<Reg<<" Registros."<<endl;

    Reg=0;
    cout<<"Entrenamiento.dat\n";
    while(fread(&ent, sizeof(Entrenamiento), 1, E_b)){
        fwrite(&ent, sizeof(Entrenamiento), 1, E_d);
        Reg++;
    }
    fseek(E_d,0, SEEK_END);
    cout<<"Guardó: "<<ftell(E_d)<<" bytes, "<<Reg<<" Registros."<<endl;

    fclose(A_d);
    fclose(A_b);
    fclose(E_d);
    fclose(E_b);
}
