#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
class Human
{
private:
    int n,data1,data2,data3;
    string sex;
    string name1;
    string name2;
    string name3;
public:
  void input(){
    cout << endl <<"���: "<< name1 <<endl;
    cout <<"�������: "<< name2 <<endl;
    cout <<"�� �������: "<< name3 <<endl;
    cout <<"�����: "<< sex <<endl;
    cout <<"г� ����������: "<< data1 <<"."<< data2 <<"."<< data3 <<endl;
    }
    void output(){
    if(n!=1){
    cout << "������ ���\n";
    cin >> name1;
    cout << "������ ��������\n";
    cin >> name2;
    cout << "������ �� �������\n";
    cin >> name3;
    cout << "������ �����\n";
    cin >> sex;
    cout << "������ ����\n";
    cin >> data1;
    cout << "������ �����\n";
    cin >> data2;
    cout << "������ ��\n\n";http://schemas.microsoft.com/developer/msbuild/2003
    cin >> data3;
    goto obhod;
    }

    if(n=1){
    cout << "³���������� ���\n";
    cin >> name1;
    cout << "³���������� ��������\n";
    cin >> name2;
    cout << "³��������� �� �������\n";
    cin >> name3;
    cout << "³���������� �����\n";
    cin >> sex;
     cout << "³���������� ����\n";
    cin >> data1;
    cout << "³���������� �����\n";
    cin >> data2;
    cout << "³���������� ��\n\n";
    cin >> data3;
    }
    obhod:
       n=1;
    }
};
class Student : public Human
{
 private:
    int zalik,dets,data4,data5,data6,n,data1,data2,data3;
    string sex;
    string name1;
    string name2;
    string name3;
 public:
     void input1(){
    cout << endl <<"����� ������� ������: �"<< zalik <<endl;
    cout <<"������� �������� �� ����������: "<< dets <<endl;
    cout <<"���� ������: "<< data4 <<"."<< data5 <<"."<< data6 <<endl;
    }
  void output1(){
    if(n!=1){
    cout << "������ ����� ������� ������\n";
    cin >> zalik;
    cout << "������ ������� �������� �� ����������\n";
    cin >> dets;
    cout << "������ ���� ������\n";
    cin >> data4;
    cout << "������ ����� ������\n";
    cin >> data5;
    cout << "������ �� ������\n\n";
    cin >> data6;
    goto obhod;
    }

    if(n=1){
    cout << "³���������� ����� ������� ������\n";
    cin >> zalik;
    cout << "³���������� ������� �������� �� ����������\n";
    cin >> dets;
    cout << "³���������� ���� ������\n";
    cin >> data4;
    cout << "³���������� ����� ������\n";
    cin >> data5;
    cout << "³���������� �� ������\n\n";
    cin >> data6;
    }
    obhod:
       n=1;
    }
};
int main(){
   setlocale(LC_ALL, "Ukrainian");
Human Human;
Student Student;
   int p = 1;
   int mod;
   int obhod2=1;
   int obhod1=1;
while (p = 1)
    {
            cout <<endl<< " �����i�� �i�\n";
            cout << " 1.����������� ���������� ��� ��������\n";
            cout << " 2.����������\n";
            cout << " 3.���������� ������ ��� ��������\n";
            cin >> mod;
               if (mod == 1) {
                Student.output1();
                obhod1++;
               }
               if (mod == 2) {
                    if(obhod2!=1){
                Human.input();
                    }
                    if(obhod1!=1){

                Student.input1();
                    }
                    else{
                        cout<<"���� ������"<<endl;
                    }
               }
               if (mod == 3) {
               Human.output();
               obhod2++;
               }
    }
}

