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
        system ("cls");
    }
    ///guardamos usuarios
    int cant=TotalUsuarios();
    if(cant==-1){
        cout<<"-error de archivos 1-"<<endl;
        return;
    }
    Usuarios *uno;
    uno=(Usuarios *)malloc(cant * sizeof(Usuarios));
    if(uno==NULL){
        cout<<"-error de archivos 2-"<<endl;
        free(uno);
        return;
    }
    for(int x=0;x<cant;x++){
        uno[x]=TraerUsuario(x);
    }
    if(GuardamosCopiaUsuario(uno, cant)!=cant){
        cout<<"-error de archivos 3-"<<endl;
        free(uno);
        return;
    }
    free(uno);
    ///guardamos entrenamiento
    cant=TotalEntremanitos();
    if(cant==-1){
        cout<<"-error de archivos 1-"<<endl;
        return;
    }
    Entrenamiento*dos;
    dos=(Entrenamiento *)malloc(cant * sizeof(Entrenamiento));
    if(dos==NULL){
        cout<<"-error de archivos 2-"<<endl;
        free(dos);
        return;
    }
    for(int x=0;x<cant;x++){
        dos[x]=TreaerEntrenamiento(x);
    }
    if(GuardamosCopiaEntrenamiento(dos, cant)!=cant){
        cout<<"-error de archivos 3-"<<endl;
        free(dos);
        return;
    }
    free(dos);
    system ("cls");
    cout<<"-Copia de seguridad guardada-"<<endl;
}

void RestaurarCopiaSeguridad(){
    while(Confirmacion()==false){
        if(continuar()==false){
            return;
        }
        system ("cls");
    }

}
