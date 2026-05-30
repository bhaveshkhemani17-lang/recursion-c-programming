#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class Recursion {

public:
    Recursion() {
        while (true) {
            system("cls");
            cout<<"---Recursion Operations---\n"
                <<"1. Find Factorial\n"
                <<"2. Print Fibonacci Series\n"
                <<"3. Tower Of Hanoi\n"
                <<"3. Exit\n";
            cout<<"Enter a choice..";
            char c = getch();

            switch(c) {
            case '1':
                factorial();
                break;
            case '2':
                fibonacci();
                break;
            case '3':
                towerOfHanoifunction();
                break;
            default:
                cout<<"\n\nExiting the program...";
                return;
            }
        }
    }

    void factorial() {
        int n;
        system("cls");
        cout<<"Find Factorial...\n"
            <<"Enter a number - ";
        cin>>n;

        cout<<"\n\nFactorial of "<<n<<" is - "<<fact(n)<<"\n\n";
        getch();
    }
    void fibonacci() {
        int limit;
        system("cls");
        cout<<"Print Fibonacci...\n"
            <<"Enter a limit - ";
        cin>>limit;

        cout<<"\n\nSeries is - ";
        for (int i = 0; i < limit; i++) {
            cout<<fibo(i)<<" ";
        }
        cout<<"\n\n";
        getch();
    }
    void towerOfHanoifunction() {
        int n;
        system("cls");
        cout<<"Tower Of Hanoi ....\n"
            <<"Enter number of disk - ";
        cin>>n;

        cout<<"\n\n";
        towerOfHanoi(n, 'A', 'B', 'C');
        getch();
    }

    int fibo(int n) {
        if (n == 0 || n == 1) return n;

        return fibo(n-1) + fibo(n-2);
    }

    int fact(int n) {
        if (n == 1) return 1;

        return n * fact(n - 1);
    }
    void towerOfHanoi(int n, char source, char aux, char dest){
        if (n == 1) {
            cout<<"Move disk 1 from "<<source<<" to "<<dest<<endl;
            return;
        }
        towerOfHanoi(n-1, source, dest, aux);
        cout<<"Move dist "<<n<<" from "<<source<<" to "<<dest<<endl;
        towerOfHanoi(n-1, aux, source, dest);
    }
};

int main() {
    Recursion r;
}
