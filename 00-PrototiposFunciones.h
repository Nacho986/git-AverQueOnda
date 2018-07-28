// En la pestaña que es .h tiene solamente los prototipos.
// o copypaste de las funciones sin el algoritmo armado.
// El programa funciona sin las lineas que dicen  #ifndef FUNCIONES_H y #define FUNCIONES_H pero como la profe las dejo preferi dejarlo por las dudas

/// Importante destacar que el namespace std no estaba escrito pero la profe lo puso, aunque no lo utilice, puede que haga falta o no...

//Las estructuras se declaran en los prototipos.

//Version 27-6-18

using namespace std;

#ifndef FUNCIONES_H
#define FUNCIONES_H

struct EstructuraGenerica //La idea es modificar la estructura segun sea necesario hacer pruebas y demas cosas.
{
    int numero;
    char palabra [30];
};

/// Funciones creadas por mi

void mostrarVector (int vectorGenerico [], int lenGenerico);
void inicializarVector (int vectorGenerico [], int lenGenerico);
void cargarVector (int vectorGenerico [], int lenGenerico);
void espaciado ();

//Manejo de archivos

void mostrarVectorEstructura (EstructuraGenerica vectorgenerico [],int len);
void agregarEnVectorEstructura (EstructuraGenerica vectorgenerico[], int &len, EstructuraGenerica v[]);



/// Funciones creadas antes y adaptadas al archivo.




///Funciones de la profe que resuelven el tp6

void inicializar(int arr[], int n);
void mostrar(int arr[], int len);
void agregar(int arr[],int n, int &len, int v);
int buscar(int arr[], int len, int v);
void eliminar(int arr[], int &len, int pos);
void insertar(int arr[], int &len, int v, int pos);
int insertarOrdenado(int arr[], int &len, int v);
int buscaEInsertar(int arr[],int &len, int v, bool & enc);




#endif // FUNCIONES_H
