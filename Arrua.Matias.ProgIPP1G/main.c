#include <stdio.h>
#include <stdlib.h>

typedef struct{
int id;
char nombre[];
int infectados;
int recuperados;
int muertos;

}ePais;

void actualizarRecuperados(ePais pais);

char invertirCadena(char cadena []);

int main () {
    ePais pais[10];
    pais.id[1]=1000;
    pais.nombre[1]="Argentina";
    pais.infectados=500;
    pais.recuperados=600;
    pais.muertos=400;

    int recuperadosDeldia = 5000;

    char cadena[10] ={"UTN-FRA"};

	invertirCadena(cadena);
	printf("%s",cadena);

	actualizarRecuperados(pais, recuperadosDeldia)



	return 0;
}


char invertirCadena(char cadena[]) {
  int longitud = strlen(cadena);
  char auxiliar;
  for (int izquierda = 0, derecha = longitud - 1; izquierda < (longitud / 2);
       izquierda++, derecha--) {
    auxiliar = cadena[izquierda];
    cadena[izquierda] = cadena[derecha];
    cadena[derecha] = temporal;
  }
  return cadena;
}



void actualizarRecuperados(ePais pais, int recuperados){

pais.recuperados += recuperados

}
