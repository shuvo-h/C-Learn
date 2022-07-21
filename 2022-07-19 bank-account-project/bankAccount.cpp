
#include<bits/stdc++.h>
using namespace std;

class BankAccount{
public:
    string account_holder;
    string address;
    int age;
    int account_number;
protected:
    int balance;
private:
    string password;
public:
    BankAccount(string aoount_holder, string address, int age, string password){
        this->account_holder = aoount_holder;
        this->address = address;
        this->age = age;
        this->password = password;
        this->account_number = rand()%1000000000;
        cout<<"Your account number is = "<<this->account_number<<endl;
    }
    int show_balance(string password){
        if(this->password == password){
            return balance;
        }else{
            return -1;
        }
    }
    void add_money(string password, int amount){
        if(amount < 0){
            cout<<"Invalid amount!"<<endl;
            return;
        }
        if(this->password == password){
            this->balance = this->balance + amount;
            cout<<"Add Money Successfull!"<<endl;
        }else{
            cout<<"Password didn't match!"<<endl;
        }
    }
    void deposite_money(string password, int amount){
         if(amount < 0){
            cout<<"Invalid amount!"<<endl;
            return;
        }
        if(this->balance < amount){
            cout<<"Insufficient balance! Please add money first!"<<endl;
            return;
        }
        if(this->password == password){
            this->balance = this->balance - amount;
             cout<<"Money deposited Successfull!"<<endl;
        }else{
             cout<<"Password didn't match!"<<endl;
        }
    }
    friend class MyCash;

};

class MyCash{
protected:
    int balance;
public:
    MyCash(){
        this->balance = 0;
    }
    void add_money_from_bank(BankAccount *myAccount, string password, int amount){
        if(myAccount->balance < amount){
            cout<<"Insufficient money in your bank account!"<<endl;
            return;
        }
        if(0 > amount){
            cout<<"Invalid amount!"<<endl;
            return;
        }
        if(myAccount->password == password){
            this->balance = this->balance + amount;
            myAccount->balance = myAccount->balance - amount;
             cout<<"Money was Successfully added from Bank!"<<endl;
        }else{
            cout<<"Password didn't match"<<endl;
        }
    }
    int show_app_balance(){
        //count<<"Your app balance is = "<<this->balance<<endl;
        return balance;
    }
};

BankAccount* create_account(){
    string account_holder,password,address;
    int age;
    cout<<"Create Account:"<<endl;
    cout<<"Enter Name: "<<endl;
    cin>>account_holder;
    cout<<"Enter Address: "<<endl;
    cin>>address;
    cout<<"Enter age: "<<endl;
    cin>>age;
    cout<<"Enter password: "<<endl;
    cin>>password;
    BankAccount *myAccount = new BankAccount(account_holder,address,age,password);
    return myAccount;
}

void add_money(BankAccount *myAccount){
    string password;
    int amount;
    cout<<"Add Money: "<<endl;
    cout<<"Enter Password:"<<endl;
    cin>>password;
    cout<<"Enter Amount to be added:"<<endl;
    cin>>amount;
    myAccount->add_money(password,amount);
}

void deposit_money(BankAccount *myAccount){
    string password;
    int amount;
    cout<<"To deposite Balance, Enter Password: "<<endl;

    cin>>password;
    cout<<"Enter deposited amount: "<<endl;
    cin>>amount;
    myAccount->deposite_money(password,amount);


}

void check_balance(BankAccount *myAccount){
    cout<<"To check current Balance, Enter Password:"<<endl;
    string password;
    cin>>password;
    int myBalance = myAccount->show_balance(password);
    if(myBalance == -1){
        cout<<"Wrong Password!"<<endl;
    }else{
        cout<<"Your bank balance is: "<<myBalance<<endl;
    }
}

void add_money_from_bank(MyCash * myChash, BankAccount * myAccount){
    cout<<"To Add money from bank, Enter bank Password:"<<endl;
    string password;
    cin>>password;
    cout<<"Enter amount to be added: "<<endl;
    int amount;
    cin>>amount;
    myChash->add_money_from_bank(myAccount,password,amount);
    int myAppBalance = myChash->show_app_balance();
    cout<<"Your online app balance is: "<<myAppBalance<<endl;
}

int main(){
    BankAccount *myAccount = create_account();
    MyCash *myCash = new MyCash();
    //check_balance(myAccount);
    //add_money(myAccount);
    //check_balance(myAccount);
    //deposit_money(myAccount);
    //check_balance(myAccount);
    //add_money_from_bank(myCash,myAccount);
    //check_balance(myAccount);

    /*
        while(true){
            cout<<"Select Option:"<<endl;
            cout<<"1. Add money to bank:"<<endl;
            cout<<"2. Deposite Money to Bank:"<<endl;
            cout<<"3. Add Money to MyCash From Bank:"<<endl;
            cout<<"4. Check Balance:"<<endl;
            int option;
            cin>>option;
            if(option == 1){
                add_money(myAccount);
            }else if(option == 2){
                deposit_money(myAccount);
            }else if(option == 3){
                add_money_from_bank(myCash,myAccount);
            }else if(option == 4){
                 check_balance(myAccount);
            }else{
                cout<<"Invalid option!"<<endl;
            }

        }
    */

    Flag:
        cout<<"Select Option:"<<endl;
        cout<<"1. Add money to bank:"<<endl;
        cout<<"2. Deposite Money to Bank:"<<endl;
        cout<<"3. Add Money to MyCash From Bank:"<<endl;
        cout<<"4. Check Balance:"<<endl;
        int option;
        cin>>option;
        if(option == 1){
            add_money(myAccount);
        }else if(option == 2){
            deposit_money(myAccount);
        }else if(option == 3){
            add_money_from_bank(myCash,myAccount);
        }else if(option == 4){
             check_balance(myAccount);
        }else{
            cout<<"Invalid option!"<<endl;
        }

        goto Flag;

    return 0;
}

