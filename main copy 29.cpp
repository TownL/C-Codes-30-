/*
 13. Grade Book Modification
    Modify the grade book application in Programming Challenge 13 so it drops each student’s
    lowest score when determining the test score averages and letter grades.
 
 
 
Instrucciones para el estudiante:
1. Implemente funciones con arreglo bidimensionales como parámetros de entrada.
2. Implemente arreglos paralelos.
3. Envíe su solución y la salida en un archivo en formato PDF.
 
Descripción de los problemas:
1. (Gaddis) Programming Challenges 13. Grade Book Modification , pág. 452, Cap 7.
a. Use arreglos de caracteres en su implementación.
 
 
b. Obtenga los porcentajes de cada nota obtenida.
 Ejemplo:
    6 A’s, 4 C’s y 1 F de un total de 11 estudiantes los porcentajes son:
    A;s 6/11 54.54 %
    B’s 0 /11 0.0 %
    C’s 4/11 36.36 %
    D’s 0/11 0.0 %
    F’s 1/11 9.09 %
 
c. Imprima los datos del estudiante que obtuvo la nota más alta.
d. Imprima los datos del estudiante que obtuvo la nota más baja.
 
 
 
 
 
e. Implemente funciones con argumentos del tipo arreglo dimensionales y
   unidimensionales.
 
Valor 100 pts.
*/

#include <iostream>
#include <iomanip>
#include<cstring>
using namespace std;

const int NUM_SCORES = 20.0;
const int NUM_STUDENTS = 30.0;
const int MAX_WIDTH = 80.0;


void getData(int &num_students, int &num_scores){
    
    cout << "Entre el número de estudiantes a calificar (< 30): ";
    cin >> num_students;
    cout << "Entre la cantidad de notas (< 20): ";
    cin >> num_scores;
    
}

void getStudentNameScores(double scores[NUM_STUDENTS][NUM_SCORES],
                          char studentName[NUM_STUDENTS][MAX_WIDTH], int num_students,
                          int num_scores){

    for (int row = 0; row < num_students; row++){
        
        cout << "Introduzca el nombre del " << row + 1 << " estudiante: ";
        cin.ignore();
        cin.getline(studentName[row], 80);
        
        cout << "\nEntre las notas de " << studentName[row] << ": \n";
        for (int col = 0; col < num_scores; col++){
            cin >> scores[row][col];
        }
        
    }
    
}

void getGrade(double average, char grade[4], int &varA, int &varB, int &varC, int &varD, int &varF){

    
    if (average >= 90){
        grade[0] = 'A';
        cout<<endl;
        varA++;
    }
    else if (average >= 80){
        grade[1] = 'B';
        cout<<endl;
        varB++;
    }
    else if (average >= 70){
        grade[2] = 'C';
        cout<<endl;
        varC++;
    }
    else if (average >= 60){
        grade[3] = 'D';
        cout<<endl;
        varD++;
    }
    else if (average <= 59){
        grade[4] = 'F';
        cout<<endl;
        varF++;
    }

            
}




void getAverage(double scores[NUM_STUDENTS][NUM_SCORES], char studentName[NUM_STUDENTS][MAX_WIDTH],
                int num_students, int num_scores, char grade[], int varA, int varB, int varC, int varD, int varF){
    
    double average = 0;
    double total;
    float totalAs,totalBs,totalCs,totalDs,totalFs;
    
    for (int row = 0; row < num_students; row++)
    {
        total = 0;
        for (int col = 0; col < num_scores; col++)
        {
            total += scores[row][col];
            
            average = total / num_scores;
        }
        
        
        cout << "Promedio del estudiante "<<studentName[row]<<" es "<<average<<"% ";
        getGrade(average, grade, varA, varB, varC, varD, varF);

    }
    
    cout<<"Group obtain: "<<varA<<" A's"<<endl;
    cout<<"Group obtain: "<<varB<<" B's"<<endl;
    cout<<"Group obtain: "<<varC<<" C's"<<endl;
    cout<<"Group obtain: "<<varD<<" D's"<<endl;
    cout<<"Group obtain: "<<varF<<" F's"<<endl;

    cout<<num_students<<endl;
    totalAs = varA / num_students * 100;
    totalBs = varB / num_students * 100;
    totalCs = varC / num_students * 100;
    totalDs = varD / num_students * 100;
    totalFs = varF / num_students * 100;

    //cout<<fixed<<showpoint<<setprecision(6);
    
    cout<<"Percent of group grades: "<<endl;
    cout<< " A's " << totalAs <<"%"<<endl;
    cout<< " B's " << totalBs <<"%"<<endl;
    cout<< " C's " << totalCs <<"%"<<endl;
    cout<< " D's " << totalDs <<"%"<<endl;
    cout<< " F's " << totalFs <<"%"<<endl;

}


int main(){
    
    int num_students = 0, num_scores = 0;
    int varA = 0, varB = 0, varC = 0, varD = 0, varF = 0;
    
    double scores[NUM_STUDENTS][NUM_SCORES];
    char studentName[NUM_STUDENTS][MAX_WIDTH];
    char grade[4];
    
    
    
    getData(num_students, num_scores);
    
    getStudentNameScores(scores, studentName, num_students, num_scores);
    
    getAverage(scores, studentName, num_students, num_scores, grade, varA, varB, varC, varD, varF);

    
    return 0;
    
}



/*
 
 
 
 Entre el número de estudiantes a calificar (< 30): 11
 Entre la cantidad de notas (< 20): 1
 Introduzca el nombre del 1 estudiante: Jan Rodriguez

 Entre las notas de Jan Rodriguez:
 100
 Introduzca el nombre del 2 estudiante: Sherley

 Entre las notas de Sherley:
 90
 Introduzca el nombre del 3 estudiante: Pedro Martinez

 Entre las notas de Pedro Martinez:
 89
 Introduzca el nombre del 4 estudiante: Hector Cruz

 Entre las notas de Hector Cruz:
 80
 Introduzca el nombre del 5 estudiante: Luz Medina

 Entre las notas de Luz Medina:
 77
 Introduzca el nombre del 6 estudiante: Ana Solosabal

 Entre las notas de Ana Solosabal:
 79
 Introduzca el nombre del 7 estudiante: Juan

 Entre las notas de Juan:
 69
 Introduzca el nombre del 8 estudiante: Kevin

 Entre las notas de Kevin:
 60
 Introduzca el nombre del 9 estudiante: Luis

 Entre las notas de Luis:
 55
 Introduzca el nombre del 10 estudiante: Alejandra

 Entre las notas de Alejandra:
 45
 Introduzca el nombre del 11 estudiante: Vanessa

 Entre las notas de Vanessa:
 85
 Promedio del estudiante Jan Rodriguez es 100%
 Promedio del estudiante Sherley es 90%
 Promedio del estudiante Pedro Martinez es 89%
 Promedio del estudiante Hector Cruz es 80%
 Promedio del estudiante Luz Medina es 77%
 Promedio del estudiante Ana Solosabal es 79%
 Promedio del estudiante Juan es 69%
 Promedio del estudiante Kevin es 60%
 Promedio del estudiante Luis es 55%
 Promedio del estudiante Alejandra es 45%
 Promedio del estudiante Vanessa es 85%
 Group obtain: 2 A's
 Group obtain: 3 B's
 Group obtain: 2 C's
 Group obtain: 2 D's
 Group obtain: 2 F's
 Program ended with exit code: 0
 
 
 
 */
