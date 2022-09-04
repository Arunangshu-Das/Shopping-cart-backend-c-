#include <iostream>
#include "datamodel.h"
#include <vector>
using namespace std;
vector<Product> allproducts={
    Product(1,"Apple",26),
    Product(3,"Mango",16),
    Product(2,"Guava",36),
    Product(5,"Banana",56),
    Product(4,"Strawberry",29),
    Product(6,"Pineapple",20),
} ;

Product* chooseProduct()
{
    string productList;
    cout<<"Available Product"<<endl;
    for(auto product:allproducts)
    {
        productList.append(product.getDisplayName());
    }
    cout<<productList<<endl;
    cout<<"-----------------------"<<endl;
    string choice;
    cin>>choice;
    for(int i=0;i<allproducts.size();i++)
    {
        if(allproducts[i].getshortName()==choice)
        {
            return &allproducts[i];
        }
    }
    cout<<"Product not found"<<endl;
    return NULL;
}

bool checkout(Cart &cart)
{
    if(cart.isEmpty())
    return false;
    int total=cart.getTotal();
    cout<<"Pay in cash ";
    int paid;
    cin>>paid;
    if(paid>=total)
    {
        cout<<"Change "<<paid-total<<endl;
        cout<<"Thank you for shopping"<<endl;
        return true;
    }
    cout<<"Not enough cash"<<endl;
    return false;
}

int main()
{
    char action;
    Cart cart;
    while (true)
    {
       cout<<"Select an action - (a)dd item, (v)iew cart, (c)heckout"<<endl;
       cin>>action;
       if(action=='a')
       {
        //View all product + choose a product + add to the cart
        Product* product=chooseProduct();
        if(product!=NULL){
            cout<<"Added to cart"<<product->getDisplayName()<<endl;
            cart.addProduct(*product);
        }
       }
       else if(action=='v')
       {
            cout<<"-----------------------"<<endl;
            cout<<cart.viewCart();
            cout<<"-----------------------"<<endl;
       }
       else
       {
        cart.viewCart();
        if(checkout(cart))
        break;
       }
    }
}