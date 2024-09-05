#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string name;
    double salary, installment, insurance, tax, net, taxrate;

    cout << "Please enter employee name" << endl;
    getline(cin, name);

    cout << "Enter monthly salary" << endl;
    cin >> salary;

    cout << "Enter tax rate" << endl;
    cin >> taxrate;

    cout << "Enter monthly installment" << endl;
    cin >> installment;

    cout << "Enter monthly insurance" << endl;
    cin >> insurance;

    tax = taxrate/100*salary;
    net = salary-tax-installment-insurance;
    
    cout << " " << endl;
    cout << "calculating..." << endl;
    cout << " " << endl;
    cout << "preparing payslip..." << endl;    
    cout << " " << endl;

    cout << "Payslip for Employee" << endl;
    cout << "====================" << endl;
    cout << "Name: " << name << endl;
    cout << "Gross Salary: $" << salary << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Installment: $" << installment << endl;
    cout << "Insurance: $" << insurance << endl;
    cout << "Net Salary: $" << net << endl;

 return 0;   
}