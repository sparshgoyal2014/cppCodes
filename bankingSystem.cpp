#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>

using namespace std;


#define MIN_BALANCE 500

class InsufficientFunds{};

class account{
    private:

    long accountNumber;
    string firstName;
    string lastName;

    float balance;

    static long nextAccountNumber;

    public:

    account(){};

    account(string fname , string lname , float balance);
    long getAccNo(){
        return accountNumber;
    }

    string getFirstName(){
        return firstName;
    }

    string getLastname(){
        return lastName;
    }

    float getBalance(){
        return balance;
    }

    void deposit(float amount);
    void withdraw(float amount);

    static void setLastAccountNumber(long accountNumber);
    static long getLastAccountNumber();

    friend ofstream & operator<<(ofstream &ofs , account &acc);
    friend ifstream & operator>>(ifstream &ifs , account &acc);
    friend ostream & operator<<(ostream &os , account &acc);

};


long account :: nextAccountNumber = 0;

class bank{
    private:
    map<long , account> accounts;

    public:

    bank();
    account openAccount(string fname , string lname , float balance);
    account balanceEnquiry(long accountNumber );
    account deposit(long accountNumber , float amount);
    account withdraw(long accountNumber , float amount);

    void closeAccount(long accountNumber);
    void showAllAccounts();

    ~bank();


};

int main(){
    bank b;
    account acc;

    int choice;
    string fname, lname;

    long accountNumber;
    float balance;
    float amount;

    cout << "***BANKING SYSTEM***" << endl;
    do{
        cout << "\nSelect one option below  ";
        cout << "\n\t1. open an Account ";
        cout << "\n\t2. Balance Enquiry " ;
        cout << "\n\t3. Deposit  ";
        cout << "\n\t4. Withdrawal  ";
        cout << "\n\t5. Close an Account ";
        cout << "\n\t6. Show all Accounts " ;
        cout << "\n\t7. quit ";
        cin>>choice;

        switch(choice){
            case 1:
            cout << "Enter First Name: ";
            cin>>fname;
            cout << "Enter Last Name: ";
            cin>>lname;
            cout << "Enter Intil Balance: ";
            cin>>balance;

            acc = b.openAccount(fname , lname , balance);
            cout << endl << "*congratulations Accouont is Created*" << endl;
            cout << acc;
            break;

            case 2:
            cout << "Enter Account Number: ";
            cin>> accountNumber;

            acc = b.balanceEnquiry(accountNumber);
            cout << endl << "Your Account Details " << endl;
            cout << acc;
            break;

            case 3:
            cout << "Enter Account Number :" ;
            cin>> accountNumber;

            cout <<"Enter Balance: ";
            cin >> amount;

            acc = b.deposit(accountNumber , amount);
            cout << endl << "Amount is Deposited " << endl;
            cout <<acc;
            break;


            case 4:
            cout << "Enter ccount Number :" ;
            cin>> accountNumber;

            cout << "Enter Balance:" ;
            cin >> amount;

            acc = b.withdraw(accountNumber , amount);
            cout << endl << "Amount withdrawn" << endl;
            cout <<  acc;
            break;  

            case 5:
            cout << "Enter Account Number :" ;
            cin>> accountNumber;

            b.closeAccount(accountNumber);
            cout << endl << "Account is closed "<< endl;
            cout << acc;
            break;

            case 6:
            b.showAllAccounts();
            break;


            case 7:
            break;

            default:
            cout << "\nEnter correct choice";
            exit(0);

        }
    }while(choice!=7);


    return 0;
}


account::account(string fname , string lname , float balance){
    nextAccountNumber++;
    accountNumber = nextAccountNumber;
    firstName = fname;
    lastName = lname;

    this->balance = balance;
    
}

void account:: deposit(float amount){
    balance += amount;
}

void account:: withdraw(float amount){
    if(balance - amount <MIN_BALANCE)
    throw InsufficientFunds();

    balance -= amount;

}


void account:: setLastAccountNumber(long accountNumber){
    nextAccountNumber = accountNumber;
}

long account::getLastAccountNumber(){
    return nextAccountNumber;
}

ofstream & operator<<(ofstream &ofs , account &acc){
    ofs << acc.accountNumber << endl;
    ofs << acc.firstName << endl;
    ofs << acc.lastName << endl;
    ofs << acc.balance << endl;

    return ofs;

}

ifstream & operator>>(ifstream &ifs , account &acc){
    ifs>>acc.accountNumber;
    ifs>>acc.firstName ;
    ifs>>acc.lastName;
    ifs>>acc.balance;

    return ifs;
}

ostream & operator<<(ostream &os , account &acc){
    os<<"First Name:" << acc.getFirstName() << endl;
    os<<"Last Name:" << acc.getLastname() << endl;
    os<<"Account Number:" << acc.getAccNo() << endl;
    os<<"Balance:" << acc.getBalance() << endl;
    
    return os;

}

bank::bank(){
    account acc;
    ifstream infile;

    infile.open("bank.data");
    if(!infile){
        cout << "Error in opening! File not Found!!" << endl;
        return ;
    }

    while(!infile.eof()){
        infile>>acc;
        accounts.insert(pair<long,account>(acc.getAccNo(),acc));
    }

    account::setLastAccountNumber(acc.getAccNo());
    infile.close();
}


account bank::openAccount(string fname , string lname , float balance){
    ofstream outfile;
    account acc(fname , lname , balance);
    accounts.insert(pair<long, account>(acc.getAccNo(),acc));

    outfile.open("Bank.data" , ios::trunc);

    map<long , account>::iterator itr;
    for(itr = accounts.begin();itr!=accounts.end();itr++){
        outfile<<itr->second;
    }

    outfile.close();
    return acc;
}

account bank::balanceEnquiry(long accountNumber){
    map<long , account>::iterator itr = accounts.find(accountNumber);
    return itr->second;
}

account bank::deposit(long accountNumber , float amount){
    map<long , account>:: iterator itr = accounts.find(accountNumber);
    itr->second.deposit(amount);
    return itr->second;
}

account bank::withdraw(long accountNumber , float amount){
    map<long , account>:: iterator itr = accounts.find(accountNumber);
    itr->second.withdraw(amount);
    return itr->second;

}

void bank::closeAccount(long accountNumber){
    map<long , account>:: iterator itr = accounts.find(accountNumber);
    cout << "Account Deleted " << itr->second;
    accounts.erase(accountNumber);

}

void bank::showAllAccounts(){
    map<long , account>::iterator itr;
    for(itr = accounts.begin();itr!=accounts.end();itr++){
        cout << "Account " << itr->first << endl << itr->second << endl;
    }
}

bank::~bank(){
    ofstream outfile;
    outfile.open("Bank.data" , ios::trunc);

    map<long , account>:: iterator itr;
    for(itr = accounts.begin();itr!=accounts.end();itr++){
        outfile<<itr->second;
    }

    outfile.close();
}
