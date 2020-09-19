#ifndef ARCHIVOSCONFIGURACIONES_H_INCLUDED
#define ARCHIVOSCONFIGURACIONES_H_INCLUDED

bool Confirmacion();
bool continuar();

int GuardamosCopiaUsuario(struct Usuarios [], int );
int GuardamosCopiaEntrenamiento(struct Entrenamiento [], int );

int TotalUsuariosbkp();
int CargarUsuariobkp(struct Usuarios [], int);
int GuardarUsuarioBKP_en_DAt(struct Usuarios [], int);

int TotalEntremanitosbkp();
int CargarEntrenamientosbkp(struct Entrenamiento [], int);
int GuardarEntrenamietoBKP_en_DAt (struct Entrenamiento [], int);

int TotalUsuarios();
int TotalEntremanitos();

struct Usuarios TraerUsuario(int);
struct Entrenamiento TreaerEntrenamiento(int);

#endif // ARCHIVOSCONFIGURACIONES_H_INCLUDED
