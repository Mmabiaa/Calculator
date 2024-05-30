#include <iostream>

using namespace std;
class Calculate
{
    public:
    int num1, num2;

    void setData()
    {
        cout<< "Enter First Value \n";
        cin>>num1;
        cout<< "Enter Second Value \n";
        cin>>num2;
    }
    void add()
    {
        cout<<num1 << " + "<< num2 << " = " << num1 + num2 <<endl;
    }
    void substract()
    {
        cout<<num1 << " - "<< num2 << " = "<<num1 - num2<<endl;
    }
    void multiply()
    {
        cout<< num1 << " * "<< num2 << " = "<< num1 * num2 <<endl;
    }
    void division()
    {
        if(num2 != 0)
        {
              cout<< num1 << " / "<< num2 << " = "<< num1 / num2<<endl;
        }
        else
        {
            cout<< "Invalid division \n";
        }
    }

};

int select;
int main()
{
    string name;
    Calculate h;
        cout << "Calculator !" << endl;
        cout<< " \n";
        cout<< "Enter Name \n";
        getline(cin>>ws, name);
do
    {

        cout<< " \n";
        cout<< "Hey "<<name<< ", what do you plan on doing? \n";
        cout<< "Select an option \n";
        cout<< "1.Add 2.Sub 3.Mul 4.Div \n";
        cin>> select;
        h.setData();
        if (select == 1)
        {
            cout<< "Addition \n";
            h.add();
        }
        else if(select == 2)
        {
            cout<< "Subtraction \n";
            h.substract();
        }
        else if(select == 3)
        {
            cout<< " Multiplication \n";
            h.multiply();
        }
        else if(select == 4)
        {
            cout<< "Division \n";
            h.division();
        }
        else
        {
            cout<< "Invalid option \n";
        }
        cout<< "Do you want to continue? (1.Yes 2.No) \n";
        cin>>select;
        if(select == 2)
        {
            cout<< "Good bye, "<<name;
        }
    }
    while(select == 1);

    return 0;
}
