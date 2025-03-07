#include <iostream>
using namespace std;

struct persona {
    int id;
    string nombre;
    int edad;
    bool casado = false;
};

void ingresarDatosRegristro(persona per[], int n) {
    char resp;
    cin.ignore(); // Evitar problemas con buffer
    for (int i = 0; i < n; i++) {
        per[i].id = i + 1;
        cout << "Ingrese nombre y apellido: ";
        getline(cin, per[i].nombre); // Captura nombre completo
        cout << "Ingrese edad: ";
        cin >> per[i].edad;
        cout << "Es casado? (S/N): ";
        cin >> resp;
        cin.ignore(); // Evita problemas con el buffer.
        if (resp == 's' || resp == 'S') {
            per[i].casado = true;
        }
    }
}

void mostrarRegistro(persona per[], int n) {
    cout << "ID\tNOMBRE\tEDAD\tCASADO" << endl;
    for (int i = 0; i < n; i++) {
        cout << per[i].id << "\t" << per[i].nombre << "\t"
             << per[i].edad << "\t" << (per[i].casado ? "Si" : "No") << endl;
    }
}

persona buscarPersonaId(persona per[], int n, int d) {
    for (int i = 0; i < n; i++) {
        if (per[i].id == d) {
            return per[i];
        }
    }
    return {}; // Retorna una estructura vacÃ­a si no se encuentra.
}

void buscarPersonaNombres(persona per[], int n, string nombres) {
    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (per[i].nombre == nombres) {
            contador++;
            cout << per[i].id << "\t" << per[i].nombre << "\t"
                 << per[i].edad << "\t" << (per[i].casado ? "Si" : "No") << endl;
        }
    }
    if (contador == 0) {
        cout << "No se encontro ninguna persona con ese nombre.\n";
    } else {
        cout << "Total de personas encontradas con el nombre '" << nombres << "': " << contador << endl;
    }
}

int main() {
    int np, id;
    string nombre;
    
    cout << "Ingrese la cantidad de personas: ";
    cin >> np;
    
    persona personas[np], encontrada;

    ingresarDatosRegristro(personas, np);
    mostrarRegistro(personas, np);

    // Buscar por ID
    cout << "Ingrese el ID de la persona a buscar: ";
    cin >> id;
    encontrada = buscarPersonaId(personas, np, id);
    
    if (encontrada.id != 0) {
        cout << "Persona encontrada por ID:\n";
        cout << encontrada.id << "\t" << encontrada.nombre << "\t"
             << encontrada.edad << "\t" << (encontrada.casado ? "Si" : "No") << endl;
    } else {
        cout << "No se encontro ninguna persona con ese ID.\n";
    }

    cin.ignore(); // Evitar problemas con getline

    // Buscar por nombre
    cout << "Ingrese el nombre de la persona a buscar: ";
    getline(cin, nombre);
    buscarPersonaNombres(personas, np, nombre);

    return 0;
}