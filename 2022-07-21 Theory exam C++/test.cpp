#include<bits/stdc++.h>
using namespace std;

class Restaurant{
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    int total_tax;
    Restaurant(int n,int food_item_codes[12],string food_item_names[12],int food_item_prices[12]){
        for(int i=0;i<n;i++){
            this->food_item_codes[i] = food_item_codes[i];
            this->food_item_names[i] = food_item_names[i];
            this->food_item_prices[i] = food_item_prices[i];
        }
        this->total_tax = 0;
    }
};


Restaurant *addFoods(){
    cout<<"Number of Foods: ";
    int n;
    cin>>n;
    string food_item_names[n];
    int food_item_codes[n],food_item_prices[n];
    for(int i=0;i<n;i++){
        cout<<"Food "<<i+1<<" Item Code: ";
        cin>>food_item_codes[i];

        cout<<"Food "<<i+1<<" Item Name: ";
        getline(cin, food_item_names[i],'\n');
        getline(cin, food_item_names[i],'\n');

        cout<<"Food "<<i+1<<" Item Price: ";
        cin>>food_item_prices[i];
    }
    Restaurant *myRestaurant = new Restaurant(n,food_item_codes,food_item_names,food_item_prices);
    return myRestaurant;
}


int main(){
    Restaurant *myResturant = addFoods();
    return 0;
}

