#include<iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion() =0;
    //we can make this class obligatory by making this functio a pure vitual function.
};



class Employee:AbstractEmployee{
    private: //encapsulated
    //public:
    //protected:
    string Name;
    string Company;
    int Age;
    
    
    public:
    
    void setName(string name){
        Name = name;
    }
    string getName() {
        return Name;
    }

    void setCompany(string company){
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    
    void setAge(int age){
        if(age>=18)
        Age = age;
    }
    int getAge() {
        return Age;
    }




    void IntroduceYourself(){ //Class Method, ek baar bulao, Aa Jaunga.
        cout<<"Name: "<<Name<<endl;
        cout<<"Company: "<<Company<<endl;
        cout<<"Age: "<<Age<<endl;
    }
    
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    
    }
        void AskForPromotion()
        {
            if (Age>40)
            cout<<Name<<" got promoted!"<<endl;
            else
            cout<< Name <<" sorry no promotion for you! "<<endl;
        }
        
        
    
};

int main ()
{

Employee employee1 = Employee("Saldina","YT", 52);
//employee1.Name = "Vivashwat";
//employee1.Company = "Google";
//employee1.Age = 25;
employee1.IntroduceYourself();

Employee employee2= Employee("John","Amazon", 35);
//employee2.Name = "John";
//employee2.Company = "Google";
//employee2.Age = 18;

employee2.IntroduceYourself();

employee1.setAge(9);
cout<<employee1.getName()<<" is "<< employee1.getAge() << " years old "<<endl;


employee1.AskForPromotion();
employee2.AskForPromotion();
// if you keep the class private; you'll now not be able to see any dropdown options.


//Behaviour

//AccessModifier. 


//Constructors (Just a method)

//Three Rules of Constructors;

/*
No Return Type;
same name as class name;
Constructors must be public.
*/


// Pillers of OOP
//Encapsulation (Getters and setters)

//Abstraction (Abstraction Class)
//Inheritance;




    return 0;
}