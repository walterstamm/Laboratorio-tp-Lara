#include <iostream>
using namespace std;
#include <cstdlib>
#include "configuracion.h"
#include "ArchivosConfiguraciones.h"

void RealizarCopiaSeguridad(){
    while(Confirmacion()==false){
        if(continuar()==false){
            return;
        }
        ///Resguardar_BKP();




        system ("cls");
    }

}

void RestaurarCopiaSeguridad(){
    while(Confirmacion()==false){
        if(continuar()==false){
            return;
        }
        system ("cls");
    }

}

/**void Resguardar_BKP(){
    Usuarios reg;
    int
    FILE *d, *b;

    d=fopen("texto.dat", "rb");
    b=fopen("texto.bkp", "wb");
    if(d==NULL && b==NULL){
        cout<<"algo paso!!!!!!. ";
        fclose(d);
        fclose(b);
        return;
    }

    while(fread(&reg, sizeof(Usuarios), 1, d)){
        fwrite(&reg, sizeof(Usuarios), 1, b);
    }
    fclose(d);
    fclose(b);
}

void GuardoRegistro(reg){
    Usuarios reg;
    FILE *b;

    b=fopen("texto.bkp", "wb");
    if(b=NULL){
        cout<<"Hubo algun error\n";
        return;
    }


}*/
