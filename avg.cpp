#include<iostream>

using namespace std;

int main() {
    int a,b,c;
    float average;
    cout << "Enter 3 numbers: " << endl;
    cin >> a >> b >> c;
    average = float(a + b + c)/3.0;//average is calculated
    cout << "Average = " << average << endl;

    return 0;
}
