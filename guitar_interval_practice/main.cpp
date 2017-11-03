#include <iostream>
#include <string>
#include <random>
#include <ctime>


using namespace std;



int main()
{
    srand(time(NULL));
    cout << "Enter y for practice scale\n";

    string input;
while(cin >> input){

    if (input == "y"){

    string intervals[7] {"seconds", "thirds", "fourths", "fifths", "sixths", "sevenths", "octaves"};
    string scale[2] {" minor", " major"};
    string key[15] {"A", "Ab", "B", "Bb", "Cb", "C", "C#", "Db", "D", "Eb", "E", "F", "F#", "Gb", "G",};

    cout <<  key[rand()%15]<< scale[rand()%2] <<" using the interval of "<< intervals[rand()%6];
    cout <<endl;
    }
    else if(input == "x")
        break;
    else
            cout << "Incorrect selection\n";



}
}
