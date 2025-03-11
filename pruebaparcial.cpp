#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;


struct Conductor {
    string nombre;
    vector<double> kmsDiarios;
    double totalKms;
};

int main() {
    int numConductores;
    cout << "Ingrese el numero de conductores: ";
    cin >> numConductores;
    cin.ignore(); 
    
    vector <Conductor >conductores(numConductores);
    
   
    string diasSemana[7] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
    
    
    for (int i = 0; i < numConductores; i++) {
        cout << "\nConductor Nro:" << (i+1) << endl;
        cout << "Nombre: ";
        getline(cin, conductores[i].nombre);
        
        
        conductores[i].kmsDiarios.resize(7);
        conductores[i].totalKms = 0;
        
        cout << "Kilometros conducidos:" << endl;
        for (int j = 0; j < 7; j++) {
            cout << diasSemana[j] << ": ";
            cin >> conductores[i].kmsDiarios[j];
            conductores[i].totalKms += conductores[i].kmsDiarios[j];
        }
        cin.ignore();
    }
    

    int indiceMaxKms = 0;
    for (int i = 1; i < numConductores; i++) {
        if (conductores[i].totalKms > conductores[indiceMaxKms].totalKms) {
            indiceMaxKms = i;
        }
    }
    cout << "\nRegistro deConductores y Kilómetros" << endl;
    cout << "Nombre\t";
    
    for (int j = 0; j < 7; j++) {
        cout << diasSemana[j] << "\t";
    }
    cout << "Total" << endl;
    
    for (int i = 0; i < numConductores; i++) {
        cout << conductores[i].nombre << "\t\t";
        
        for (int j = 0; j < 7; j++) {
            cout << conductores[i].kmsDiarios[j] << "\t";
        }
        cout << conductores[i].totalKms << endl;
    }
    
    cout << "\nEl conductor con mayor kilometraje es: " << conductores[indiceMaxKms].nombre 
         << " con " << conductores[indiceMaxKms].totalKms << " kilometros." << endl;
    
    
    for (int i = 0; i < numConductores - 1; i++) {
        for (int j = 0; j < numConductores - i - 1; j++) {
            if (conductores[j].totalKms < conductores[j + 1].totalKms) {
               
                Conductor temp = conductores[j];
                conductores[j] = conductores[j + 1];
                conductores[j + 1] = temp;
            }
        }
    }
    cout << "\nRepresentación Gráfica (Orden Descendente)" << endl;

    double maxKilometrosTotal = conductores[0].totalKms;
    const int ANCHO_GRAFICO = 50; 
    
    for (int i = 0; i < numConductores; i++) {
      
        int numAsteriscos = static_cast<int>((conductores[i].totalKms / maxKilometrosTotal) * ANCHO_GRAFICO);
        
        
        cout << left << setw(15) << conductores[i].nombre << " | " 
             << right << setw(7) << conductores[i].totalKms << " km | ";
        
        for (int j = 0; j < numAsteriscos; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}