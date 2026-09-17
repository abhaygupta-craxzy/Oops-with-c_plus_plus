#include <iostream>
using namespace std;

class Product {
public:
    int pid;
    string name;
    int price;

    Product(int productId, string n, int pri) {
        pid = productId;
        name = n;
        price = pri;
    }

    Product(const Product &pr) {
        pid = pr.pid;
        name = pr.name;
        price = pr.price;
    }

    Product comparePrice(const Product &pr) {
        if (price > pr.price)
            return *this;
        else
            return pr;
    }

    void display() {
        cout << "Product ID: " << pid << endl;
        cout << "Product Name: " << name << endl;
        cout << "Product Price: " << price << endl;
    }
};

int main() {

    Product p1(101, "BMW M4 Competition", 27500000);
    Product p2(102, "PS 6", 150000);

    Product higherPrice = p1.comparePrice(p2);

    cout << "Product with Higher Price:" << endl;
    higherPrice.display();

    return 0;
}
