//NOMBRE: HUGO FABIAN GOMEZ
//TP N�: PRIMER PARCIAL

#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <clocale>
#include <iostream>
using namespace std;

#include "Usuarios.h"

void Menu(){
    Usuarios reg;
    int Opcion;
    while(Opcion){
        system("cls");
        cout<<"\n===========MENU PRINCIPAL============";
        cout<<"\n01.- USUARIOS........................";
        cout<<"\n02.- ENTRENAMIENTOS..................";
        cout<<"\n03.- REPORTES........................";
        cout<<"\n04.- CONFIGURACI�N...................";
        cout<<"\n=====================================";
        cout<<"\n00.- SALIR DEL PROGRAMA..............";
        cout<<"\n=====================================";
        cout<<"\n       Opci�n:"; cin>>Opcion;

        switch(Opcion){
            case 1:
                Menu_Usuarios();
            break;
            case 2:
                Menu_Entrenamiento();
            break;
            case 3:

            break;
            case 4:

            break;
            case 0:
                return;
            break;
        }
    }
}

void Menu_Usuarios(){
    Usuarios reg;
    int Opcion;
    while(true){
        system("cls");
        cout<<"\n===========MENU USUARIOS=============";
        cout<<"\n01.- NUEVO USUARIO...................";
        cout<<"\n02.- MODIFICAR USUARIO...............";
        cout<<"\n03.- LISTAR USUARIOS POR ID..........";
        cout<<"\n04.- LISTAR TODOS LOS USUARIOS.......";
        cout<<"\n05.- ELIMINAR USUARIO................";
        cout<<"\n=====================================";
        cout<<"\n00.- VOLVER AL MENU PRINCIPAL........";
        cout<<"\n=====================================";
        cout<<"\n       Opci�n:"; cin>>Opcion;

        switch(Opcion){
            case 1:
                Cargar_Nuevo_Usuario();

                            break;
            case 2:
                Modificar_Usuarios();
            break;
            case 3:
                Listar_Usuarios_ID();
            break;
            case 4:
                Listar_Usuarios();
            break;
            case 5:
                Baja_Logica_Usuario();

            break;
            case 0:
                return;
            break;
            case 6:

            break;

        }
    }



}

void Menu_Entrenamiento(){
    Entrenamiento ent;
    int Opcion;
    while(true){
        system("cls");
        cout<<"\n===========MENU ENTRENAMIENTOS================";
        cout<<"\n01.- NUEVO ENTRENAMIENTO......................";
        cout<<"\n02.- MODIFICAR ENTRENAMIENTO..................";
        cout<<"\n03.- LISTAR ENTRENAMIENTO POR ID..............";
        cout<<"\n04.- LISTAR ENTRENAMIENTO POR IDUSUARIOS......";
        cout<<"\n05.- LISTAR TODOS LOS ENTRENAMIENTOS..........";
        cout<<"\n==============================================";
        cout<<"\n00.- VOLVER AL MENU PRINCIPAL.................";
        cout<<"\n==============================================";
        cout<<"\n       Opci�n:"; cin>>Opcion;

        switch(Opcion){
            case 1:
                Cargar_Nuevo_Entrenamiento();
            break;
            case 2:Modificar_Entrenamiento();

            break;
            case 3:
                Listar_Entrenamiento_ID();
            break;
            case 4:
                Listar_Entrenamiento_Usuario();
            break;
            case 5:
                Listar_Entrenamiento();
            break;
            case 0:
                return;
            break;
        }
    }
}
