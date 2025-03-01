// repasoParcial1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;
class EquipoFutbol
{
private:
	string nombre, ciudad, apodo, nombreEstadio;
	int anioFundacion, capacidadEstadio;

public:
	EquipoFutbol(string nombre, string ciudad, string apodo, string nombreEstadio, int anioFundacion, int cpacidadEstadio) {
		this->nombre = nombre;
		this->ciudad = ciudad;
		this->apodo = apodo;	
		this->nombreEstadio = nombreEstadio;
		this->anioFundacion = anioFundacion;
		this->capacidadEstadio = capacidadEstadio;

		
}
	void setNombre(string nombre) {
		this->nombre = nombre;
	}
	string getNombre() {
		return nombre;
	}
	void setCiudad(string ciudad) {
		this->ciudad = ciudad;
	}
	string getCiudad() {
		return ciudad;
	}
	void setApodo(string apodo) {
		this->apodo = apodo;
	}
	string getApodo() {
		return apodo;
	}
	void setNombreEstadio(string nombreEstadio) {
		this->nombreEstadio = nombreEstadio;
	}
	string getNombreEstadio() {
		return nombreEstadio;
	}
	void setAnioFundacion(int anioFundacion) {
		this->anioFundacion = anioFundacion;
	}
	int getAnioFundacion() {
		return anioFundacion;
	}
	void setCapacidadEstadio(int capacidadEstadio) {
		this->capacidadEstadio = capacidadEstadio;
	}
	int getCapacidadEstadio() {
		return capacidadEstadio;
	}
	void mostrarDatos() {
		cout << "Nombre: " << nombre << endl;
		cout << "Ciudad: " << ciudad << endl;
		cout << "Apodo: " << apodo << endl;
		cout << "Nombre del estadio: " << nombreEstadio << endl;
		cout << "Aniode fundacion: " << anioFundacion << endl;
		cout << "Capacidad del estadio: " << capacidadEstadio << endl;
	}

};

class FuerzasBasicas : public EquipoFutbol
{
private:
	string categoria;
	int numeroJugadores;
public:
	FuerzasBasicas(string nombre, string ciudad, string apodo, string nombreEstadio, int anioFundacion, int cpacidadEstadio, string categoria, int numeroJugadores) : EquipoFutbol(nombre, ciudad, apodo, nombreEstadio, anioFundacion, cpacidadEstadio) {
		this->categoria = categoria;
		this->numeroJugadores = numeroJugadores;
	}
	void setCategoria(string categoria) {
		this->categoria = categoria;
	}
	string getCategoria() {
		return categoria;
	}
	void setNumeroJugadores(int numeroJugadores) {
		this->numeroJugadores = numeroJugadores;
	}
	int getNumeroJugadores() {
		return numeroJugadores;
	}
	void mostrarDatos() {
		EquipoFutbol::mostrarDatos();
		cout << "Categoria: " << categoria << endl;
		cout << "Numero de jugadores: " << numeroJugadores << endl;
	}
};




int main()
{
	EquipoFutbol equipo1("Barcelona", "Barcelona", "Cules", "Camp Nou", 1899, 100000);
	equipo1.mostrarDatos();
	cout << endl;

	equipo1.setApodo("Blaugranas");
	cout << "Datos del equipo actualizados: " << endl;
	equipo1.mostrarDatos();
	cout << endl;
	equipo1.setCapacidadEstadio(50000);
	cout << "Datos del equipo actualizados: " << endl;
	equipo1.mostrarDatos();
	cout << endl;

	FuerzasBasicas fuerzasBasicas1("Barcelona Juvenil", "Barcelona", "Cules", "Johan cruyyf", 1899, 100000, "Juvenil", 20);
	fuerzasBasicas1.mostrarDatos();
	cout << endl;
	fuerzasBasicas1.setCapacidadEstadio(50000);
	cout << "Datos del equipo actualizados: " << endl;
	fuerzasBasicas1.mostrarDatos();
	cout << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
