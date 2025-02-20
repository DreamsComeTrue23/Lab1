#include <iostream>

using namespace std;

int main()
{

    //assignment 1
    string userName;
    string studentID;

    cout << "What is your name?\n";
    cin >> userName;

    cout << "Hello " << userName << "\n";
    cout << "What is your Student ID?" << endl;

    cin >> studentID;
    cout << "Your ID is " << studentID << endl;

    //assignment 2
    int var1, var2;
    int sum, diff, prod;

    cout << "Enter var1: ";
    cin >> var1;
    cout << "Enter var2: ";
    cin >> var2;

    sum = var1 + var2;
    diff = var1 - var2;
    prod = var1 * var2;

    cout << "var1: " << var1 << "\n";
    cout << "var2: " << var2 << "\n";
    cout << "sum: " << sum << "\n";
    cout << "diff: " << diff << "\n";
    cout << "prod: " << prod << endl;


    //assignment 3
    string name;
    cout << "Enter your name: ";
    cin >> name;

    int labGrade, midtermGrade, finalGrade;
    cout << "Lab Grade: " << endl;
    cin >> labGrade;
    cout << "Midterm Grade: " << endl;
    cin >> midtermGrade;
    cout << "Final Grade: " << endl;
    cin >> finalGrade;

    int lastScore = labGrade * 0.25 + midtermGrade * 0.35 + finalGrade * 0.4;
    cout << "Name: " << name << "\nLab: " << labGrade << "\nMidterm: " << midtermGrade << "\nFinal: " << finalGrade << "\nLast Score: " << lastScore << endl;

    //assignment 4
    cout << "*\n**\n***\n**\n*";

    return 0;
}
