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
    cout << endl <<"Імя: "<< name1 <<endl;
    cout <<"Прізвище: "<< name2 <<endl;
    cout <<"По батькові: "<< name3 <<endl;
    cout <<"Стать: "<< sex <<endl;
    cout <<"Рік народження: "<< data1 <<"."<< data2 <<"."<< data3 <<endl;
    }
    void output(){
    if(n!=1){
    cout << "Введіть імя\n";
    cin >> name1;
    cout << "Введіть Прізвишще\n";
    cin >> name2;
    cout << "Введіть по батькові\n";
    cin >> name3;
    cout << "Введіть стать\n";
    cin >> sex;
    cout << "Введіть день\n";
    cin >> data1;
    cout << "Введіть місяць\n";
    cin >> data2;
    cout << "Введіть рік\n\n";http://schemas.microsoft.com/developer/msbuild/2003
    cin >> data3;
    goto obhod;
    }

    if(n=1){
    cout << "Відредагуйте імя\n";
    cin >> name1;
    cout << "Відредагуйте Прізвишще\n";
    cin >> name2;
    cout << "Відредагуйт по батькові\n";
    cin >> name3;
    cout << "Відредагуйте стать\n";
    cin >> sex;
     cout << "Відредагуйте день\n";
    cin >> data1;
    cout << "Відредагуйте місяць\n";
    cin >> data2;
    cout << "Відредагуйте рік\n\n";
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
    cout << endl <<"номер залікової книжки: №"<< zalik <<endl;
    cout <<"кількість дисциплін що вивчаються: "<< dets <<endl;
    cout <<"Дата вступу: "<< data4 <<"."<< data5 <<"."<< data6 <<endl;
    }
  void output1(){
    if(n!=1){
    cout << "Введіть номер залікової книжки\n";
    cin >> zalik;
    cout << "Введіть кількість дисциплін що вивчаються\n";
    cin >> dets;
    cout << "Введіть день вступу\n";
    cin >> data4;
    cout << "Введіть місяць вступу\n";
    cin >> data5;
    cout << "Введіть рік вступу\n\n";
    cin >> data6;
    goto obhod;
    }

    if(n=1){
    cout << "Відредагуйте номер залікової книжки\n";
    cin >> zalik;
    cout << "Відредагуйте кількість дисциплін що вивчаються\n";
    cin >> dets;
    cout << "Відредагуйте день вступу\n";
    cin >> data4;
    cout << "Відредагуйте місяць вступу\n";
    cin >> data5;
    cout << "Відредагуйте рік вступу\n\n";
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
            cout <<endl<< " Виберiть Дiю\n";
            cout << " 1.Редагування інформацію про студента\n";
            cout << " 2.Інформація\n";
            cout << " 3.Редагувати особсті дані студента\n";
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
                        cout<<"Немає данних"<<endl;
                    }
               }
               if (mod == 3) {
               Human.output();
               obhod2++;
               }
    }
}

