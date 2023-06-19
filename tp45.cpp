#include <iostream>
using namespace std;

bool EsBisiesto(int anio);

int main(){
	int a;
	bool bisiesto;
	
	cout << "Ingrese año: ";
	cin >> a;
	
	bisiesto = EsBisiesto(a);
	
	if(bisiesto == true){
		cout << "SI";
	}else{
		cout << "NO";
	}
	
	return 0;
}

bool EsBisiesto(int anio){
	if((anio % 100 == 0 && anio % 400 == 0) || (anio % 100 != 0 && anio % 4 == 0)){
		return true;
	} else {
		return false;
	}
}

