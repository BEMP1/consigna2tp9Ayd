#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	struct Chofer {
		string nombreApellido;
		int dni;
		int edad;
	};
	struct Salida {
		int hora;
		int minuto;
	};
	struct Llegada {
		int hora;
		int minuto;
	};
	struct Omnibus {
		int nroUnidad;
		string origen;
		string destino;
		Salida salida;
		Llegada llegada;
		Chofer chofer;
		char estadoAsientos[19];
	};
	return 0;
}

