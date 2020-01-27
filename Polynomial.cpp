#include<iostream>
using namespace std;

class Polynomial
{
    private:
        int * p;
        int deg;
    public:
        Polynomial(int deg = 1)
        { 
            p = new int[deg+1];
            this->deg = deg;
        }
        void get_input()
        {
            for(int i = 0; i <= deg; ++i)
            {
                cout << "Enter coefficient for x^" << i << ": ";
                cin >> p[i];
            }
        }
        void show_output()
        {
            for(int i = deg; i >=0; i--)
            {
                
                if(i==0)
                {
                    cout << p[i] << "x^" << i<<" ";
                }
                else
                {
                    cout << p[i] << "x^" << i<<" + ";
                }
            }
            cout <<endl;
        }
        Polynomial operator +(Polynomial& poly)
        {
            Polynomial new_p;
            int max_deg = poly.deg > deg ? poly.deg : deg;
            new_p.deg = max_deg;
            new_p.p = new int[max_deg+1]{0};
            for(int i = 0; i <= max_deg; ++i)
            {
                if(i <= deg) new_p.p[i] += p[i];
                if(i <= poly.deg) new_p.p[i] += poly.p[i];
            }
            return new_p;
        }
        Polynomial operator -(Polynomial& poly)
        {
            Polynomial new_p;
            int max_deg = poly.deg > deg ? poly.deg : deg;
            new_p.deg = max_deg;
            new_p.p = new int[max_deg+1]{0};
            for(int i = 0; i <= max_deg; ++i)
            {
                if(i <= deg) new_p.p[i] += p[i];
                if(i <= poly.deg) new_p.p[i] -= poly.p[i];
            }
            return new_p;
        }
};

int main()
{
    int degfirst , degsecond;
    cout<<" Enter the degree first :  ";
    cin>>degfirst;
    cout<<" Enter the degree second : ";
    cin>>degsecond;
    Polynomial firstPolynomial(degfirst);
    firstPolynomial.get_input();
    firstPolynomial.show_output();
    Polynomial secondPolynomial(degsecond);
    secondPolynomial.get_input();
    secondPolynomial.show_output();
    Polynomial thirdPolynomial = firstPolynomial + secondPolynomial;
    cout<<"Adding first and second Polynomial   ";
    thirdPolynomial.show_output();
    Polynomial fourthPolynomial = firstPolynomial - secondPolynomial;
    cout<<"Subracting first and second Polynomial :   ";
    fourthPolynomial.show_output();
    return 0;
}

