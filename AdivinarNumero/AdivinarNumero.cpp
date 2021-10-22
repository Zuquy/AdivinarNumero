// AdivinarNumero.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int minimo=0;
int maximo=100;
int numeroPC;
int intentos=0;
bool igualnumero = false;
char opcion;

int main()
{
    std::cout << "Piensa en un numero del 0 al 100\n";
    while (intentos < 10 &&!igualnumero) {
        numeroPC = (rand() % (maximo - minimo + 1)) + minimo;
        cout << "El numero en el que piensas es " << numeroPC << " ? ((>/</=): )\n";
        cin >> opcion;
        if (opcion == '>') {
            minimo = numeroPC+1;
        }
        else if (opcion == '<') {
            maximo = numeroPC-1;
        }
        else if (opcion == '=') {
            igualnumero = true;
            intentos--;
        }
        else {
            cout << "Opcion invalida\n";
            intentos--;
        }
        intentos++;
    }
    if (intentos >= 10) {
        cout << "He perdido";
    }
    else {
        cout << "He ganado tu numero era " << numeroPC;
    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
