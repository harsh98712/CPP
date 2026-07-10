#include <iostream>
using namespace std;

void pourchai(int cups){
    cups = cups + 5;
    cout << "Poured cups " << cups << endl;
}

int main(){
    int cups= 4;
    pourchai(cups);
    cout << "Poured cups " << cups << endl;
    return 0;
}