#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/* =========================
   STRUCT DEFINITIONS
   ========================= */

// Structure to store product details
struct Product {
    int id;            // Unique product ID
    string name;       // Product name
    int price;         // Product price
};

// Structure to store receipt details
struct Receipt {
    int id;                    // Receipt ID
    Product items[50];          // Purchased items
    int itemCount;              // Number of items
    int subtotal;               // Total before discount
    int discountPercent;        // Discount applied
    int tax;                    // GST amount
    int total;                  // Final payable amount
};

/* =========================
   GLOBAL DATA STORAGE
   ========================= */

Product inventory[50];          // Inventory array
int inventoryCount = 0;         // Current inventory size

Receipt receipts[50];           // Saved receipts
int receiptCount = 0;           // Number of receipts

int nextProductId = 1;          // Auto-increment product ID
int nextReceiptId = 1;          // Auto-increment receipt ID

// Login passwords
const string ADMIN_PASS = "admin123";
const string USER_PASS  = "user123";

/* =========================
   FUNCTION: Seed Inventory
   Adds default makeup items
   ========================= */

void seedInventory() {
    string names[10] = {
        "Foundation", "Lipstick", "Eyeliner", "Mascara", "Blush",
        "Highlighter", "Concealer", "Face Powder", "Makeup Fixer", "Lip Gloss"
    };

    int prices[10] = {1200, 800, 350, 500, 600, 900, 700, 650, 1100, 400};

    // Insert products into inventory
    for (int i = 0; i < 10; i++) {
        inventory[inventoryCount++] = { nextProductId++, names[i], prices[i] };
    }
}

/* =========================
   FUNCTION: Show Inventory
   ========================= */

void showInventory() {
    if (inventoryCount == 0) {
        cout << "Inventory is empty.\n";
        return;
    }

    cout << "\n--- Inventory ---\n";
    cout << left << setw(6) << "ID"
         << setw(20) << "Product"
         << setw(10) << "Price(Rs)\n";

    for (int i = 0; i < inventoryCount; i++) {
        cout << left << setw(6) << inventory[i].id
             << setw(20) << inventory[i].name
             << setw(10) << inventory[i].price << '\n';
    }
}

/* =========================
   FUNCTION: Find Product
   ========================= */

Product* findProductById(int id) {
    for (int i = 0; i < inventoryCount; i++) {
        if (inventory[i].id == id)
            return &inventory[i];   // Return address if found
    }
    return nullptr;                // Not found
}

/* =========================
   ADMIN MENU
   ========================= */

void adminMenu() {
    while (true) {
        cout << "\n--- ADMIN MENU ---\n";
        cout << "1. View Inventory\n";
        cout << "2. Add Item\n";
        cout << "3. Update Item\n";
        cout << "4. Delete Item\n";
        cout << "5. View Receipts\n";
        cout << "6. Logout\n";
        cout << "Enter choice: ";

        int ch;
        cin >> ch;

        if (ch == 1) {
            showInventory();
        }
        else if (ch == 2) {
            string name;
            int price;

            cout << "Enter product name: ";
            cin.ignore();
            getline(cin, name);

            cout << "Enter product price: ";
            cin >> price;

            inventory[inventoryCount++] = { nextProductId++, name, price };
            cout << "Product added successfully.\n";
        }
        else if (ch == 3) {
            showInventory();
            cout << "Enter product ID to update: ";

            int id;
            cin >> id;

            Product* p = findProductById(id);
            if (!p) {
                cout << "Product not found.\n";
                continue;
            }

            cout << "Enter new name (or . to skip): ";
            string newName;
            cin.ignore();
            getline(cin, newName);
            if (newName != ".") p->name = newName;

            cout << "Enter new price (or 0 to skip): ";
            int newPrice;
            cin >> newPrice;
            if (newPrice > 0) p->price = newPrice;

            cout << "Product updated.\n";
        }
        else if (ch == 4) {
            showInventory();
            cout << "Enter product ID to delete: ";

            int id;
            cin >> id;

            bool found = false;
            for (int i = 0; i < inventoryCount; i++) {
                if (inventory[i].id == id) {
                    // Shift items left
                    for (int j = i; j < inventoryCount - 1; j++)
                        inventory[j] = inventory[j + 1];

                    inventoryCount--;
                    found = true;
                    break;
                }
            }
            cout << (found ? "Product deleted.\n" : "Product not found.\n");
        }
        else if (ch == 5) {
            if (receiptCount == 0) {
                cout << "No receipts available.\n";
            } else {
                for (int i = 0; i < receiptCount; i++) {
                    cout << "Receipt " << receipts[i].id
                         << " | Items: " << receipts[i].itemCount
                         << " | Total: Rs " << receipts[i].total << '\n';
                }
            }
        }
        else if (ch == 6) {
            break; // Logout
        }
        else {
            cout << "Invalid choice.\n";
        }
    }
}

/* =========================
   USER MENU
   ========================= */

void userMenu() {
    Product cart[50];        // Shopping cart
    int cartCount = 0;

    while (true) {
        cout << "\n--- USER MENU ---\n";
        cout << "1. View Items\n";
        cout << "2. Add to Cart\n";
        cout << "3. View Cart\n";
        cout << "4. Checkout\n";
        cout << "5. Logout\n";
        cout << "Enter choice: ";

        int ch;
        cin >> ch;

        if (ch == 1) {
            showInventory();
        }
        else if (ch == 2) {
            showInventory();
            cout << "Enter product ID: ";

            int id;
            cin >> id;

            Product* p = findProductById(id);
            if (p) {
                cart[cartCount++] = *p;
                cout << "Added to cart.\n";
            } else {
                cout << "Product not found.\n";
            }
        }
        else if (ch == 3) {
            if (cartCount == 0) {
                cout << "Cart is empty.\n";
            } else {
                for (int i = 0; i < cartCount; i++)
                    cout << cart[i].name << " - Rs " << cart[i].price << '\n';
            }
        }
        else if (ch == 4) {
            if (cartCount == 0) {
                cout << "Cart is empty.\n";
                continue;
            }

            int subtotal = 0;
            for (int i = 0; i < cartCount; i++)
                subtotal += cart[i].price;

            int discount =
                (subtotal >= 3000) ? 20 :
                (subtotal >= 2000) ? 15 :
                (subtotal >= 1000) ? 10 : 0;

            int afterDiscount = subtotal - (subtotal * discount / 100);
            int tax = afterDiscount * 7 / 100;
            int finalTotal = afterDiscount + tax;

            cout << "\n--- BILL ---\n";
            for (int i = 0; i < cartCount; i++)
                cout << cart[i].name << " - Rs " << cart[i].price << '\n';

            cout << "Subtotal: Rs " << subtotal << '\n';
            cout << "Discount: " << discount << "%\n";
            cout << "GST (7%): Rs " << tax << '\n';
            cout << "Final Total: Rs " << finalTotal << '\n';

            receipts[receiptCount] = {
                nextReceiptId++, {}, cartCount, subtotal, discount, tax, finalTotal
            };

            for (int i = 0; i < cartCount; i++)
                receipts[receiptCount].items[i] = cart[i];

            receiptCount++;
            cartCount = 0; // Empty cart after checkout
        }
        else if (ch == 5) {
            break; // Logout
        }
        else {
            cout << "Invalid choice.\n";
        }
    }
}

/* =========================
   MAIN FUNCTION
   ========================= */

int main() {
    seedInventory();   // Load default products

    while (true) {
        cout << "\n======= MAKEUP STORE APP =======\n";
        cout << "1. Admin Mode\n";
        cout << "2. User Mode\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";

        int mode;
        cin >> mode;

        // ADMIN LOGIN (3 tries)
        if (mode == 1) {
            int attempts = 3;
            while (attempts--) {
                cout << "Enter admin password: ";
                string pass;
                cin >> pass;

                if (pass == ADMIN_PASS) {
                    adminMenu();
                    break;
                } else {
                    cout << "Wrong password. Attempts left: " << attempts << '\n';
                }
            }
        }
        // USER LOGIN (3 tries)
        else if (mode == 2) {
            int attempts = 3;
            while (attempts--) {
                cout << "Enter user password: ";
                string pass;
                cin >> pass;

                if (pass == USER_PASS) {
                    userMenu();
                    break;
                } else {
                    cout << "Wrong password. Attempts left: " << attempts << '\n';
                }
            }
        }
        else if (mode == 3) {
            cout << "Goodbye!\n";
            break;
        }
        else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}
