#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string nombre[6];
    double precio[6];
    int cantidades[6][4];

    ifstream archivoDatos("consolidados.txt");
    if (archivoDatos) {
        cout << "Error al abrir el archivo de datos." << endl;
        return 1;
    }
    
    for (int i = 0; i < 6; i++) {
        archivoDatos >> nombre[i] >> precio[i];
        for (int j = 0; j < 4; j++) {
            archivoDatos >> cantidades[i][j];
        }
    }
    archivoDatos.close();
    
    ofstream archivoConsolidado("consolidado.txt");
    
    archivoConsolidado << "Cantidades totales de cada artículo:\t";
    for (int i = 0; i < 6; i++) {
        int total = 0;
        for (int j = 0; j < 4; j++) {
            total += cantidades[i][j];
        }
        archivoConsolidado << nombre[i] << ": " << total << endl;
    }
    archivoConsolidado << endl;
    
    archivoConsolidado << "Cantidades de artículos en la sucursal Sur:\t";
    for (int i = 0; i < 6; i++) {
        archivoConsolidado << nombre[i] << ": " << cantidades[i][2] << endl;
    }
    archivoConsolidado << endl;
    
    int tecladosNorte = 0;
    for (int i = 0; i < 6; i++) {
        if (nombre[i] == "teclado") {
            tecladosNorte = cantidades[i][0];
            break;
        }
    }
    archivoConsolidado << "Cantidad de teclados en la sucursal Norte: \t" 
                       << tecladosNorte << endl << endl;
    
    archivoConsolidado << "Recaudación total por sucursal:\t";
    string sucursales[] = {"Norte", "Este", "Sur", "Oeste"};
    double recaudacionesSucursales[4] = {0};
    
    for (int j = 0; j < 4; j++) {
        double recaudacion = 0;
        for (int i = 0; i < 6; i++) {
            recaudacion += precio[i] * cantidades[i][j];
        }
        recaudacionesSucursales[j] = recaudacion;
        archivoConsolidado << sucursales[j] << ": $" << recaudacion << endl;
    }
    archivoConsolidado << endl;
    
    double recaudacionTotal = 0;
    for (double recaudacion : recaudacionesSucursales) {
        recaudacionTotal += recaudacion;
    }
    archivoConsolidado << "Recaudación total de la empresa:\t" 
                       << recaudacionTotal << endl << endl;
    
    int sucursalMayor = 0;
    for (int i = 1; i < 4; i++) {
        if (recaudacionesSucursales[i] > recaudacionesSucursales[sucursalMayor]) {
            sucursalMayor = i;
        }
    }
    archivoConsolidado << "Sucursal de mayor recaudación:\t " 
                       << sucursales[sucursalMayor] << endl;
    
    archivoConsolidado.close();
    
    cout << "Resultados guardados en consolidado.txt" << endl;
    
    return 0;
}