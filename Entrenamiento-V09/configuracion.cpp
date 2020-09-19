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

}

void RestaurarCopiaSeguridad(){
    while(Confirmacion()==false){
        if(continuar()==false){
            return;
        }
        system ("cls");
    }

}
