/////////Basic Calculator


#include <iostream>
using namespace std;

void OpeList(){/////// Shows Operations List
    
     cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
     cout<<"\nSelect The Operation : \n"<<endl;
     cout<<"1 : Add [ + ] "<<endl;
     cout<<"2 : Sub [ - ] "<<endl;
     cout<<"3 : Mul [ * ] "<<endl;
     cout<<"4 : Div [ / ] "<<endl;
     cout<<"OR 0 to Cancel"<<endl;
}

void add1(double Num1,double Num2, double Final){/////// Add Function
    Final = Num1 + Num2;
    cout << Num1 << " + " << Num2 << " = " << Final<<endl;
}
void sub1(double Num1,double Num2, double Final){/////// Sub Function
    Final = Num1 - Num2;
    cout << Num1 << " - " << Num2 << " = " << Final<<endl;
}
void mul1(double Num1,double Num2, double Final){/////// Mul Function
    Final = Num1 * Num2;
    cout << Num1 << " * " << Num2 << " = " <<Final<<endl;
}
void divide(double Num1,double Num2, double Final){/////// div Function
    if (Num2 == 0) cout<< "Error Division By Zero";  
    else Final = Num1 / Num2;
    cout<< Num1<< " / "<< Num2<< " = "<<Final<<endl;
}

int main()
{
    double Num1,Num2,Final;
    int ope;
    
    cout << "Enter the First Number"<< endl;
    cin >> Num1; ///// Enter the First Number
    cout << "Enter the Second Number"<< endl;
    cin >> Num2; ///// Enter the Second Number
    OpeList();
    cin >> ope; ///// Number of the Operation
    switch(ope){
         case 0 : break;//// Stops the program
         case 1 : add1(Num1,Num2,Final); break;
         case 2 : sub1(Num1,Num2,Final); break;
         case 3 : mul1(Num1,Num2,Final); break;
         case 4 : divide(Num1,Num2,Final); break;
         default : cout<< "Error, Please Enter a Correct Number";/// error unknown number
     }
}


















