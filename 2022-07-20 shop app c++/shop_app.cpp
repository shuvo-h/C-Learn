#include<bits/stdc++.h>
using namespace std;

class Shop{
public:
    string product_name[10];
    int product_price[10];
    int product_quantity[10];
private:
    int total_income;
public:
    Shop(int n,string product_name[10],int product_price[10], int product_quantity[10]){
        for(int i=0;i<n;i++){
            this->product_name[i] = product_name[i];
            this->product_price[i] = product_price[i];
            this->product_quantity[i] = product_quantity[i];
        }
        this->total_income = 0;
    }
    int income_setter(int income){
        this->total_income += income;
        return this->total_income;
    }
    int income_getter(){
        return this->total_income;
    }
};

Shop *addProduct(){
    cout<<"Number of products: ";
    int n;
    cin>>n;
    string name[n];
    int price[n],quantity[n];
    for(int i=0;i<n;i++){
        cout<<"Product "<<i+1<<" Name: ";
        cin>>name[i];
        cout<<"Product "<<i+1<<" Price: ";
        cin>>price[i];
        cout<<"Product "<<i+1<<" Quantity: ";
        cin>>quantity[i];
    }
    Shop *myShop = new Shop(n,name,price,quantity);
    return myShop;
}

void display_all_products(Shop *myShop){
    cout<<"\t\tBUY PRODUCT"<<endl<<"\t_____________________"<<endl;
    int productLength = 0;
    int productCounter = 0;
    while(myShop->product_name[productCounter].length()){
        productCounter++;
    }
    // product index number part
    cout<<"Product Index    \t\t";
    for(int i=0;i<productCounter;i++){
         cout<<i+1<<"\t\t";
    }
    cout<<endl;
    // product Name part
    cout<<"Product Name     \t\t";
    for(int i=0;i<productCounter;i++){
         cout<<myShop->product_name[i]<<"\t\t";
    }
    cout<<endl;

    // product Price part
    cout<<"Product Price    \t\t";
    for(int i=0;i<productCounter;i++){
         cout<<myShop->product_price[i]<<"\t\t";
    }
    cout<<endl;

    // product Quantity part
    cout<<"Product Quantity \t\t";
    for(int i=0;i<productCounter;i++){
         cout<<myShop->product_quantity[i]<<"\t\t";
    }
    cout<<endl;
}

void buyProduct(Shop *myShop,int buyIdx,int buyQuantity){
    if(buyQuantity <= myShop->product_quantity[buyIdx]){
        // deduct the product quantity
        myShop->product_quantity[buyIdx] -= buyQuantity;
        cout<<myShop->product_name[buyIdx]<<" bought "<<buyQuantity<<" pc successfully!"<<endl;
        // add the income
        int newIncome = myShop->product_price[buyIdx] * buyQuantity;
        int totalIncome = myShop->income_setter(newIncome);
        cout<<"Your total income: "<<totalIncome<<endl;
    }else{
        cout<<"Insufficient Products quantity!"<<endl;
    }

}

int main(){
    Shop *myShop = addProduct();
    int productLength = 0;
    while(myShop->product_name[productLength].length()){
        productLength++;
    }

    Flag:
        cout<<endl;
        display_all_products(myShop);
        cout<<endl;
        cout<<"Which product do you want from 1 to "<<productLength<<": ";
        int buyIdx;
        cin>>buyIdx;
        cout<<"What is the quantity that you want of "<<myShop->product_name[buyIdx-1]<<": ";
        int buyQuantity;
        cin>>buyQuantity;
        cout<<endl;
        buyProduct(myShop,buyIdx-1,buyQuantity);
    goto Flag;

    return 0;
}
