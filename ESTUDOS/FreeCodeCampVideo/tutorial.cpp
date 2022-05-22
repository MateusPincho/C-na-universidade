#include <iostream>

using namespace std;

class Employee
{
    public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself();
    Employee(string, string, int);
};

int main()
{
    system("CLS");

    // Ao criar um construtor, você perde seu constructor default
    // Ao instanciar um objeto, é preciso usar seu construtor criado 

    Employee empregado = Employee("Mateus", "Bazar", 19);
    empregado.IntroduceYourself();

}

void Employee :: IntroduceYourself()
{
    cout << "Name - " << Name << endl;
    cout << "Company - " << Company << endl;
    cout << "Age - " << Age << endl;
} 

Employee :: Employee(string name, string company, int age)
{
    Name = name;
    Company = company;
    Age = age;
}