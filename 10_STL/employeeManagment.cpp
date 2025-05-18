#include <iostream>
#include <string>
#include <vector>
#include <numeric>

#include <algorithm>
#include <iterator>

using namespace std;

struct Employee {
    int id;
    string name;
    double salary;
};

void displayEmployee(const Employee& emp) {
    cout << "ID: " << emp.id << endl;
    cout << "Name: " << emp.name << endl;
    cout << "Salary: " << emp.salary << endl;
}


int main() {

    vector<Employee> employees = {
        {1, "shani", 100000},
        {2, "varun", 200000},
        {3, "avadesh", 300000},
        {4, "sanjay", 400000},
        {5, "ravi", 500000},
        {6, "mahesh", 600000},
        {7, "ranjiv", 700000},
        {8, "rajveer", 800000},
        {9, "vijay", 900000},
        {10, "suresh", 1000000},

    };

    sort(employees.begin(), employees.end(), [](const Employee& a, const Employee& b) {
        return a.salary < b.salary;
    });

    cout << "Employees sorted by salary: lowest to highest" << endl;

    for_each(employees.begin(), employees.end(), displayEmployee);

    vector<Employee> highPaidEmployees;
    copy_if(employees.begin(), employees.end(), back_inserter(highPaidEmployees), [](const Employee& emp) {
        return emp.salary > 500000;
    });

    cout << "Employees with salary > 500000: " << endl;

    for_each(highPaidEmployees.begin(), highPaidEmployees.end(), displayEmployee);


     double totalSalary = accumulate(employees.begin(), employees.end(), 0.0, [](double sum, const Employee& emp) {
        return sum + emp.salary;
    });

    double averageSalary = totalSalary / employees.size();

    cout << "Total salary: " << totalSalary << endl;
    cout << "Average salary: " << averageSalary << endl;

   auto highestPaid = max_element(employees.begin(), employees.end(), [](const Employee& a, const Employee& b) {
        return a.salary < b.salary;
    });

    return 0;

}

