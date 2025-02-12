// proyecto2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
#include <string> // Necesario para getline()
using namespace std;

class Producto {
private:
    string nombre;
    int codigo;
    float precio;
    int stock;

public:
    Producto(string nom, int cod, float prec, int stk) {
        nombre = nom;
        codigo = cod;
        precio = prec;
        stock = stk;
    }

    void mostrar() {
        cout << "Codigo: " << codigo << ", Producto: " << nombre
            << ", Precio: Q" << precio << ", Stock: " << stock << endl;
    }

    int obtenerCodigo() {
        return codigo;
    }

    int obtenerStock() {
        return stock;
    }

    void actualizarStock(int cantidad) {
        if (cantidad > stock) {
            cout << "No hay suficiente stock disponible." << endl;
        }
        else {
            stock -= cantidad;
            cout << "Stock actualizado. Nuevo stock: " << stock << endl;
        }
    }

    float obtenerValor() {
        return stock * precio;
    }
};

// Funcion para agregar productos al inventario
void agregarProducto(vector<Producto>& inventario) {
    string nombre;
    int codigo, stock;
    float precio;

    cout << "Ingrese el nombre del producto: ";
    cin.ignore(); // Limpia el buffer de entrada
    getline(cin, nombre);

    cout << "Ingrese el codigo: ";
    cin >> codigo;

    cout << "Ingrese el precio: ";
    cin >> precio;

    cout << "Ingrese la cantidad en stock: ";
    cin >> stock;

    inventario.push_back(Producto(nombre, codigo, precio, stock));
}

// Funcion para mostrar el inventario
void mostrarInventario(vector<Producto>& inventario) {
    if (inventario.empty()) {
        cout << "No hay productos en el inventario." << endl;
        return;
    }

    for (Producto& producto : inventario) {
        producto.mostrar();
    }
}

// Funcion para buscar un producto por codigo
void buscarProducto(vector<Producto>& inventario) {
    int codigo;
    cout << "Ingrese el codigo del producto a buscar: ";
    cin >> codigo;

    for (Producto& producto : inventario) {
        if (producto.obtenerCodigo() == codigo) {
            cout << "Producto encontrado: ";
            producto.mostrar();
            return;
        }
    }
    cout << "Producto no encontrado." << endl;
}

// Funcion para actualizar el stock de un producto
void actualizarStock(vector<Producto>& inventario) {
    int codigo, cantidad;
    cout << "Ingrese el codigo del producto a actualizar: ";
    cin >> codigo;

    for (Producto& producto : inventario) {
        if (producto.obtenerCodigo() == codigo) {
            cout << "Ingrese la cantidad a restar del stock: ";
            cin >> cantidad;
            producto.actualizarStock(cantidad);
            return;
        }
    }
    cout << "Producto no encontrado." << endl;
}

// Funcion para calcular el valor total del inventario
void calcularValorTotal(vector<Producto>& inventario) {
    float total = 0;
    for (Producto& producto : inventario) {
        total += producto.obtenerValor();
    }
    cout << "Valor total del inventario: Q" << total << endl;
}

// Funcion principal
int main() {
    vector<Producto> inventario;
    int opcion;

    do {
        cout << "\nSistema de Inventario\n";
        cout << "1. Agregar producto\n";
        cout << "2. Mostrar inventario\n";
        cout << "3. Buscar producto por codigo\n";
        cout << "4. Actualizar stock\n";
        cout << "5. Calcular valor total del inventario\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1: agregarProducto(inventario); break;
        case 2: mostrarInventario(inventario); break;
        case 3: buscarProducto(inventario); break;
        case 4: actualizarStock(inventario); break;
        case 5: calcularValorTotal(inventario); break;
        case 6: cout << "Saliendo del programa...\n"; break;
        default: cout << "Opcion no valida, intente de nuevo.\n";
        }
    } while (opcion != 6);

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
