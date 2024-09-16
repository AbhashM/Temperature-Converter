//FA2023_TemparatureConverter_Mahto
#include <iostream>
#include<iomanip>
using namespace std;


    int displayMenu()//For user to choose their desired task
    {
        int task;
        cout << "FA2023_TemperatureConverter_Mahto.cpp" << endl;
        cout << "MENU TEMPERATURE CONVERTER - Abhash Mahto" << endl;
        cout << "-----------------------------------------------" << endl;
        cout << "1.  Convert Fahrenheit temperature to Celsius" << endl;
        cout << "2.  Convert Celsius temperature to Fahrenheit" << endl;
        cout << "0.  Exit" << endl;
        cin >> task;
        return task;
    }
    int main()
    {
        float Fahrenheit, Celsius;//declaring variables

        int task;
        cout << fixed << setprecision(2);//To set decimal point to 2
        do//Loop Structure
        {
            task = displayMenu(); //call the function displayMenu to get a number return
            switch (task)
            {
            case 1: // Task1
                cout << "Enter Temperature in Farenheit" << endl;
                cin >> Fahrenheit;
                cout << "File FA2023_TemparatureConverter_Mahto" << endl;
                cout << "Farenheit to Celsius" << endl;
                cout << "-----------------------------------------" << endl;
                cout << left << setw(20) << "Fahrenheit:" << Fahrenheit<<" F"<< endl;
                cout << left << setw(20) << "Celsius" << (Fahrenheit-32)*5/9 <<" C"<< endl;
                break;
            case 2: // Task2
                cout << "Enter Temperature in Celsius" << endl;
                cin >> Celsius;
                cout << "File FA2023_TemparatureConverter_Mahto" << endl;
                cout << "Celsius to Fahrenheit" << endl;
                cout << "-----------------------------------------" << endl;
                cout << left << setw(20) << "Celsius:" << Celsius <<" C"<< endl;
                cout << left << setw(20) << "Fahrenheit:" << (Celsius*9/5) +32 <<" F"<<endl;
                break;
           
            default:
                cout << "Invalid task, Enter 1,2 or 0" << endl;//For undesired input from user
            }
        } while (task != 0); // loop back to redisplay the menu until task = 0 EXIT THE LOOP
        return 0;
   
}

