#include <iostream>
using namespace std;

#define MAX 100

class Pila {
    int tope;
    int arr[MAX];

public:
    Pila() { tope = -1; }
    bool estaVacia() {
        return (tope < 0);
    }
    bool estaLlena() {
        return (tope >= MAX - 1);
    }
    bool push(int x) {
        if (estaLlena()) {
            cout << "Desbordamiento de pila\n";
            return false;
        } else {
            arr[++tope] = x;
            cout << x << " agregado a la pila\n";
            return true;
        }
    }
    int pop() {
        if (estaVacia()) {
            cout << "Subdesbordamiento de pila\n";
            return -1;
        } else {
            int x = arr[tope--];
            return x;
        }
    }
    int cima() {
        if (estaVacia()) {
            cout << "La pila está vacía\n";
            return -1;
        } else {
            return arr[tope];
        }
    }
};

void mostrarMenu() {
    cout << "\nMenú de operaciones con la pila:\n";
    cout << "1. Agregar elemento (push)\n";
    cout << "2. Eliminar elemento (pop)\n";
    cout << "3. Ver cima\n";
    cout << "4. Salir\n";
}

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
                valor = pila.cima();
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
