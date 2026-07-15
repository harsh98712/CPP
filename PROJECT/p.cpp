#include<iostream>
#include<list>
#include<map>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<ctime>
#include<deque>
#include<set>

using namespace std;

struct product
{
    int productId;
    string catagory;
    string name;
};

struct order
{
    int orderID;
    int productID;
    int quantity;
    string customerID;
    time_t orderDate;

};
int main(){
   vector<product> products ={
       {11,"i phone ","electronics"},
       {22,"blender ","kitchen"},
       {33,"tea maker ","electronics"},
       {44,"desk lamp ","home"},

};
     deque<string> recentcustomers ={"h1","h2","h3"};
     recentcustomers.push_back("h4");
     recentcustomers.push_front("h5");

     list<order> orderhistory;

     orderhistory.push_back({1,11,1,"h1",time(0)});
      orderhistory.push_back({2,22,2,"h2",time(0)});
       orderhistory.push_back({3,33,3,"h3",time(0)});

       set<string> catagory;
       for(const auto &product: products){
        catagory.insert(product.catagory); 
      }
      map<int ,int> productStock ={
     {11,10},
     {22,20},
     {33,20},
     {44,10},

      };

      multimap<string, order> customerorder;
      for(const auto &order:orderhistory){
      customerorder.insert({order.customerID, order});

      };
      unordered_map<string, string> customerData = {
       {"h1","harsh"},
       {"h2","john"},
       {"h3","krish"},
       {"h4","harman"},

      };

      unordered_set<int> uniqueproductID;
      for(const auto &product:products){
        uniqueproductID.insert(product.productId);
      }

      for (const auto &item : productStock) {
    cout << "Product ID: " << item.first
         << " Stock: " << item.second << endl;
}
    cout << "\nCustomer Data:\n";

for (auto x : customerData)
{
    cout << x.first << " " << x.second << endl;
}
      return 0;

}



