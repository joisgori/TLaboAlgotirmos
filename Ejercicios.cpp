#include <iostream>
using namespace std;

void sumaNumeros(int i, int j);

//TAREA 1 DE LABO:
//DEFINO MIS MATRICES:
	int MA[3][3] = {{1,2,1}, 
					{1,2,1},
					{1,1,1}};
					
	int MB[3][3] = {{1,2,1},
					{1,2,1},
					{1,1,1}};
	int MC[3][3];

int main(){

	int i=0, j=0;
	
	sumaNumeros(i,j);
	
	//Ahora imprimo mi respuesta, la matrix C
	for (int k=0 ; k < 3 ; k++){
		for (int l=0 ; l < 3 ; l++){
			cout << MC[k][l] << " ";
		}
		cout << endl;
	}
	
	return 0;
}

//Lógica de la función
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
