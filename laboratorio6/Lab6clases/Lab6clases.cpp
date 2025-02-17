// Lab6clases.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Laboratorio practica 

#include <iostream>
using namespace std;

class Vehiculo {
private:
    string marca;
    string modelo;
    double precio;

public:
    // Constructor
    Vehiculo(string m, string mod, double p) {
        marca = m;
        modelo = mod;
        precio = p;
    }

    // Métodos setters y getters
    void setMarca(string m) { marca = m; }
    string getMarca() { return marca; }

    void setModelo(string mod) { modelo = mod; }
    string getModelo() { return modelo; }

    void setPrecio(double p) { precio = p; }
    double getPrecio() { return precio; }

    // Método para mostrar los datos
    void mostrarDatos() {
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Precio: " << precio << endl;
    }
};

// clase derivada
class Auto : public Vehiculo {
private:
    int puertas;

public:
    Auto(string m, string mod, double p, int pu) : Vehiculo(m, mod, p) {
        puertas = pu;
    }
    void mostrarDatos() {
        Vehiculo::mostrarDatos();
        cout << "Numero de Puertas: " << puertas << endl;
    }
};

// clase derivada motocicleta
class Motocicleta : public Vehiculo {
private:
    int cilindada;

public:
    Motocicleta(string m, string mod, double p, int cil) : Vehiculo(m, mod, p) {
        cilindada = cil;
    }
	void mostrarDatos() {
		Vehiculo::mostrarDatos();
		cout << "Cilindada: " << cilindada << endl;
	}
};
//derivada camioneta
class Camioneta : public Vehiculo {
private:
	int carga;

public:
	Camioneta(string m, string mod, double p, int car) : Vehiculo(m, mod, p) {
		carga = car;
	}
	void mostrarDatos() {
		Vehiculo::mostrarDatos();
		cout << "Carga: " << carga << endl;
	}
};

// clase cliente
class Cliente{
private:
	string nombre;
	
public:
	Cliente(string n) {
		nombre = n;
	}
	void  setNombre(string n) { nombre = n; }
    //metodo para comprar

	void comprar(Vehiculo v) {
		cout << "El cliente " << nombre << " ha comprado un vehiculo" << endl;
		v.mostrarDatos();
	}
	
};

// Función principal
int main() {
    Vehiculo v1("Toyota", "Corolla", 25000);
    v1.mostrarDatos();
	cout << endl;
	Motocicleta m1("Honda", "CBR", 15000, 250);
	m1.mostrarDatos();
	cout << endl;
	Camioneta c1("Ford", "Ranger", 30000, 500);
	c1.mostrarDatos();
	cout << endl;

	Cliente c("Juan");

	c.comprar(v1);
	cout << endl;

    return 0;
}



// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
