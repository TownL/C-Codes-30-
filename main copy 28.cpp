/*
 
 CECS2203 Computer Programming Laboratory I
 Nombre: Jan M. Rodriguez Cumba # Est: 136125 Sec: 05
 
 Instrucciones para el estudiante:
 1. Implemente funciones con arreglo bidimensionales como parámetros de entrada.
 2. Implemente arreglos paralelos.
 3. Implemente el Algoritmo de ordenación del Selection Sort.
 4. Envíe su solución y la salida en un archivo en formato PDF.
 
 Descripción de los problemas:
 1. (Gaddis) Programming Challenges 9. Speakers’ Bureau, pág. 653, Cap 11.

 
 
 e. Ordene los nombres de los conferenciantes alfabéticamente.
 f. Realice una búsqueda por el número de teléfono e imprima los datos del
    conferenciante.
 
 

 Valor 100 pts.
 
 
 9. Speakers’ Bureau
 
 Write a program that keeps track of a speakers’ bureau.
 The program should use a structure to store the following data about a speaker:
 
 Name
 Telephone Number
 Speaking Topic
 Fee Required
 
 The program should use an array of at least 10 structures.
 It should let the user enter data into the array, change the contents of any element, and display
    all the data stored in the array.
 The program should have a menu-driven user interface.
 Input Validation: When the data for a new speaker is entered, be sure the user enters data for all
    the fields.
 No negative amounts should be entered for a speaker’s fee.

 
 
 */


#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
using namespace std;

const int NUM_CONF = 20;
 

void getMenu();

void getInformation(string NameConf[NUM_CONF], string Phone[NUM_CONF], string Topic[NUM_CONF],
                    int &numberConf, string Fee[NUM_CONF]);

void getChange(string NameConf[NUM_CONF], string Phone[NUM_CONF], string Topic[NUM_CONF], int numberConf,
               string Fee[NUM_CONF], string tempNameConf);


void getList(string NameConf[NUM_CONF], string Phone[NUM_CONF], string Topic[NUM_CONF], int numberConf,
             string Fee[NUM_CONF]);

void searchTopic(string tempTopic, string NameConf[NUM_CONF], string Phone[NUM_CONF],
                 string Topic[NUM_CONF], int numberConf, string Fee[NUM_CONF]);

void sortArray(string NameConf[NUM_CONF], string Phone[NUM_CONF], string Topic[NUM_CONF], int numberConf,
               string Fee[NUM_CONF]);

void searchPhone(string tempPhone, string NameConf[NUM_CONF], string Phone[NUM_CONF], string
                 Topic[NUM_CONF], int numberConf, string Fee[NUM_CONF]);

int main() {

    string NameConf[NUM_CONF], Phone[NUM_CONF], Topic[NUM_CONF];
    string Fee[NUM_CONF];
    int numberConf = 0;
    int choice = 0;
    string tempNameConf, tempTopic, tempPhone;

    do {
        getMenu();
        
        cout << "Enter an option:";
        cin >> choice;
        
        
        switch (choice) {
                
            case 1:
                
                getInformation(NameConf, Phone, Topic, numberConf, Fee);
                
                break;
                
            case 2:
                cin.ignore();
                cout<<"Wich speaker you want to edit?:";
                getline(cin, tempNameConf);
                
                getChange(NameConf, Phone, Topic, numberConf, Fee, tempNameConf);
                
                break;
                
            case 3:
                
                sortArray(NameConf, Phone, Topic, numberConf, Fee);
                getList(NameConf, Phone, Topic, numberConf, Fee);
                
                break;
                
            case 4:
                
                cout<<"Enter a topic to find:";
                cin.ignore();
                getline(cin, tempTopic);
                
                searchTopic(tempTopic, NameConf, Phone, Topic, numberConf, Fee);
                
                break;
                
            case 5:
                cout<<"Enter a number to find:";
                cin.ignore();
                getline(cin, tempPhone);
                
                searchPhone(tempPhone, NameConf, Phone, Topic, numberConf, Fee);
                
                break;
                
            case 6:
                cout<<"See you soon\n";
                
                break;
                
            default:
                cout<<"Invalid option!!!.\n";
                
        }//end switch
        
        
    } while (choice != 6);

return 0;
}//end main

void getMenu() {
    
    cout<<"Chose you option:\n";
    cout<<"1. Add information of a speaker.\n";
    cout<<"2. Change information of a speaker.\n";
    cout<<"3. See the information of the speakers.\n";
    cout<<"4. Speakers by topic.\n";
    cout<<"5. Search speaker by phone number.\n";
    cout<<"6. Exit\n";
    cout<<endl;
    
}//end getMenu function


void getInformation(string NameConf[NUM_CONF], string Phone[NUM_CONF], string Topic[NUM_CONF],
                    int &numberConf, string Fee[NUM_CONF]) {
    
    cout<<"How many speaker are?";
    cin>>numberConf;
    cout<<endl;
    
    for (int i = 0; i < numberConf; i++) {
        
        cin.ignore();
        
        cout<<"Enter the speaker's name #"<<i + 1<<":";
        getline(cin, NameConf[i]);
        
        cout<<"Phone number:";
        getline(cin, Phone[i]);
        
        while (Phone[i - 1] == Phone[i]) {
            cout<<"The number is already registered\n";
            cout<<"Phone number:";
            cin.ignore();
            getline(cin, Phone[i]);
            
        }//end while
        
        cout<<"Topic:";
        getline(cin, Topic[i]);
        cout<<"Fee: $";
        cin>>Fee[i];
        cout<<endl;
        
        
    }//end for
    
}//end getInformation function


void getChange(string NameConf[NUM_CONF], string Phone[NUM_CONF], string Topic[NUM_CONF],
               int numberConf, string Fee[NUM_CONF], string tempNameConf) {

    
    int index = 0;
    int position = -1;
    bool found = false;

    while (index < numberConf && !found) {

        if ((NameConf[index] == tempNameConf))
        {
            
            found = true;
            position = index;
            
        }//end if

        index++;
        
    }//end while

    if (position == -1) {
        cout<<"The speaker "<<tempNameConf<<" is not listed.\n";
        
    }//end if

    else {

        for (int i = position; i == position; i++) {
            
            if (NameConf[position] == tempNameConf)
            {
                
                for (int i = 0; i < 1; i++) {
                    
                    cout<<"Enter the speaker's name #"<<position + 1<<":";
                    cin.ignore();
                    getline(cin, NameConf[i]);
                    
                    cout<<"Phone number:";
                    getline(cin, Phone[i]);
                    
                    cout<<"Topic:";
                    getline(cin, Topic[i]);
                    
                    cout<<"Fee:";
                    cin>>Fee[i];
                    
                }//end for
                
            }//end if
            
        }//end for
        
    }//end else
    cout<<endl;
    
}//end getChange function



void getList(string NameConf[NUM_CONF], string Phone[NUM_CONF], string Topic[NUM_CONF],
             int numberConf, string Fee[NUM_CONF]) {
    
    for (int i = 0; i < numberConf; i++) {
        
        cout<<NameConf[i];
        cout<<endl;
        cout<<"Phone number:"<< Phone[i] <<endl;
        cout<<"Topic:"<<Topic[i]<<endl;
        cout<<"Fee: $"<<Fee[i]<<endl;
        cout<<endl;
        
        cout<<endl;
        
    }//end for
    
}//end getList function

void searchTopic(string tempTopic, string NameConf[NUM_CONF], string Phone[NUM_CONF], string
                 Topic[NUM_CONF], int numberConf, string Fee[NUM_CONF]) {

    int index = 0;
    int position = -1;
    bool found = false;

    while (index < numberConf && !found) {

        if ((Topic[index] == tempTopic)) {
            
            found = true;
            position = index;
            
        }//end if

        index++;
        
    }//end while

    if (index == -1) {
        cout<<"This topic "<<tempTopic<<" is not listed.\n";
        
    }//end if

    else {
        cout<<endl;
        
        for (int i = 0; i < 1; i++) {
            
            cout<<NameConf[index - 1]<<endl;
            
            for (int j = 0; j < 1; j++) {
                
                cout<<"Phone number:"<<Phone[index - 1]<<endl;
                
                cout<<"Topic:" << Topic[index - 1] <<endl;
                cout<<"Fee:"<< Fee[index - 1][j] <<endl;
                cout<<endl;
                
            }//end for
            
        }//end for
        
    }//end else
    cout<<endl;
    
}//end searchTopic function

void sortArray(string NameConf[NUM_CONF], string Phone[NUM_CONF], string Topic[NUM_CONF],
               int numberConf, string Fee[NUM_CONF]) {
    
    bool swap;
    string temp, temp_phone, temp_topic;
    char temp_fee;
    
    do
    {
        swap = false;
        for (int count = 0; count < (numberConf - 1); count++)
        {
            if (NameConf[count] > NameConf[count + 1])
            {
                temp = NameConf[count];
                temp_phone = Phone[count];
                temp_topic = Topic[count];
                temp_fee = Fee[count][count];
                
                NameConf[count] = NameConf[count + 1];
                Phone[count] = Phone[count + 1];
                Topic[count] = Topic[count + 1];
                Fee[count][count] = Fee[count + 1][count];
                
                NameConf[count + 1] = temp;
                Phone[count + 1] = temp_phone;
                Topic[count + 1] = temp_topic;
                Fee[count + 1][count] = temp_fee;
                
                swap = true;
                
            }//end if
            
        }//end for
        
    } while (swap);
    
}//end sortArray function


void searchPhone(string tempPhone, string NameConf[NUM_CONF], string Phone[NUM_CONF],
                 string Topic[NUM_CONF], int numberConf, string Fee[NUM_CONF]) {
    
    int index = 0;
    int position = -1;
    bool found = false;
    
    while (index < numberConf && !found) {
        
        if ((Phone[index] == tempPhone)) {
            
            found = true;
            position = index;
            
        }//end if
        
        index++;
        
    }//end while
    
    if (index == -1)
    {
        cout<<"This phone number "<< tempPhone <<" is not listed.\n";
        
    }//end if
    
    else {
        cout<<endl;
        
        for (int i = 0; i < 1; i++) {
            
            cout<<NameConf[index - 1]<<endl;
            
            for (int j = 0; j < 1; j++) {
                
                cout<<"Phone number:"<<Phone[index - 1]<<endl;
                
                cout<<"Topic:"<<Topic[index - 1]<<endl;
                
                cout<<"Fee:"<<Fee[index - 1][j]<<endl;
                cout<<endl;
                
            }//end for
            
        }//end for
        
    }//end else
    cout<<endl;
    
}//end searchPhone function



/*
 
 
 -----OUTPUT-----
 
 Chose you option:
 1. Add information of a speaker.
 2. Change information of a speaker.
 3. See the information of the speakers.
 4. Speakers by topic.
 5. Search speaker by phone number.
 6. Exit

 Enter an option:2
 Wich speaker you want to edit?:Jan
 The speaker Jan is not listed.

 Chose you option:
 1. Add information of a speaker.
 2. Change information of a speaker.
 3. See the information of the speakers.
 4. Speakers by topic.
 5. Search speaker by phone number.
 6. Exit

 Enter an option:1
 How many speaker are?3

 Enter the speaker's name #1:Jan
 Phone number:9394149719
 Topic:Math
 Fee: $10

 Enter the speaker's name #2:Maria
 Phone number:7873339852
 Topic:Science
 Fee: $5

 Enter the speaker's name #3:Anamaria
 Phone number:939654897
 Topic:Phylosophy
 Fee: $15

 Chose you option:
 1. Add information of a speaker.
 2. Change information of a speaker.
 3. See the information of the speakers.
 4. Speakers by topic.
 5. Search speaker by phone number.
 6. Exit

 Enter an option:3
 Anamaria
 Phone number:939654897
 Topic:Philosophy
 Fee: $50


 Jan
 Phone number:9394149719
 Topic:Math
 Fee: $1


 Maria
 Phone number:7873339852
 Topic:Science
 Fee: $1


 Chose you option:
 1. Add information of a speaker.
 2. Change information of a speaker.
 3. See the information of the speakers.
 4. Speakers by topic.
 5. Search speaker by phone number.
 6. Exit

 Enter an option:4
 Enter a topic to find:Math

 Jan
 Phone number:9394149719
 Topic:Math
 Fee:1


 Chose you option:
 1. Add information of a speaker.
 2. Change information of a speaker.
 3. See the information of the speakers.
 4. Speakers by topic.
 5. Search speaker by phone number.
 6. Exit

 Enter an option:5
 Enter a number to find:9394149719

 Jan
 Phone number:9394149719
 Topic:Math
 Fee:1


 Chose you option:
 1. Add information of a speaker.
 2. Change information of a speaker.
 3. See the information of the speakers.
 4. Speakers by topic.
 5. Search speaker by phone number.
 6. Exit

 Enter an option:6
 See you soon
 Program ended with exit code: 0

*/

