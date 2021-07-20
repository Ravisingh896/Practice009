#include <iostream>

using namespace std;

int main()
{
    string student_name;
    int studentage;
    float height;
    student_name="Ravi";
    studentage=32;
    height=5.11;
    cout << "Relax, nothing is under control :"<<student_name << endl;
    cout << " How Young am I "<<studentage << endl;
    cout << " Tallest guy in my tiny village "<<height << endl;
    cout << " size of int variable "<<sizeof(studentage)<<endl;
    cout << " size of string variable "<<sizeof(student_name)<<endl;
    cout << " size of float variable "<<sizeof(height)<<endl;
    return 0;
}
