# Simple Shopping Cart Application

This is a simple shopping cart application written in C++. It allows users to add products to a cart, view the cart contents, and proceed to checkout.

## How to Use

1. Upon running the application, you will be presented with a menu of actions:
   - **(a)dd item**: Choose this option to view the available products and add an item to the cart.
   - **(v)iew cart**: Choose this option to view the current contents of the cart.
   - **(c)heckout**: Choose this option to proceed to the checkout process.

2. To add an item:
   - The available products will be displayed, showing their name and price.
   - Enter the short name of the desired product to add it to the cart.
   - The selected product will be added to the cart, and a confirmation message will be displayed.

3. To view the cart:
   - Select the **(v)iew cart** option from the menu.
   - The current contents of the cart will be displayed, showing the name and quantity of each item.

4. To proceed to checkout:
   - Select the **(c)heckout** option from the menu.
   - The cart contents will be displayed again, along with the total price.
   - Enter the amount paid in cash.
   - If the payment is sufficient, the application will calculate the change and display a "Thank you for shopping" message.
   - If the payment is not enough, a message indicating insufficient cash will be displayed.

5. The application will continue running until you choose to exit.

## Data Model

The application uses a `Product` class to represent each item in the store. The `Cart` class manages the cart functionality, including adding products, viewing the cart, and calculating the total price.

The `Product` class has the following attributes:
- `id`: The unique identifier of the product.
- `name`: The name of the product.
- `price`: The price of the product.

The `Cart` class has the following functionality:
- `addProduct()`: Adds a product to the cart.
- `viewCart()`: Displays the current contents of the cart.
- `isEmpty()`: Checks if the cart is empty.
- `getTotal()`: Calculates the total price of the items in the cart.

## Demo
[Demo of this project](https://youtu.be/A1zKJ_Y3LRI)

## Customization

To customize the available products, modify the `allproducts` vector in the `main()` function. Each element in the vector represents a product, with the format `Product(id, name, price)`. Feel free to add, remove, or modify the existing products according to your needs.

---

Feel free to explore and modify the code as per your requirements. Happy shopping!
