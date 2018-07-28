// Aca van las funciones desarrolladas, importante destacar que el iostream tiene que estar y tambien el namespace std ya que no puede trabajar c++ sin eso.

#include "00 - PrototiposFunciones.h"
#include <iostream>

//Version 27-6-18

using namespace std;

void mostrarVector (int vectorGenerico [], int lenGenerico)
{
    espaciado();
    cout << "Se muestra el vector: " <<endl;
    espaciado();

    for (int i = 0 ; i < lenGenerico ; i++)
    {
      cout << "En el indice [" << i << "]: " << vectorGenerico [i] << endl;
    }
}

void mostrarVectorEstructura (EstructuraGenerica vectorgenerico [],int len)
{
    for (int i = 0; i < len ; i++)
    {
        cout << "El numero es: " << vectorgenerico[i].numero << endl;
        cout << "La palabra es: " << vectorgenerico[i].palabra << endl;
        espaciado ();
    }
}

void agregarEnVectorEstructura (EstructuraGenerica vectorgenerico [],int &len ,EstructuraGenerica v[])
{
    vectorgenerico[len] = v[0];
    len++;
}

void inicializarVector (int vectorGenerico [], int lenGenerico)
{
    cout << "Se inicializa el vector"<< endl;

    for (int i = 0; i < lenGenerico ; i++)
    {
        vectorGenerico [i] = 0;
    }
}
void cargarVector (int vectorGenerico [], int lenGenerico)
{
    for (int i = 0 ; i < lenGenerico ; i++)
    {
        cout << "Ingrese un valor para el indice [" << i << "]:";
        cin >> vectorGenerico [i];
    }
}

void espaciado ()
{
    cout << "\------------------------------------------" << endl;
}


/// Funciones creadas antes y adaptadas al archivo.




///Funciones de la profe que resuelven el tp6


int buscaEInsertar(int arr[],int &len, int v, bool &enc){
	int pos = buscar(arr,len,v);

	if (pos == -1){
		enc = false;
		pos = insertarOrdenado(arr,len,v);
	} else {
		enc = true;
	}

	return pos;
}

int insertarOrdenado(int arr[], int &len, int v){
	int i=0;
	while(i<len && arr[i] <= v) {
		i++;
	}

	insertar(arr, len, v, i);
	return i;
}

void insertar(int arr[], int &len, int v, int pos){

	for(int i = len-1; i >= pos; i--){
		arr[i+1] = arr[i];
	}

	/* Otra version
	for(int i = len; i > pos && i <= len; i-- ){
		arr[i] = arr[i-1];
	}*/

	arr[pos] = v;
	len ++;
	return;
}

void eliminar(int arr[], int &len, int pos) {
	for (int i = pos; i < len-1 ; i++) {
		arr[i] = arr[i+1];
	}
	len--;
	return;
}

int buscar(int arr[], int len, int v){
	int i = 0;
	int pos;

	while(i<len && arr[i] != v) {
	 	i++;
	}

	if (i == len) {
		pos = -1;
	} else {
		pos = i;
	}
	return pos;
}

void mostrar(int arr[], int len) {
	for(int i = 0; i < len; i++){
		cout << arr[i] << endl;
	}
}


void agregar (int arr[], int n, int &len, int v){
	if (len == n) {
		cout << "El vector esta lleno" << endl;
	} else {
		arr[len] = v;
		len ++;
	}
	return;
}

void inicializar(int arr[], int n){
	for (int i=0; i < n; i++){
		arr[i] = 0;
	}
	return;
}


