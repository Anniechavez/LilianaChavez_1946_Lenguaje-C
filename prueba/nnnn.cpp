#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Declaración de variables
    string nombre[6];
    float precio[6];
    int cantidades[6][4];
    
    // Abrir archivo de entrada
    ifstream archivoDatos("consolidado.txt");
    if (!archivoDatos) {
        cout << "Error al abrir el archivo de datos." << endl;
        return 1;
    }
    
    // Leer datos
    for (int i = 0; i < 6; i++) {
        archivoDatos >> nombre[i] >> precio[i];
        for (int j = 0; j < 4; j++) {
            archivoDatos >> cantidades[i][j];
        }
    }
    archivoDatos.close();
    
    // Archivo de resultados
    ofstream archivoConsolidado("consolidado.txt");
    
    // 1. Cantidades totales de cada artículo
    archivoConsolidado << "CANTIDAD TOTAL DE CADA ARTICULO\n";
    for (int i = 0; i < 6; i++) {
        int total = 0;
        for (int j = 0; j < 4; j++) {
            total += cantidades[i][j];
        }
        archivoConsolidado << nombre[i] << " " << total << "\n";
    }
    
    // 2. Cantidades en sucursal Sur
    archivoConsolidado << "\nCANTIDAD DE ARTICULOS EN SUCURSAL SUR\n";
    for (int i = 0; i < 6; i++) {
        archivoConsolidado << nombre[i] << " " << cantidades[i][2] << "\n";
    }
    
    // 3. Cantidad de teclados en sucursal Norte
    int tecladosNorte = 0;
    for (int i = 0; i < 6; i++) {
        if (nombre[i] == "teclado") {
            tecladosNorte = cantidades[i][0];
            break;
        }
    }
    archivoConsolidado << "\nCANTIDAD DE TECLADOS EN SUCURSAL NORTE\n";
    archivoConsolidado << tecladosNorte << "\n";
    
    // 4. Recaudación por sucursal
    archivoConsolidado << "\nRECAUDACION TOTAL POR SUCURSAL\n";
    string sucursales[] = {"Norte", "Este", "Sur", "Oeste"};
    float recaudacionesSucursales[4] = {0};
    
    for (int j = 0; j < 4; j++) {
        float recaudacion = 0;
        for (int i = 0; i < 6; i++) {
            recaudacion += precio[i] * cantidades[i][j];
        }
        recaudacionesSucursales[j] = recaudacion;
        archivoConsolidado << sucursales[j] << " " << recaudacion << "\n";
    }
    
    // 5. Recaudación total de la empresa
    float recaudacionTotal = 0;
    for (float recaudacion : recaudacionesSucursales) {
        recaudacionTotal += recaudacion;
    }
    archivoConsolidado << "\nRECAUDACION TOTAL DE LA EMPRESA\n";
    archivoConsolidado << recaudacionTotal << "\n";
    
    // 6. Sucursal de mayor recaudación
    int sucursalMayor = 0;
    for (int i = 1; i < 4; i++) {
        if (recaudacionesSucursales[i] > recaudacionesSucursales[sucursalMayor]) {
            sucursalMayor = i;
        }
    }
    archivoConsolidado << "\nSUCURSAL DE MAYOR RECAUDACION\n";
    archivoConsolidado << sucursales[sucursalMayor] << "\n";
    
    archivoConsolidado.close();
    
    cout << "Análisis completado. Resultados guardados en consolidado.txt" << endl;
    
    return 0;
}