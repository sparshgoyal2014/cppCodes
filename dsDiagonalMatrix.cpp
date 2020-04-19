#include<iostream>
using namespace std;

class Diagonal{
    private:
    int n;
    int *arr;

    public:
    Diagonal(int n){
        this->n = n;
        arr = new int[n];
    }

    void setData(int i, int j, int x);
    int getData(int i, int j);
    void display();

    ~Diagonal();
};

void Diagonal:: setData(int i, int j, int x){
    if(i == j){
        arr[i-1] = x;
    }
}

int Diagonal:: getData(int i, int j){
    if(i==j){
        return arr[i-1];
    }else{
        return 0;
    }
}

void Diagonal:: display(){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                cout << arr[i] << ' ';
            }else{
                cout << 0 << ' ';
            }
        }
        cout << endl;
    }
}

Diagonal:: ~Diagonal(){
    delete []arr;
}

int main(){
    Diagonal D1(5);
    D1.setData(1,1,5);
    D1.setData(2,2,6);
    D1.setData(3,3,9);
    D1.setData(4,4,14);
    D1.setData(5,5,8);
    

    D1.display();

    return 0;
}