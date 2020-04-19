#include<iostream>
#include<math.h>
using namespace std;

struct Term{
    int coeff;
    int exp;
};

struct Poly{
    int n;
    Term *t;
};

void create(Poly* p ){
    
    cout << "No. of non-zero terms.." << endl;
    cin>> p->n;
    
    p->t = new Term[p->n];

    cout << "Enter polynomial terms :" <<endl;
    for(int i=0; i< p->n; i++){
        cout << "term No. " << i+1 << endl;
        cin>> p->t[i].coeff >> p->t[i].exp;
    }
}

void display(Poly p){
    cout << "your desired  :)  polynomial is: " << endl;
    for(int i=0; i<p.n; i++){
        cout << p.t[i].coeff << "x^(" << p.t[i].exp  << ")";
        if(i==p.n - 1)break;
        cout << " + ";
    }
}  // written by me;

int value(Poly p, int x){
    int sum = 0;
    for(int i=0; i<p.n; i++){
        sum = sum + (p.t[i].coeff * pow(x, p.t[i].exp));
    }

    return sum;
}

Poly *add(Poly *p1, Poly *p2){
    Poly *sum;
    sum = new Poly();
    sum->n

}


int main(){
   Poly p;
   create(&p);
   display(p);

   cout << "Value of the polynomial is: " << value(p, 2);

   return 0;
}