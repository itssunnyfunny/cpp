#include <iostream>
#include <string>
#include <vector>
#include <deque>    
#include <list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <ctime>
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
        {1}

    }
    return 0;

}

