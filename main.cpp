#include <iostream>
#include<stdlib.h>

using namespace std;
void appearAnimatiom(string a){
    int l = a.length();
    for(int i=0;i<l;i++){
        for(double k=0;k<20000000;k++);
        cout << a[i];
    }
    cout << "\n";

};

void runningAnimation(string a){
    int l = a.length();
    for(int i = 0;i<70;i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
        cout << a;
        for(double k = 0; k<7500000; k++);
        system("cls");

    }
    cout << "                                                             " << a << "\n";
}

int main()
{
  string s;
  cin >> s;
  runningAnimation(s);
  appearAnimatiom("Welcome to my program");
  cout << "\n\n";
  appearAnimatiom("Hope you like it");

}
