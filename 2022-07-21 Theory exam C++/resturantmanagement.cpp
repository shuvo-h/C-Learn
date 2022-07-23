#include<bits/stdc++.h>
using namespace std;

class Restaurant{
private:
    int total_tax;
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    Restaurant(int n,int food_item_codes[12],string food_item_names[12],int food_item_prices[12]){
        for(int i=0;i<n;i++){
            this->food_item_codes[i] = food_item_codes[i];
            this->food_item_names[i] = food_item_names[i];
            this->food_item_prices[i] = food_item_prices[i];
        }
        this->total_tax = 0;
    }
    void taxSetter(int newTax){
        this->total_tax += newTax;
        cout<<"Your Current Total Tax == "<<this->total_tax<<endl;
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

void display_foods(Restaurant *myRestaurant){
    cout<<"\t\t\t\tMAKE BILL"<<endl;
    cout<<"\t\t\t_________________________"<<endl;
    cout<<"Item Code"<<"\t\t\tItem Name"<<"\t\t\tItem Price"<<endl;
    for(int i =0; i<12; i++){
        cout<<myRestaurant->food_item_codes[i]<<"\t\t\t"<<myRestaurant->food_item_names[i]<<"\t\t\t"<<myRestaurant->food_item_prices[i]<<endl;
    }
}




void takeOrder(int *tableNo, int *numberOfItems,int orderCodes[],int orderQuantity[],Restaurant *myResturant){
    cout<<"Enter Table No: ";
    cin>>*tableNo;
    //int numberOfItems;
    cout<<"Enter Number of Items: ";
    cin>>*numberOfItems;
    for(int i=0; i<*numberOfItems; i++){
        cout<<"Enter Item "<<i+1<<" Code: ";
        cin>>orderCodes[i];
        //check if the item code is valid
        bool isFound = false;
        while(!isFound){
            for(int j=0; j<12; j++){
                int code = myResturant->food_item_codes[j];
                //cout<<"Matched = "<<code<<" Entered = "<<orderCodes[i]<<endl;
                if(code == orderCodes[i]){
                    // cout<<"So entered = "<<orderCodes[i]<<endl;
                    isFound = true;
                }
            }
            if(!isFound){
                cout<<"The ithe is not available. Please tell the right code: ";
                cin>>orderCodes[i];
            }
        }

        cout<<"Enter Item "<<i+1<<" Quantity: ";
        cin>>orderQuantity[i];
    }
}

void displayOrderInfo(int tableNo, int numberOfItems, Restaurant *myRestaurant,int orderCodes[12],int orderQuantity[12]){
    cout<<"\t\t\t\tBill Summary"<<endl;
    cout<<"\t\t\t_________________________"<<endl;
    cout<<"Table No: "<<tableNo<<endl;
    cout<<"Item Code"<<"\t\t\tItem Name"<<"\t\t\tItem Price"<<"\t\tItem Quantity"<<"\t\tTotal Price"<<endl;
    int totalPriceNoTax = 0;
    for(int i =0; i<numberOfItems; i++){
        for(int j =0; j<12; j++){
            if(myRestaurant->food_item_codes[j] == orderCodes[i]){
                    int Totalprice = myRestaurant->food_item_prices[j] * orderQuantity[i];
                    totalPriceNoTax += Totalprice;
                cout<<myRestaurant->food_item_codes[j]<<"\t\t\t"<<myRestaurant->food_item_names[j]<<"\t\t\t"<<myRestaurant->food_item_prices[j]<<"\t\t\t"<<orderQuantity[i]<<"\t\t\t"<<Totalprice<<endl;
            }
        }
    }
    double totalTax = double(5*totalPriceNoTax)/100;
    double totalPriceWithTax = double(totalPriceNoTax) + totalTax;
    cout<<"TAX"<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<totalTax<<endl;
    cout<<"______________________________________________________________________________________________________________________________"<<endl;
    cout<<"NET TOTAL"<<"\t\t\t\t\t\t\t\t\t\t\t\t\t"<<totalPriceWithTax<<" Taka"<<endl;

    // add the tax to the class object
    myRestaurant->taxSetter(totalTax);
}

int main(){
    Restaurant *myResturant = addFoods();
    display_foods(myResturant);
    cout<<endl;
    int tableNumber;
    int numberOfItems;
    int orderCodes[12];
    int orderQuantity[12];
    takeOrder(&tableNumber,&numberOfItems,orderCodes,orderQuantity,myResturant);
    displayOrderInfo(tableNumber,numberOfItems,myResturant,orderCodes,orderQuantity);

    return 0;
}

