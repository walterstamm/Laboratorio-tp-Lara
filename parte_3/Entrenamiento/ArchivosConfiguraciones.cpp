#include <iostream>
using namespace std;
#include <ctime>
#include <cstdio>
#include<stdlib.h>
#include <string.h>
#include "ArchivosConfiguraciones.h"
#include "Usuarios.h"

bool Confirmacion(){
    int Confirmar, confirmacion;
    srand(time(NULL));
    Confirmar=(rand()%10000)+1000;
    cout<<"Para realizar la Copia debera validar el numero ingresado"<<endl<<endl;
    cout<<"\t|"<<Confirmar<<"|\t";
    cin>>confirmacion;
    if(Confirmar==confirmacion){
        return true;
    }
return false;
}

bool continuar(){
    char opcion[3]={};
    cin.getline(opcion, 4, '\n');
    if(strcmp(opcion, "si")==0){
        return true;
    }
    else{
        if(strcmp(opcion, "no")==0){
            return false;
        }
    }
    do{
        cout<<endl<<"-Error de ingreso de datos-"<<endl;
        cout<<"Desea continuar (SI/NO): ";
        cin.getline(opcion, 4, '\n');
        if(strcmp(opcion, "si")==0){
            return true;
        }
        else{
            if(strcmp(opcion, "no")==0){
                return false;
            }
        }
    }while(1!=0);
return true;
}

int GuardamosCopiaUsuario(Usuarios *uno, int cant){
    int correcto;
    FILE *p= fopen("usuarios.bkp","wb");
        if(p==NULL){
            fclose(p);
            return -1;
        }
    correcto=fwrite(uno, sizeof(Usuarios),cant,p);
    fclose(p);
return correcto;
}

int GuardamosCopiaEntrenamiento(Entrenamiento *uno, int cant){
    int correcto;
    FILE *p= fopen("entrenamientos.bkp","wb");
        if(p==NULL){
            fclose(p);
            return -1;
        }
    correcto=fwrite(uno, sizeof(uno),cant,p);
    fclose(p);
return correcto;
}

///guardamos copia usuarios
int TotalUsuariosbkp(){
    int total;
    FILE *p=fopen("usuarios.bkp", "rb");
    if(p==NULL){
        fclose(p);
        return -1;
    }
    fseek(p, 0, SEEK_END);
    total=ftell(p)/sizeof(Usuarios);
return total;
}

int CargarUsuariobkp(Usuarios *uno, int cant){
    int correcto;
    FILE *p=fopen("usuarios.bkp", "rb");
    if(p==NULL){
        fclose(p);
        return -1;
    }
    correcto=fread(uno, sizeof(Usuarios),cant,p);
    fclose(p);
return correcto;
}

int GuardarUsuarioBKP_en_DAt(Usuarios *uno, int cant){
    int correcto;
    FILE *p=fopen("texto.dat", "wb");
    if(p==NULL){
        fclose(p);
        return -1;
    }
    correcto=fwrite(uno, sizeof(Usuarios),cant,p);
    fclose(p);
return correcto;
}

///guardamos copia entrenamientos
int TotalEntremanitosbkp(){
    int total;
    FILE *p=fopen("entrenamientos.bkp", "rb");
    if(p==NULL){
        fclose(p);
        return -1;
    }
    fseek(p, 0, SEEK_END);
    total=ftell(p)/sizeof(Entrenamiento);
return total;
}

int CargarEntrenamientosbkp(Entrenamiento *uno, int cant){
    int correcto;
    FILE *p=fopen("entrenamientos.bkp", "rb");
    if(p==NULL){
        fclose(p);
        return -1;
    }
    correcto=fread(uno, sizeof(Entrenamiento),cant,p);
    fclose(p);
return correcto;
}

int GuardarEntrenamietoBKP_en_DAt (Entrenamiento *uno, int cant){
    int correcto;
    FILE *p=fopen("entrenamientos.dat", "wb");
    if(p==NULL){
        fclose(p);
        return -1;
    }
    correcto=fwrite(uno, sizeof(Entrenamiento),cant,p);
    fclose(p);
return correcto;
}

int TotalUsuarios(){
    int total;
    FILE*p=fopen("texto.dat","rb");
        if(p==NULL){
            fclose(p);
            return -1;
        }

    fseek(p, 0, SEEK_END);
    total=ftell(p)/sizeof(Usuarios);
    fclose(p);
return total;
}

int TotalEntremanitos(){
    int total;
    FILE*p=fopen("entrenamientos.dat","rb");
        if(p==NULL){
            fclose(p);
            return -1;
        }

    fseek(p, 0, SEEK_END);
    total=ftell(p)/sizeof(Entrenamiento);
    fclose(p);
return total;
}

Usuarios TraerUsuario(int pos){
    Usuarios uno;
    FILE *p=fopen("texto.dat","rb");
        if(p==NULL){
            uno.ID=-1;
            fclose(p);
            return uno;
        }
    fseek(p, pos*sizeof(Usuarios), SEEK_SET);
    fread(&uno, sizeof(Usuarios), 1, p);
    fclose(p);
return uno;
}

struct Entrenamiento TreaerEntrenamiento(int pos){
    Entrenamiento uno;
    FILE *p=fopen("archivos/entrenamientos.dat","rb");
        if(p==NULL){
                uno.IDUsuario=-1;
                fclose(p);
                return uno;
        }
    fseek(p, pos*sizeof(Entrenamiento), SEEK_SET);
    fread(&uno, sizeof(Entrenamiento), 1, p);
    fclose(p);
return uno;
}
