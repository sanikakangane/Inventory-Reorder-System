#include <iostream>
#include <vector>
#include <iomanip>
#include <chrono>

using namespace std;
using namespace chrono;

// ====================== PRODUCT STRUCT ======================

struct Product {

    int id;
    string name;
    string category;
    int stock;
    int reorderLevel;
    double price;
};

// ====================== GLOBAL VECTOR ======================

vector<Product> products;

// ====================== HEADER ======================

void printHeader() {

    cout << "\n============================================================\n";
    cout << "               INVENTORY REORDER SYSTEM\n";
    cout << "============================================================\n";
}

// ====================== DISPLAY PRODUCTS ======================

void displayProducts(vector<Product> list) {

    if (list.size() == 0) {

        cout << "\nNo products available.\n";
        return;
    }

    cout << left
         << setw(6) << "ID"
         << setw(22) << "Name"
         << setw(15) << "Category"
         << setw(10) << "Stock"
         << setw(12) << "Reorder"
         << setw(10) << "Price" << endl;

    cout << "--------------------------------------------------------------------------\n";

    for (int i = 0; i < list.size(); i++) {

        cout << left
             << setw(6) << list[i].id
             << setw(22) << list[i].name
             << setw(15) << list[i].category
             << setw(10) << list[i].stock
             << setw(12) << list[i].reorderLevel
             << setw(10) << fixed << setprecision(2) << list[i].price
             << endl;
    }
}

// ====================== INITIALIZE 55 PRODUCTS ======================

void initializeProducts() {

    products.push_back({101, "Keyboard", "Electronics", 5, 10, 1200});
    products.push_back({102, "Mouse", "Electronics", 25, 10, 500});
    products.push_back({103, "Monitor", "Electronics", 8, 12, 9000});
    products.push_back({104, "Printer", "Electronics", 3, 8, 15000});
    products.push_back({105, "Notebook", "Stationery", 40, 15, 80});

    products.push_back({106, "Pen Pack", "Stationery", 60, 20, 120});
    products.push_back({107, "Desk Chair", "Furniture", 4, 6, 3500});
    products.push_back({108, "Office Table", "Furniture", 2, 5, 7000});
    products.push_back({109, "Water Bottle", "Utility", 30, 10, 250});
    products.push_back({110, "School Bag", "Utility", 7, 10, 900});

    products.push_back({111, "Router", "Electronics", 6, 10, 2500});
    products.push_back({112, "USB Cable", "Electronics", 45, 15, 150});
    products.push_back({113, "Stapler", "Stationery", 18, 10, 90});
    products.push_back({114, "Whiteboard", "Furniture", 3, 5, 4000});
    products.push_back({115, "Calculator", "Electronics", 9, 10, 600});

    products.push_back({116, "Project File", "Stationery", 22, 10, 40});
    products.push_back({117, "Highlighter", "Stationery", 28, 12, 60});
    products.push_back({118, "Extension Board", "Electronics", 5, 8, 850});
    products.push_back({119, "Dustbin", "Utility", 11, 10, 300});
    products.push_back({120, "Marker", "Stationery", 16, 10, 50});

    products.push_back({121, "Fan", "Electronics", 4, 7, 2800});
    products.push_back({122, "Lamp", "Electronics", 13, 10, 750});
    products.push_back({123, "Paper Rim", "Stationery", 20, 15, 350});
    products.push_back({124, "Cupboard", "Furniture", 2, 4, 12000});
    products.push_back({125, "Glue Stick", "Stationery", 17, 10, 35});

    products.push_back({126, "Laptop Stand", "Electronics", 6, 10, 1100});
    products.push_back({127, "Scissors", "Stationery", 14, 10, 70});
    products.push_back({128, "Clock", "Utility", 5, 8, 500});
    products.push_back({129, "File Folder", "Stationery", 32, 15, 25});
    products.push_back({130, "Speaker", "Electronics", 3, 6, 4500});

    products.push_back({131, "Mouse Pad", "Electronics", 21, 10, 200});
    products.push_back({132, "Bookshelf", "Furniture", 1, 3, 9500});
    products.push_back({133, "Tape", "Stationery", 26, 10, 45});
    products.push_back({134, "Chair Cushion", "Furniture", 7, 10, 650});
    products.push_back({135, "Notebook Set", "Stationery", 19, 10, 300});

    products.push_back({136, "Tablet", "Electronics", 4, 7, 18000});
    products.push_back({137, "Pen Drive", "Electronics", 23, 10, 550});
    products.push_back({138, "Calculator Pro", "Electronics", 5, 8, 1200});
    products.push_back({139, "Storage Box", "Utility", 9, 10, 700});
    products.push_back({140, "Cleaning Spray", "Utility", 12, 10, 350});

    products.push_back({141, "Smart Watch", "Electronics", 3, 5, 7000});
    products.push_back({142, "Headphones", "Electronics", 6, 10, 2500});
    products.push_back({143, "Punch Machine", "Stationery", 11, 10, 180});
    products.push_back({144, "Office Sofa", "Furniture", 1, 2, 22000});
    products.push_back({145, "Diary", "Stationery", 24, 10, 150});

    products.push_back({146, "Keyboard Wireless", "Electronics", 5, 8, 1800});
    products.push_back({147, "LED Strip", "Electronics", 7, 10, 900});
    products.push_back({148, "Magazine Rack", "Furniture", 2, 4, 3200});
    products.push_back({149, "Sticky Notes", "Stationery", 27, 12, 99});
    products.push_back({150, "Bluetooth Speaker", "Electronics", 4, 6, 3500});

    products.push_back({151, "Paper Clips", "Stationery", 35, 15, 20});
    products.push_back({152, "Thermal Flask", "Utility", 8, 10, 650});
    products.push_back({153, "Desk Organizer", "Utility", 6, 8, 550});
    products.push_back({154, "Portable SSD", "Electronics", 2, 5, 8500});
    products.push_back({155, "Study Lamp", "Electronics", 10, 10, 950});
}

// ====================== ADD PRODUCT ======================

void addProduct() {

    Product p;

    cout << "\nEnter Product ID: ";
    cin >> p.id;

    cin.ignore();

    cout << "Enter Product Name: ";
    getline(cin, p.name);

    cout << "Enter Category: ";
    getline(cin, p.category);

    cout << "Enter Stock Quantity: ";
    cin >> p.stock;

    cout << "Enter Reorder Level: ";
    cin >> p.reorderLevel;

    cout << "Enter Price: ";
    cin >> p.price;

    products.push_back(p);

    cout << "\nProduct Added Successfully.\n";
}

// ====================== LOW STOCK PRODUCTS ======================

void lowStockProducts() {

    vector<Product> lowStock;

    for (int i = 0; i < products.size(); i++) {

        if (products[i].stock <= products[i].reorderLevel) {

            lowStock.push_back(products[i]);
        }
    }

    cout << "\n========== LOW STOCK PRODUCTS ==========\n";
    cout << "Using Linear Search - O(n)\n";

    displayProducts(lowStock);
}

// ====================== SELECTION SORT BY STOCK ======================

void selectionSortByStock() {

    vector<Product> temp = products;

    int n = temp.size();

    for (int i = 0; i < n - 1; i++) {

        int minIndex = i;

        for (int j = i + 1; j < n; j++) {

            if (temp[j].stock < temp[minIndex].stock) {

                minIndex = j;
            }
        }

        swap(temp[i], temp[minIndex]);
    }

    cout << "\n========== SORTED BY STOCK ==========\n";
    cout << "Using Selection Sort - O(n^2)\n";

    displayProducts(temp);
}

// ====================== QUICK SORT ======================

int partition(vector<Product>& arr, int low, int high) {

    double pivot = arr[high].price;

    int i = low - 1;

    for (int j = low; j < high; j++) {

        if (arr[j].price < pivot) {

            i++;

            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);

    return i + 1;
}

void quickSort(vector<Product>& arr, int low, int high) {

    if (low < high) {

        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);

        quickSort(arr, pi + 1, high);
    }
}

void sortByPrice() {

    vector<Product> temp = products;

    quickSort(temp, 0, temp.size() - 1);

    cout << "\n========== SORTED BY PRICE ==========\n";
    cout << "Using Quick Sort - O(n log n)\n";

    displayProducts(temp);
}

// ====================== SORT BY ID ======================

void sortByID(vector<Product>& temp) {

    int n = temp.size();

    for (int i = 0; i < n - 1; i++) {

        int minIndex = i;

        for (int j = i + 1; j < n; j++) {

            if (temp[j].id < temp[minIndex].id) {

                minIndex = j;
            }
        }

        swap(temp[i], temp[minIndex]);
    }
}

// ====================== BINARY SEARCH ======================

void binarySearchByID(int key) {

    vector<Product> temp = products;

    sortByID(temp);

    int low = 0;
    int high = temp.size() - 1;

    while (low <= high) {

        int mid = (low + high) / 2;

        if (temp[mid].id == key) {

            cout << "\n========== PRODUCT FOUND ==========\n";
            cout << "Using Binary Search - O(log n)\n";

            vector<Product> result;

            result.push_back(temp[mid]);

            displayProducts(result);

            return;
        }

        else if (temp[mid].id < key) {

            low = mid + 1;
        }

        else {

            high = mid - 1;
        }
    }

    cout << "\nProduct Not Found.\n";
}

// ====================== BENCHMARK ======================

void benchmarkSearch() {

    int key = 140;

    auto start1 = high_resolution_clock::now();

    for (int i = 0; i < products.size(); i++) {

        if (products[i].id == key) {

            break;
        }
    }

    auto end1 = high_resolution_clock::now();

    vector<Product> temp = products;

    sortByID(temp);

    auto start2 = high_resolution_clock::now();

    int low = 0;
    int high = temp.size() - 1;

    while (low <= high) {

        int mid = (low + high) / 2;

        if (temp[mid].id == key) {

            break;
        }

        else if (temp[mid].id < key) {

            low = mid + 1;
        }

        else {

            high = mid - 1;
        }
    }

    auto end2 = high_resolution_clock::now();

    cout << "\n========== SEARCH BENCHMARK ==========\n";

    cout << "Dataset Size: 55 Products\n\n";

    cout << "Linear Search Time : "
         << duration_cast<nanoseconds>(end1 - start1).count()
         << " ns\n";

    cout << "Binary Search Time : "
         << duration_cast<nanoseconds>(end2 - start2).count()
         << " ns\n";

    cout << "\nComparison Report:\n";
    cout << "Linear Search checks products one-by-one.\n";
    cout << "Binary Search divides the search space into halves.\n";
    cout << "Binary Search is faster for large datasets.\n";
}

// ====================== CUSTOM FEATURE 1 ======================

void reorderList() {

    vector<Product> reorder;

    for (int i = 0; i < products.size(); i++) {

        if (products[i].stock <= products[i].reorderLevel) {

            reorder.push_back(products[i]);
        }
    }

    cout << "\n========== REORDER LIST ==========\n";

    displayProducts(reorder);
}

// ====================== CUSTOM FEATURE 2 ======================

void categoryDisplay(string category) {

    vector<Product> result;

    for (int i = 0; i < products.size(); i++) {

        if (products[i].category == category) {

            result.push_back(products[i]);
        }
    }

    cout << "\n========== CATEGORY: " << category << " ==========\n";

    displayProducts(result);
}

// ====================== MENU ======================

void menu() {

    int choice;

    do {

        printHeader();

        cout << "\n1. Display All Products";
        cout << "\n2. Add Product";
        cout << "\n3. Low Stock Products";
        cout << "\n4. Sort by Stock (Selection Sort)";
        cout << "\n5. Sort by Price (Quick Sort)";
        cout << "\n6. Search Product by ID";
        cout << "\n7. Benchmark Search";
        cout << "\n8. Reorder List";
        cout << "\n9. Show Electronics";
        cout << "\n10. Show Stationery";
        cout << "\n0. Exit";

        cout << "\n\nEnter Choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                displayProducts(products);
                break;

            case 2:
                addProduct();
                break;

            case 3:
                lowStockProducts();
                break;

            case 4:
                selectionSortByStock();
                break;

            case 5:
                sortByPrice();
                break;

            case 6: {

                int id;

                cout << "Enter Product ID: ";
                cin >> id;

                binarySearchByID(id);

                break;
            }

            case 7:
                benchmarkSearch();
                break;

            case 8:
                reorderList();
                break;

            case 9:
                categoryDisplay("Electronics");
                break;

            case 10:
                categoryDisplay("Stationery");
                break;

            case 0:
                cout << "\nExiting Program...\n";
                break;

            default:
                cout << "\nInvalid Choice.\n";
        }

        if (choice != 0) {

            cout << "\nPress Enter to Continue...";
            cin.ignore();
            cin.get();
        }

    } while(choice != 0);
}

// ====================== MAIN ======================

int main() {

    initializeProducts();

    menu();

    return 0;
}