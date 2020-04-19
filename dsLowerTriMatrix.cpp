#include<iostream>
using namespace std;

class LowerTri{
    private:
    int n;
    int *arr;

    public:
    LowerTri(){
        n=2;
        arr = new int[3];
    }

    LowerTri(int n){
        this->n = n;
        arr = new int[n*(n+1)/2];
    }

    void setData(int i, int j, int x);
    int getData(int i, int j);
    void display();
    int Getdimension(){
        return n;
    }

    ~LowerTri();
};

void LowerTri:: setData(int i, int j, int x){
    if(i >= j){
        arr[i*(i-1)/2 + j-1] = x;
    }
}

int LowerTri:: getData(int i, int j){
    if(i>=j){
        return arr[i*(i-1)/2 + j-1];
    }else{
        return 0;
    }
}

void LowerTri:: display(){
    for(int i=1; i<n; i++){
        for(int j=1; j<n; j++){
            if(i>=j){
                cout << arr[i*(i-1)/2 + j -1] << ' ';
            }else{
                cout << 0 << ' ';
            }
        }
        cout << endl;
    }
}

LowerTri:: ~LowerTri(){
    delete []arr;
}

int main(){
    int d;
    cout << " Enter Dimension: ";
    cin>> d;

    LowerTri lmd(d);
    int x;
    cout << "enter all Elements: " << endl;
    for(int i=0; i<=d; i++){
        for(int j=0; j<= d; j++){
            cin>> x;
            lmd.setData(i, j, x);
        }
    }

    lmd.display();


    return 0;
}