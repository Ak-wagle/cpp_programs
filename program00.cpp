#include<iostream>
using namespace std;

const int m = 50;

class ITEMS {
    int itemcode[m];
    float itemprice[m];
    int count;
    
public:
    void CNT() { count = 0; }
    void getItem();
    void displaySum();
    void remove();
    void displayItems();
};

void ITEMS::getItem() {
    if (count < m) {
        cout << "Enter Item Code: ";
        cin >> itemcode[count];
        cout << "Enter its cost: ";
        cin >> itemprice[count];
        count++;
    } else {
        cout << "Cannot add more items, limit reached.\n";
    }
}

void ITEMS::displaySum() {
    float sum = 0;
    for (int i = 0; i < count; i++) {
        sum += itemprice[i]; 
    }
    cout << "Total sum is: " << sum << endl;
}

void ITEMS::remove() {
    int a;
    cout << "Enter the item code to remove: ";
    cin >> a;
    for (int i = 0; i < count; i++) {
        if (itemcode[i] == a) {
            for (int j = i; j < count - 1; j++) {
                itemcode[j] = itemcode[j + 1];
                itemprice[j] = itemprice[j + 1];
            }
            count--;  
            break;
        }
    }
}

void ITEMS::displayItems() {
    cout << "Item code and Price are: \n";
    for (int i = 0; i < count; i++) {
        cout << itemcode[i] << " -> " << itemprice[i] << endl;
    }
}

int main() {
    ITEMS order;
    order.CNT();  
    int x;
    
    do {
        cout << "\nEnter an appropriate number: ";
        cout << "\n1. Add an item";
        cout << "\n2. Display total value";
        cout << "\n3. Delete an item";
        cout << "\n4. Display all items";
        cout << "\n5. Quit";
        cout << "\nWhat is your choice: ";
        cin >> x;
        
        switch (x) {
        case 1:
            order.getItem();
            break;
        case 2:
            order.displaySum();
            break;
        case 3:
            order.remove();
            break;
        case 4:
            order.displayItems();
            break;
        case 5:
            break;
        default:
            cout << "Error! in your input; try again\n";
            break;
        }
    } while (x != 5);
    return 0;
}