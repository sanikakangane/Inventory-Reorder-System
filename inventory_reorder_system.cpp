#include <iostream>
#include <vector>
#include <iomanip>
#include <chrono>
#include <string>

using namespace std;
using namespace chrono;

struct Product {

    int id;
    string name;
    string category;
    int stock;
    int reorderLevel;
    double price;
};

vector<Product> products;

void printHeader() {

    cout << "\n";
    cout << "  ================================================\n";
    cout << "         INVENTORY REORDER SYSTEM\n";
    cout << "  ================================================\n";
}

void printSummaryBorder() {
    cout << "\n  ╔════════════════════════════════════════════╗\n";
}

void printSummaryEnd() {
    cout << "  ╚════════════════════════════════════════════╝\n";
}

void displayProducts(vector<Product> list) {

    if (list.size() == 0) {

        cout << "\nNo matching products found.\n";
        return;
    }

    cout << left
        << setw(6) << "ID"
        << setw(22) << "Name"
        << setw(15) << "Category"
        << setw(10) << "Stock"
        << setw(12) << "Reorder"
        << setw(10) << "Price" << endl;

    cout << "===============================================================================\n";

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

void addProduct() {

    Product p;

    cout << "\nEnter Product ID: ";
    if (!(cin >> p.id)) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "\nPlease Enter Valid Product ID.\n";
        return;
    }

    cin.ignore();

    cout << "Enter Product Name: ";
    getline(cin, p.name);
    if (p.name.empty()) {
        cout << "\nPlease Enter Valid Product Name.\n";
        return;
    }

    cout << "Enter Category: ";
    getline(cin, p.category);
    if (p.category.empty()) {
        cout << "\nPlease Enter Valid Category.\n";
        return;
    }

    cout << "Enter Stock Quantity: ";
    if (!(cin >> p.stock)) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "\nPlease Enter Valid Stock Quantity.\n";
        return;
    }

    cout << "Enter Reorder Level: ";
    if (!(cin >> p.reorderLevel)) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "\nPlease Enter Valid Reorder Level.\n";
        return;
    }

    cout << "Enter Price: ";
    if (!(cin >> p.price)) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "\nPlease Enter Valid Price.\n";
        return;
    }

    products.push_back(p);

    printSummaryBorder();
    cout << "  ║  ✓ Product Added Successfully\n";
    cout << "  ║  Product ID: " << setw(20) << p.id << "\n";
    cout << "  ║  Product Name: " << setw(17) << p.name << "\n";
    cout << "  ║  Category: " << setw(22) << p.category << "\n";
    cout << "  ║  Stock: " << setw(25) << p.stock << "\n";
    cout << "  ║  Reorder Level: " << setw(20) << p.reorderLevel << "\n";
    cout << "  ║  Price: ₹" << setw(24) << fixed << setprecision(2) << p.price << "\n";
    printSummaryEnd();
}

void lowStockProducts() {

    vector<Product> lowStock;

    for (int i = 0; i < products.size(); i++) {

        if (products[i].stock <= products[i].reorderLevel) {

            lowStock.push_back(products[i]);
        }
    }

    cout << "\n========== LOW STOCK PRODUCTS ==========\n";
    displayProducts(lowStock);

    printSummaryBorder();
    cout << "  ║  Total Products: " << setw(18) << products.size() << "\n";
    cout << "  ║  Low Stock Items: " << setw(17) << lowStock.size() << "\n";
    cout << "  ║  Percentage: " << setw(22) << fixed << setprecision(2) 
         << (lowStock.size() * 100.0 / products.size()) << "%\n";
    printSummaryEnd();
}

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
    displayProducts(temp);

    printSummaryBorder();
    cout << "  ║  ✓ Sorted by Stock Level\n";
    cout << "  ║  Total Products Sorted: " << setw(12) << temp.size() << "\n";
    cout << "  ║  Lowest Stock: " << setw(21) << temp[0].stock << " units\n";
    cout << "  ║  Highest Stock: " << setw(20) << temp[n-1].stock << " units\n";
    printSummaryEnd();
}

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
    displayProducts(temp);

    printSummaryBorder();
    cout << "  ║  ✓ Sorted by Price (Ascending)\n";
    cout << "  ║  Total Products Sorted: " << setw(12) << temp.size() << "\n";
    cout << "  ║  Lowest Price: ₹" << setw(22) << fixed << setprecision(2) << temp[0].price << "\n";
    cout << "  ║  Highest Price: ₹" << setw(21) << temp[temp.size()-1].price << "\n";
    printSummaryEnd();
}

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

void binarySearchByID(int key) {

    vector<Product> temp = products;

    sortByID(temp);

    int low = 0;
    int high = temp.size() - 1;

    while (low <= high) {

        int mid = (low + high) / 2;

        if (temp[mid].id == key) {

            cout << "\n========== PRODUCT FOUND ==========\n";

            vector<Product> result;
            result.push_back(temp[mid]);

            displayProducts(result);

            printSummaryBorder();
            cout << "  ║  ✓ Product Search Successful\n";
            cout << "  ║  Product ID: " << setw(20) << temp[mid].id << "\n";
            cout << "  ║  Product Name: " << setw(17) << temp[mid].name << "\n";
            cout << "  ║  Stock Available: " << setw(17) << temp[mid].stock << " units\n";
            cout << "  ║  Price: ₹" << setw(24) << fixed << setprecision(2) << temp[mid].price << "\n";
            printSummaryEnd();

            return;
        }

        else if (temp[mid].id < key) {

            low = mid + 1;
        }

        else {

            high = mid - 1;
        }
    }

    printSummaryBorder();
    cout << "  ║  ✗ Product Not Found\n";
    cout << "  ║  Product ID: " << setw(20) << key << " does not exist\n";
    printSummaryEnd();
}

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

    long long linear_time = duration_cast<nanoseconds>(end1 - start1).count();
    long long binary_time = duration_cast<nanoseconds>(end2 - start2).count();
    double improvement = ((linear_time - binary_time) / (double)linear_time) * 100;

    cout << "\n========== SEARCH BENCHMARK ==========\n";

    cout << "Linear Search Time : " << linear_time << " ns\n";
    cout << "Binary Search Time : " << binary_time << " ns\n";

    printSummaryBorder();
    cout << "  ║  ✓ Benchmark Test Completed\n";
    cout << "  ║  Total Products: " << setw(18) << products.size() << "\n";
    cout << "  ║  Search Key: " << setw(23) << key << "\n";
    cout << "  ║  Linear Search: " << setw(20) << linear_time << " ns\n";
    cout << "  ║  Binary Search: " << setw(21) << binary_time << " ns\n";
    cout << "  ║  Performance Gain: " << setw(17) << fixed << setprecision(2) << improvement << "%\n";
    printSummaryEnd();
}

void reorderList() {

    vector<Product> reorder;

    for (int i = 0; i < products.size(); i++) {

        if (products[i].stock <= products[i].reorderLevel) {

            reorder.push_back(products[i]);
        }
    }

    cout << "\n========== REORDER LIST ==========\n";
    displayProducts(reorder);

    printSummaryBorder();
    cout << "  ║  ✓ Reorder List Generated\n";
    cout << "  ║  Items to Reorder: " << setw(16) << reorder.size() << "\n";
    cout << "  ║  Total SKUs: " << setw(22) << products.size() << "\n";
    cout << "  ║  Action Required: " << setw(17) << "YES\n";
    printSummaryEnd();
}

void comparisonReport() {

    vector<Product> reorder;
    double totalReorderValue = 0;
    double totalCurrentValue = 0;

    for (int i = 0; i < products.size(); i++) {

        if (products[i].stock <= products[i].reorderLevel) {

            reorder.push_back(products[i]);
            int requiredQty = products[i].reorderLevel - products[i].stock;
            totalReorderValue += (requiredQty * products[i].price);
        }

        totalCurrentValue += (products[i].stock * products[i].price);
    }

    cout << "\n========== COMPARISON REPORT ==========\n";

    cout << "\nINVENTORY STATUS OVERVIEW:\n";
    cout << "═══════════════════════════════════════════════════════════\n";
    cout << left
        << setw(35) << "Total Products in System"
        << setw(25) << ": " << products.size() << " units\n"
        << setw(35) << "Total Current Inventory Value"
        << setw(25) << ": ₹" << fixed << setprecision(2) << totalCurrentValue << "\n"
        << setw(35) << "Products Below Reorder Level"
        << setw(25) << ": " << reorder.size() << " items\n"
        << setw(35) << "Products Above Reorder Level"
        << setw(25) << ": " << (products.size() - reorder.size()) << " items\n";

    cout << "\nLOW STOCK ITEMS REQUIRING ACTION:\n";
    cout << "═══════════════════════════════════════════════════════════\n";

    if (reorder.size() > 0) {

        cout << left
            << setw(6) << "ID"
            << setw(22) << "Name"
            << setw(10) << "Current"
            << setw(10) << "Required"
            << setw(10) << "Deficit"
            << setw(12) << "Est. Cost\n";

        cout << "───────────────────────────────────────────────────────────\n";

        for (int i = 0; i < reorder.size(); i++) {

            int deficit = reorder[i].reorderLevel - reorder[i].stock;
            double estimatedCost = deficit * reorder[i].price;

            cout << left
                << setw(6) << reorder[i].id
                << setw(22) << reorder[i].name
                << setw(10) << reorder[i].stock
                << setw(10) << reorder[i].reorderLevel
                << setw(10) << deficit
                << "₹" << fixed << setprecision(2) << estimatedCost << "\n";
        }

        cout << "───────────────────────────────────────────────────────────\n";
    }

    cout << "\nREORDER COST ANALYSIS:\n";
    cout << "═══════════════════════════════════════════════════════════\n";
    cout << left
        << setw(35) << "Estimated Reorder Investment"
        << setw(25) << ": ₹" << fixed << setprecision(2) << totalReorderValue << "\n"
        << setw(35) << "Current Inventory Value"
        << setw(25) << ": ₹" << totalCurrentValue << "\n"
        << setw(35) << "Projected Value After Reorder"
        << setw(25) << ": ₹" << (totalCurrentValue + totalReorderValue) << "\n";

    printSummaryBorder();
    cout << "  ║  ✓ Comparison Report Generated\n";
    cout << "  ║  Critical Items: " << setw(20) << reorder.size() << "\n";
    cout << "  ║  Reorder Budget: ₹" << setw(21) << fixed << setprecision(2) << totalReorderValue << "\n";
    cout << "  ║  Report Status: " << setw(21) << "COMPLETE\n";
    printSummaryEnd();
}

void categoryDisplay(string category) {

    vector<Product> result;

    for (int i = 0; i < products.size(); i++) {

        if (products[i].category == category) {

            result.push_back(products[i]);
        }
    }

    cout << "\n========== CATEGORY: " << category << " ==========\n";
    displayProducts(result);

    double categoryValue = 0;
    for (int i = 0; i < result.size(); i++) {
        categoryValue += (result[i].stock * result[i].price);
    }

    printSummaryBorder();
    cout << "  ║  ✓ Category Products Displayed\n";
    cout << "  ║  Category: " << setw(26) << category << "\n";
    cout << "  ║  Total Items: " << setw(22) << result.size() << "\n";
    cout << "  ║  Category Value: ₹" << setw(21) << fixed << setprecision(2) << categoryValue << "\n";
    printSummaryEnd();
}

void menu() {

    int choice;

    printHeader();

    do {

        cout << "\n";
        cout << "              MAIN MENU\n";
        cout << "  ════════════════════════════════════\n";

        cout << "  1.  Display All Products\n";
        cout << "  2.  Add Product\n";
        cout << "  3.  Low Stock Products\n";
        cout << "  4.  Sort by Stock\n";
        cout << "  5.  Sort by Price\n";
        cout << "  6.  Search Product by ID\n";
        cout << "  7.  Benchmark Search\n";
        cout << "  8.  Reorder List\n";
        cout << "  9.  Show Electronics Products\n";
        cout << " 10.  Show Stationery Products\n";
        cout << " 11.  Comparison Report\n";
        cout << " 12.  Exit\n";

        cout << "  ════════════════════════════════════\n";

        cout << "\nEnter Your Choice: ";

        if (!(cin >> choice)) {

            cin.clear();
            cin.ignore(1000, '\n');

            cout << "\nPlease Enter Valid Choice.\n";
            continue;
        }

        switch(choice) {

            case 1:
                cout << "\n========== ALL PRODUCTS ==========\n";
                displayProducts(products);
                printSummaryBorder();
                cout << "  ║  ✓ All Products Displayed\n";
                cout << "  ║  Total Products: " << setw(18) << products.size() << "\n";
                printSummaryEnd();
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

                cout << "\nEnter Product ID: ";
                if (!(cin >> id)) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "\nPlease Enter Valid Product ID.\n";
                    break;
                }

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

            case 11:
                comparisonReport();
                break;

            case 12:

                cout << "\n";
                cout << "  ══════════════════════════════════════\n";
                cout << "     Thank You For Using The System\n";
                cout << "  ══════════════════════════════════════\n";

                break;

            default:
                cout << "\nPlease Enter Valid Choice.\n";
        }

    } while(choice != 12);
}

int main() {

    initializeProducts();

    menu();

    return 0;
}

