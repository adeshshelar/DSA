#include <iostream>
using namespace std;

void isLeap(int N){
    if(N % 400==0)
        cout << "Leap Year";
    else if(N % 4==0 && N % 100 !=0)
        cout << "Leap Year";
    else 
        cout << "Not Leap Year";
}

int main(){
    int N;
    cout << "Enter a Year: ";
    cin >> N ;
    isLeap(N);
    return 0;
   
}