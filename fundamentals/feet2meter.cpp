#include <iostream>

using namespace std;

int main(){
    double f;
    double m;
    int counter;

    counter=0;

    for ( f = 1.0; f <=100; f++)
    {
        m=f/3.28;
        cout << f << "feet is "<< m <<" meters. "<< endl;

        counter++;

        if( counter == 10){
            cout << endl;
            counter=0;
        }
        
    }
    
}