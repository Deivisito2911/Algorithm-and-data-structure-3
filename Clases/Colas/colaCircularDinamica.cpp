#include <iostream>

class Nodo {
public:
    int dato;
    Nodo* siguiente;
    Nodo(int val) : dato(val), siguiente(nullptr) {}
};

class ColaCircularDinamica {
private:
    Nodo* frente;
    Nodo* final;
    int contador;

public:
    ColaCircularDinamica() : frente(nullptr), final(nullptr), contador(0) {}

    bool estaVacia() {
        return frente == nullptr;
    }

    void encolar(int valor) {
        Nodo* nuevoNodo = new Nodo(valor);
        if (estaVacia()) {
            frente = final = nuevoNodo;
            final->siguiente = frente; // Hacer circular la cola
        } else {
            final->siguiente = nuevoNodo;
            final = nuevoNodo;
            final->siguiente = frente; // Mantener circularidad
        }
        contador++;
    }

    void desencolar() {
        if (estaVacia()) {
            std::cout << "Cola está vacía\n";
            return;
        }
        if (frente == final) {
            delete frente;
            frente = final = nullptr;
        } else {
            Nodo* temp = frente;
            frente = frente->siguiente;
            final->siguiente = frente; // Mantener circularidad
            delete temp;
        }
        contador--;
    }

    int obtenerFrente() {
        if (estaVacia()) {
            std::cout << "Cola está vacía\n";
            return -1; // Indicador de que la cola está vacía
        }
        return frente->dato;
    }

    void mostrarCola() {
        if (estaVacia()) {
            std::cout << "Cola está vacía\n";
            return;
        }
        Nodo* actual = frente;
        do {
            std::cout << actual->dato << " ";
            actual = actual->siguiente;
        } while (actual != frente);
        std::cout << "\n";
    }
};

void mostrarMenu() {
    std::cout << "\nMenú de Opciones:\n";
    std::cout << "1. Encolar\n";
    std::cout << "2. Desencolar\n";
    std::cout << "3. Mostrar Cola\n";
    std::cout << "4. Mostrar Frente\n";
    std::cout << "5. Salir\n";
    std::cout << "Elige una opción: ";
}

int main() {
    ColaCircularDinamica cola;
    int opcion, valor;

    do {
        mostrarMenu();
        std::cin >> opcion;

        switch(opcion) {
            case 1:
                std::cout << "Introduce un valor para encolar: ";
                std::cin >> valor;
                cola.encolar(valor);
                break;
            case 2:
                cola.desencolar();
                break;
            case 3:
                cola.mostrarCola();
                break;
            case 4:
                valor = cola.obtenerFrente();
                if (valor != -1) {
                    std::cout << "El frente de la cola es: " << valor << "\n";
                }
                break;
            case 5:
                std::cout << "Saliendo...\n";
                break;
            default:
                std::cout << "Opción no válida. Inténtalo de nuevo.\n";
                break;
        }
    } while(opcion != 5);

    return 0;
}
