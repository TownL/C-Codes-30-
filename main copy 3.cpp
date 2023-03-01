

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

/*
 40. Convert the following while loop to a do-while loop:
    
    int x = 1; while (x > 0) {
    cout << "enter a number: ";
    cin >> x; }
    
    
    
int x = 1;
    do{
        cout << "enter a number: ";
        cin >> x;
    }while(x > 0);
    
    return 0;
}
 

                                    OUTPUT
 
 enter a number: 0
 Program ended with exit code: 0
 */



/*
 41. Convert the following do-while loop to a while loop:
 
 char sure; do
 {
 cout << "Are you sure you want to quit? ";
 cin >> sure;
 } while (sure != 'Y' && sure != 'N');
 
 
    
char sure;
    cout << "Are you sure you want to quit? ";
    cin >> sure;
    while (sure != 'Y' && sure == 'N'){
    cout << "Are you sure you want to quit? ";
    cin >> sure;
    }
    return 0;
 
                                    OUTPUT
 Are you sure you want to quit? N
 Are you sure you want to quit? N
 Are you sure you want to quit? Y
 Program ended with exit code: 0
 
}
*/
    
/*
 42. Convert the following while loop to a for loop:
 
 int count = 0; while (count < 50) {
 cout << "count is " << count << endl;
 count++; }
 
 

    for(int count = 0;count<50;count++){
        cout<<"count is "<<count<<endl;
    }
    return 0;
}
    
                                OUTPUT
count is 0
count is 1
count is 2
count is 3
count is 4
count is 5
count is 6
count is 7
count is 8
count is 9
count is 10
count is 11
count is 12
count is 13
count is 14
count is 15
count is 16
count is 17
count is 18
count is 19
count is 20
count is 21
count is 22
count is 23
count is 24
count is 25
count is 26
count is 27
count is 28
count is 29
count is 30
count is 31
count is 32
count is 33
count is 34
count is 35
count is 36
count is 37
count is 38
count is 39
count is 40
count is 41
count is 42
count is 43
count is 44
count is 45
count is 46
count is 47
count is 48
count is 49
Program ended with exit code: 0
*/
    
/*
 43. Convert the following for loop to a while loop:

for (int x = 50; x > 0; x−−) {
cout << x << " seconds to go.\n"; }
 
    int x = 50;
    while (x > 0){
        cout << x << " seconds to go.\n";
        x--;
    }
    return 0;
 }

                                    OUTPUT

50 seconds to go.
49 seconds to go.
48 seconds to go.
47 seconds to go.
46 seconds to go.
45 seconds to go.
44 seconds to go.
43 seconds to go.
42 seconds to go.
41 seconds to go.
40 seconds to go.
39 seconds to go.
38 seconds to go.
37 seconds to go.
36 seconds to go.
35 seconds to go.
34 seconds to go.
33 seconds to go.
32 seconds to go.
31 seconds to go.
30 seconds to go.
29 seconds to go.
28 seconds to go.
27 seconds to go.
26 seconds to go.
25 seconds to go.
24 seconds to go.
23 seconds to go.
22 seconds to go.
21 seconds to go.
20 seconds to go.
19 seconds to go.
18 seconds to go.
17 seconds to go.
16 seconds to go.
15 seconds to go.
14 seconds to go.
13 seconds to go.
12 seconds to go.
11 seconds to go.
10 seconds to go.
9 seconds to go.
8 seconds to go.
7 seconds to go.
6 seconds to go.
5 seconds to go.
4 seconds to go.
3 seconds to go.
2 seconds to go.
1 seconds to go.
 
Program ended with exit code: 0
*/

