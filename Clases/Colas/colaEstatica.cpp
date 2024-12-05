#include <iostream>
#define MAX 5

class ColaEstatica {
private:
    int cola[MAX];
    int frente, final;
    int contador;

public:
    ColaEstatica() {
        frente = -1;
        final = -1;
        contador = 0;
    }

    bool estaLlena() {
        return contador == MAX;
    }

    bool estaVacia() {
        return contador == 0;
    }

    void encolar(int valor) {
        if (estaLlena()) {
            std::cout << "Cola está llena\n";
            return;
        }
        if (estaVacia()) {
            frente = final = 0;
        } else {
            final = (final + 1) % MAX;
        }
        cola[final] = valor;
        contador++;
    }

    void desencolar() {
        if (estaVacia()) {
            std::cout << "Cola está vacía\n";
            return;
        }
        if (frente == final) {
            frente = final = -1;
        } else {
            frente = (frente + 1) % MAX;
        }
        contador--;
    }

    int obtenerFrente() {
        if (estaVacia()) {
            std::cout << "Cola está vacía\n";
            return -1; // Indicador de que la cola está vacía
        }
        return cola[frente];
    }

    void mostrarCola() {
        if (estaVacia()) {
            std::cout << "Cola está vacía\n";
            return;
        }
        int i = frente;
        while (true) {
            std::cout << cola[i] << " ";
            if (i == final) break;
            i = (i + 1) % MAX;
        }
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
    ColaEstatica cola;
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
