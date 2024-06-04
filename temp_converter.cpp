#include <iostream>
#include <string>
using namespace std;

int main()
{
    string temp;
    cout << "Enter the temperature: ";
    getline(cin, temp);
    if (temp.find("C") != string::npos || temp.find("c") != string::npos)
    {
        double celsius = stod(temp);
        double fahrenheit = (celsius * 9 / 5) + 32;
        double kelvin = celsius + 273.15;
        cout << "Temperature in Celsius: " << celsius << " Celcius" << endl;
        cout << "Temperature in Fahrenheit: " << fahrenheit << " Fahrenheit" << endl;
        cout << "Temperature in Kelvin: " << kelvin << " Kelvin" << endl;
    }
    else if (temp.find("F") != string::npos || temp.find("f") != string::npos)
    {
        double fahrenheit = stod(temp);
        double celsius = (fahrenheit - 32) * 5 / 9;
        double kelvin = (fahrenheit - 32) * 5 / 9 + 273.15;
        cout << "Temperature in Fahrenheit: " << fahrenheit << " Fahrenheit" << endl;
        cout << "Temperature in Celsius: " << celsius << " Celcius" << endl;
        cout << "Temperature in Kelvin: " << kelvin << " Kelvin" << endl;
    }
    else if (temp.find("K") != string::npos || temp.find("k") != string::npos)
    {
        double kelvin = stod(temp);
        double celsius = kelvin - 273.15;
        double fahrenheit = (kelvin - 273.15) * 9 / 5 + 32;
        cout << "Temperature in Kelvin: " << kelvin << " Kelvin" << endl;
        cout << "Temperature in Celsius: " << celsius << " Celcius" << endl;
        cout << "Temperature in Fahrenheit: " << fahrenheit << " Fahrenheit" << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }
}