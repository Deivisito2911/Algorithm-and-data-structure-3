#include <iostream>
using namespace std;

// Nodo de la lista
struct Nodo {
    int dato;
    Nodo* siguiente;
};

// Clase Pila
class Pila {
    Nodo* cima; // Puntero al nodo superior

public:
    Pila() { cima = nullptr; } // Constructor para inicializar la pila

    // Verifica si la pila está vacía
    bool estaVacia() {
        return cima == nullptr;
    }

    // Agrega un elemento a la pila
    void push(int x) {
        Nodo* nuevoNodo = new Nodo();
        nuevoNodo->dato = x;
        nuevoNodo->siguiente = cima;
        cima = nuevoNodo;
        cout << x << " agregado a la pila\n";
    }

    // Elimina y devuelve el elemento superior de la pila
    int pop() {
        if (estaVacia()) {
            cout << "Subdesbordamiento de pila\n";
            return -1;
        } else {
            Nodo* temp = cima;
            int dato = cima->dato;
            cima = cima->siguiente;
            delete temp;
            return dato;
        }
    }

    // Devuelve el elemento superior de la pila sin eliminarlo
    int verCima() {
        if (estaVacia()) {
            cout << "La pila está vacía\n";
            return -1;
        } else {
            return cima->dato;
        }
    }
};

// Función para mostrar el menú de operaciones
void mostrarMenu() {
    cout << "\nMenú de operaciones con la pila:\n";
    cout << "1. Agregar elemento (push)\n";
    cout << "2. Eliminar elemento (pop)\n";
    cout << "3. Ver cima\n";
    cout << "4. Salir\n";
}

// Función principal
int main() {
    Pila pila;
    int opcion, valor;

    do {
        mostrarMenu();
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el valor a agregar: ";
                cin >> valor;
                pila.push(valor);
                break;
            case 2:
                valor = pila.pop();
                if (valor != -1) {
                    cout << valor << " eliminado de la pila\n";
                }
                break;
            case 3:
                valor = pila.verCima();
                if (valor != -1) {
                    cout << "El elemento en la cima es " << valor << endl;
                }
                break;
            case 4:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opción no válida. Intente de nuevo.\n";
        }
    } while (opcion != 4);

    return 0;
}
