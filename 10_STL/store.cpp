#include <iostream>
#include <string>
#include <vector>
#include <deque>    
#include <list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <ctime>


using namespace std;


struct Product
{
    int ProductId;
    string name;
    double price;
    string category;
   Product(int id, string n, double p, string c) : ProductId(id), name(n), price(p), category(c) {}


};

struct Order
{
    int OrderId;
    int ProductId;
    int Quantity;
    string CustomrID;
    double TotalPrice;
    time_t OrderDate;
};


int main() {
    vector<Product> products = { 
        Product(1, "Laptop", 1000.0, "Electronics"),
         Product(2, "Smartphone", 500.0, "Electronics"), 
         Product(3, "T-shirt", 10.0, "Clothing"),
         Product(4, "Jeans", 20.0, "Clothing")
         };

         deque<string> recentCustomers = { "Customer A", "Customer B", "Customer C" };

         recentCustomers.push_front("Customer D");
         recentCustomers.push_back("Customer E");
         
         list<Order> orders;

         orders.push_back(Order{ 1, 1, 2, "Customer A", 2000.0, time(0) });
         orders.push_back(Order{ 2, 2, 1, "Customer B", 500.0, time(0) });
         orders.push_back(Order{ 3, 3, 3, "Customer C", 30.0, time(nullptr) });
         orders.push_back(Order{ 4, 4, 2, "Customer D", 40.0, time(nullptr) });


         set<string> categories;
         for (const auto& product : products) {
             categories.insert(product.category);
         }

         map<int, int> ProductStock = {
             { 1, 10 },
             { 2, 5 },
             { 3, 20 },
             { 4, 15 }
         };

         multimap<string, Order> customerOrders;

         for (const auto& order : orders) {
             customerOrders.insert({ order.CustomrID, order });
         }

         unordered_map<int, Product> ProductMap;
         for (const auto& product : products) {
             ProductMap[product.ProductId] = product;
         }
        
         unordered_set <int> ProductIds;
         for (const auto& product : products) {
             ProductIds.insert(product.ProductId);
         }

         set<int> OrderIds;
         for (const auto& order : orders) {
             OrderIds.insert(order.OrderId);
         }


    return 0;

}




