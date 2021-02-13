#include<bits/stdc++.h>
using namespace std;

class Person{
    string name;
    string name2;
    int age;
   public:
    Person(string s,string r,int a){
        name = s;
        name2=r;
        age = a;
    }
    
    friend class Government;
};

class Government{
  public:

    void diplay_details(Person p){
        cout<<"Hello to the government portal "<<p.name<<endl;
        cout<<"Hello to the government portal "<<p.name2<<endl;
        cout<<"our excellent hackers told us your age is "<<p.age;
    }
};

int main(){
    Person p("Harsh","tripathi",46);
    Government g;
   // p.name = "Kartavya";
    g.diplay_details(p);
}