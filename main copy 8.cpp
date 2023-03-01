/*
 
 Jan Rodriguez
 
 Instrucciones para el estudiante:
1. Generar números al azar dentro de un intervalo.
2. Implementación de funciones por valor en sus parámetros de entrada
3. Implementar funciones que retornen un valor.
 
Descripción de los problemas:
1. (Gaddis) Programming Challenges, 20. Random Number Guessing Game pág. 297, Cap 5.
 
a. Implemente una función que genere un numero al azar entre 50 y 100
b. Implemente funciones para imprimir los mensajes de que si acertó el numero o no.
c. Implemente otra función que genere tres mensajes distintos aleatoriamente cada
   vez que el usuario entre el valor numérico.
d. Pregunte al usuario si desea seguir jugando
e. Implemente una función que Imprima la estadística de la cantidad de intentos
   correctos e incorrectos, al terminar el juego.
Valor 100 pts
 
 20. Random Number Guessing Game
 Write a program that generates a random number and asks the user to guess what the number is. If the user’s guess is higher than the random number, the program should display “Too high, try again.” If the user’s guess is lower than the random number, the program should display “Too low, try again.” The program should use a loop that repeats until the user correctly guesses the random number.
 
 */




#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int getanswer(){
    
const int max = 100, min = 50;
int answer;
    
answer = (rand() %(max - min + 1) + min );
return answer;
}


int getguess(){
int guess;
    
      cout << "GUESS THE NUMBER BEWTEEN 50 AND 100:\n";
      cin >> guess;
      return guess;
}


void getfail(){
int loser;

      loser = (rand() % (3 + 1));
      if (loser == 1)
      {
             cout << "Nice try but wrong, try again";
      }
      else if (loser == 2)
      {
             cout << "Getting close but wrong, try again";
      }
      else if (loser == 3)
      {
             cout << "Almost there but wrong, try again";
      }
}


void gethappy(){
int winner;
    
      winner = (rand() % (3 + 1));
      if (winner == 1)
      {
             cout << "Nice, you got it ";
      }
      else if (winner == 2)
      {
             cout << "Great work ";
      }
      else if (winner == 3)
      {
             cout << "CORRECT!!";
      }
}




int main()
{
    
srand(time(0));
    
int guess, answer, random = 0, choice = 0, right=0, wrong=0, average;
    
    cout << "Want to play a game\n";
do
{
    answer = getanswer();
    guess = getguess();
    
    do
    {
        if(guess<answer)
        {
            getfail();
            cout << "\nthe number is too low\n";
            cin >> guess;
            wrong++;
        }
        else if(guess>answer)
        {
            getfail();
            cout << "\nthe number is too high\n";
            cin >> guess;
            wrong++;
        }
    } while (guess != answer);
    gethappy();
    
    cout << "if you want to play again enter any number except 1 \n";
    cin >> choice;
    right++;
    
} while (choice != 1);
    cout<<"Number of times you got it right: " << right <<"."<< endl;
    
    cout << "The number of times you got it wrong: " << wrong <<"."<< endl;
    average = (((double) right / (right + wrong)) * 100);
    
    cout << " The average is: " << average << endl;
    
return 0;
    
}



/*
-----------OUTPUT---------
 
 Want to play a game
 GUESS THE NUMBER BEWTEEN 50 AND 100:
 90
 
 Almost there but wrong, try again
 the number is too high
 20
 
 Nice try but wrong, try again
 the number is too low
 88

 the number is too high
 89
 
 Nice try but wrong, try again
 the number is too high
 88
 
 Getting close but wrong, try again
 the number is too high
 87
 
 Nice try but wrong, try again
 the number is too high
 85
 
 Getting close but wrong, try again
 the number is too high
 83
 
 Getting close but wrong, try again
 the number is too high
 70
 
 Getting close but wrong, try again
 the number is too low
 79
 
 Getting close but wrong, try again
 the number is too high
 75
 
 Getting close but wrong, try again
 the number is too low
 76
 
 CORRECT!!if you want to play again enter any number except 1
 1
 
 Number of times you got it right: 1.
 The number of times you got it wrong: 11.
 The average is: 8.
 
 Program ended with exit code: 0
 */
