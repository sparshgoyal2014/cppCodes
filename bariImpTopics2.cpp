#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

class item{
    private:
    string name;
    float price;
    int qty;

    public:
    item(){}
    item(string n,float p,int q);
    friend ifstream & operator>>(ifstream &fis,item &i);
    friend ofstream & operator<<(ofstream &fos , item &i);
    friend ostream & operator<<(ostream &os , item &i);

};

int main(){
    int n;
    string name;
    float price;
    int qty;

    cout << "enter no. of items..: " ;
    cin>>n;

    vector<item*> list;
    cout << "enter al items.." << endl;
    for(int i=0;i<n;i++){
        cout << "enter" << i+1 << "Item name,price and quantity.." ;
        cin>>name;
        cin>>price;
        cin>>qty;
        list.push_back(new item(name,price,qty));

    } 

    ofstream fos("items.txt");
    vector<item*>::iterator itr;

    for(itr = list.begin();itr!= list.end();itr++){
        fos<<**itr << endl;  // *itr is an ptr to an object so , **itr is dereference of pointer to that object,not like *itr ->lenght vgera vgera..
        // its a pointer to the object so *of(*itr) is that object to which the pointer is pointing or the pointer variable is storing that object's address...
         
    }
    item i;
    ifstream fis("items.txt");

    for(int i=0;i<3;i++){
        fis>>i;
        cout << "item" << i<< endl << i << endl;

    }

    return 0;

}

item::item(string n,float p,int q){
    name =  n;
    price = p;
    qty = q;
}

ofstream & operator<<(ofstream &fos , item &i){
    fos << i.name << endl << i.price << endl << i.qty << endl;
    return fos;
}

ifstream & operator >> (ifstream &fis , item &i){
    fis>>i.name >> i.price >> i.qty ;
    return fis;
}

ostream & operator<<(ostream & os , item &i){
    os<<i.name << endl << i.price << endl << i.qty << endl;
    return os;
}