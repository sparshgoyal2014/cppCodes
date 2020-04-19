#include<iostream>
using namespace std;

struct Element{
    int i;
    int j;
    int x;
};

struct Sparse{
    int m;
    int n;
    int num;
    Element *e;
};

void create(Sparse *s){
    cout << "Enter dimensions :" ;
    cin>> s->m >> s->n;

    cout << "Enter no. of Non-Zero elements: ";
    cin>> s->num;

    s->e = new Element[s->num];

    cout << "Enteer all non-Zero elements" << endl;

    for(int i=0; i<s->num; i++){
        cin>> s->e[i].i >> s->e[i].j >> s->e[i].x;
    }
}

void Display(Sparse s){
    int k=0;
    for(int i=0; i<s.m; i++){
        for(int j=0; j<s.n; j++){
            if(i==s.e[k].i && j==s.e[k].j){
                cout << s.e[k++].x  << " ";
            }else{
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

Sparse* add(Sparse *s1, Sparse *s2){
    Sparse *sum;
    if(s1->m != s2->m || s1->n != s2->n){
        cout << "You can't add these matrices :(" << endl;
    }else{
        sum = new Sparse;
        sum-> m = s1->m;
        sum->n = s1-> n;
        sum->e = new Element[s1->num + s2->num];

    }
    int i=0, j=0, k=0;
    while(i<s1->num && j<s2->num){
        if(s1->e[i].i < s2->e[j].i)
            sum->e[k++] = s1->e[i++];
        else if(s1->e[i].i > s2->e[j].i)
            sum->e[k++] = s2->e[j++];
        else{
            if(s1->e[i].j < s2->e[j].j)
                sum->e[k++] = s1->e[i++];
            else if(s1->e[i].j > s2->e[j].j)
                sum->e[k++] = s2->e[j++];
            else{
                sum->e[k] = s1->e[i++];
                sum->e[k++].x = s2->e[j++].x;
            }
        }
    }

    return sum;
}

int main(){
    Sparse s;
    create(&s);
    Display(s);

    return 0;
}
