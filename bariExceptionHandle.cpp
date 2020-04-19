 #include<iostream>
 using namespace std;

 int main(){
     int a = 10;
     int b =0;
     int c;

     try{
         if(b==0)
         throw 101; // throw and catch are just interrelated and value is not of any use just it is the error code....
         //wwe can throw any data type
         // throw 2.5;
         //throw 2.5f;
         // throw 'a';
         //throw "dmlsjf";
         //throw className;
         c=a/b;
         cout << c << endl;
     }

     catch(int e){
         cout << "Division by Zero" << " " << " ERROR CODE " << e << endl;
     }

     cout << "BYE " << endl;

     return 0;
 }