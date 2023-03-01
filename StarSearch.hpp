//
//  StarSearch.hpp
//  StarSearch
//
//  Created by Jan M Rodriguez cumba on 2/8/23.
/*
 
 Actividad 11.3: Implementación de clases, en la solución de problemas verbales. CECS2203 Computer Programming Laboratory I
 
 Nombre: Jan Rodriguez Cumba  # Est:136125 Sec: 05
 
 Instrucciones para el estudiante:
 
 1. Implemente una clase con atributos numéricos y “string”.
 2. Implemente funciones constructoras, destructor, “mutators”, “accessors”, “member”
    en su clase.
 3. Implemente la tabla descriptive de su clase.
 4. Implemente su diagrama UML.
 5. Implemente su programa en un tres archivos.
 6. Envíe su solución en un archivo en formato PDF.
 Descripción de los problemas:
 (Gaddis) Program Challenges 12. Star Search pág. 370 Cap 6.
 
 • Defina los siguientes atributos: name del tipo string, scores como un arreglo de números reales,
    y la cantidad de puntuaciones.
 
 • Cada puntuación almacenada dentro del arreglo la posición i esta relacionada con la puntuación
    del juez #i.
 
 • La variable que almacena la cantidad de puntuaciones debe de aumentar cada vez que una puntuación es entrada.
 
 • Define a dos objetos con “default constructors” y el constructor con parámetros.
 
 
 • Defina la función setScore(int index, double value) para almacenar la puntación en la posición i
    del arreglo de puntuaciones.
 
 • Defina una función getSore(int index) para etraer el valor de la posición i dentro del arreglo.
 
 
 • Defina dos funciones miembro adicionales que retornen la puntuación mayor y menor del arreglo.
 
 • Coloque un mensaje en los constructores y en la función destructora.
 
 • Use los datos del libro para verificar sus resultados.
 
 • Imprima sus resultados con dos cifras significativas.
 
 Valor Total de 100 pts.
 */


#ifndef StarSearch_hpp
#define StarSearch_hpp
#include <string>
#include <stdio.h>
using namespace std;

const int SIZE = 30;

class StarSearch{
    
private:
    
    string names[SIZE];
    float Score[SIZE];
    int NumScores;
    
    float MaxNum;
    float MinNum;
    
    
public:
    
    StarSearch();
    
    ~StarSearch();
    
    void setNumScores();
    void setName();
    void setScore();
    
    void setMax();
    void setMin();
    float getMax() const;
    float getMin() const;
    
    void display() const;
};


#endif /* StarSearch_hpp */
