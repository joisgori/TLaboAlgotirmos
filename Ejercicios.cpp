#include <iostream>
using namespace std;

//Firmas de las funciones
void sumaNumeros(int i, int j); //Para las matrices (Ejercicio 1)
int potencia(int x, int n); //Para el segundo ejercicio
int numMenor(int i); //Para el tercer ejercicio

//Variables globales para EJ 1:*******
//DEFINO MIS MATRICES:
int MA[3][3] = {{1,2,1}, 
				        {1,2,1},
				        {1,1,1}};	
int MB[3][3] = {{1,2,1},
                {1,2,1},
                {1,1,1}};
int MC[3][3];
//PARA EL TERCER EJERCICIO*******
int arreglo[6] = {12,6,21,3,10,-2};
int temp = arreglo[0];


int ejercicio;

int main() {
  cout << "A continuación INGRESAR EL NÚMERO del ejercicio que desea ejecutar: " << endl;
  cout << "1. Suma de matrices de forma recursiva: " << endl;
  cout << "2. Potenciación de un número de forma recursiva: " << endl;
  cout << "3. Encontrar el número menor de forma recursiva: " << endl;
  cin >> ejercicio;

  switch(ejercicio){
    case 1:{
      int i=0, j=0;
      sumaNumeros(i,j);
      //Ahora imprimo mi respuesta, la matrix C
      for (int k=0 ; k < 3 ; k++){
        for (int l=0 ; l < 3 ; l++){
          cout << MC[k][l] << " ";
          }
          cout << endl;
          }
      break;
    }
    case 2:{
      int x, n;
      cout << "Ingrese los valores de la base y su exponente: " << endl;
      cout << "base: ";
      cin >> x;
      cout << "exponente: ";
      cin >> n;
      cout << "Por ende, la respuesta es: " << potencia(x, n);
      break;
    }
    case 3:{
      int i = 0;
      cout << "El número menor en el presente arreglo es: " << endl; 
      cout << numMenor(i);
      break;
    }
    default:{
      cout << "Ingrese una opción válida";
      break;
    }
  }
}

//Lógica de las funciones
//1.
void sumaNumeros(int i, int j){
	if(i < 3 && j < 3){
		MC[i][j] = MA[i][j] + MB[i][j];
		if(i < 2){
			i++;
		}else{
			i = 0;
			j++;
		}
		sumaNumeros(i,j);
	}
}
//2.
int potencia(int x, int n){
	if(n>0){
		return x * potencia(x, n-1);
	}
	else{
		return 1;
	}
}
//3.
int numMenor(int i){ //con este iré recorriendo el arreglo...
	if(i < sizeof(arreglo)/sizeof(arreglo[0])) { //condición de paro, cuando esté en la última posición del arreglo
		if(temp > arreglo[i]){
			temp = arreglo[i];
		}else{
			i++;
		}
		numMenor(i);
	}
	return temp;
}
