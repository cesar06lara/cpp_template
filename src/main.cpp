#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> datos = {10, 20, 30, 40, 50};
    int suma = std::accumulate(datos.begin(), datos.end(), 0);
    
    std::cout << "=== Entorno C++23 Configurado con Éxito ===" << std::endl;
    std::cout << "Suma total del vector: " << suma << std::endl;
    
    return 0;
}
