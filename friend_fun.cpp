#include<bits/stdc++.h>
using namespace std;

class tution{
     int age;
     string name;
     public:
         tution(string n ,int a){
              name=n;
              age= a;
         }

     friend void student(tution);
};

   void student(tution s){
        cout<<" Welcome to the portal you are - "<<s.name<<" ,you are the excelent coder from "<< s.age<<" years";
   };

   int main(){
         tution s("harshtriathi",21);
         
          student(s);





   }


