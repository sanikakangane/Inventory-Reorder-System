# 📦 Inventory Reorder System

A console-based **Inventory Reorder System** developed using **C++** and **Data Structures & Algorithms (DSA)** concepts.  
This project helps businesses and stores manage inventory efficiently by tracking stock levels, identifying low-stock products, sorting inventory data, and generating reorder reports.

---

## 📌 Project Overview

The system manages product information including:

- Product ID
- Product Name
- Product Category
- Stock Quantity
- Reorder Level
- Product Price

It provides multiple inventory management operations such as searching, sorting, benchmarking, and category-wise product analysis.

---

## ✨ Features

- Display all inventory products
- Add new products dynamically
- Detect low-stock products
- Generate reorder list automatically
- Sort products by stock quantity
- Sort products by price
- Search products using Binary Search
- Benchmark Linear Search vs Binary Search
- Display category-wise products
- Generate inventory comparison reports
- Input validation for invalid entries
- Professional console-based UI formatting

---

## 🛠️ Technologies Used

- C++
- STL Vector
- Structures
- Functions
- Chrono Library
- iomanip Library

---

## 🧠 DSA Concepts Used

### 📍 Selection Sort
Used to sort products according to stock quantity.

### 📍 Quick Sort
Used for efficient sorting of products based on price.

### 📍 Binary Search
Used for fast searching of products by Product ID.

### 📍 Linear Search
Used for performance benchmarking comparison.

### 📍 Vector
Used for dynamic storage and management of products.

---

## 📂 Project Structure

```text
Inventory-Reorder-System/
│
├── inventory_reorder_system.cpp
├── README.md
└── inventory_report.pdf
```

---

## 📋 Menu Options

| Option | Function |
|--------|----------|
| 1 | Display All Products |
| 2 | Add Product |
| 3 | Low Stock Products |
| 4 | Sort by Stock |
| 5 | Sort by Price |
| 6 | Search Product by ID |
| 7 | Benchmark Search |
| 8 | Reorder List |
| 9 | Show Electronics Products |
| 10 | Show Stationery Products |
| 11 | Comparison Report |
| 12 | Exit |

---

## ⚙️ Algorithms Complexity

| Algorithm | Purpose | Time Complexity |
|-----------|----------|----------------|
| Selection Sort | Sort by stock quantity | O(n²) |
| Quick Sort | Sort by price | O(n log n) |
| Binary Search | Search products | O(log n) |
| Linear Search | Benchmark comparison | O(n) |

---

## 📊 Functional Modules

### 🔹 Product Management
Allows users to add and display products with proper formatting.

### 🔹 Inventory Monitoring
Detects products that are below reorder level.

### 🔹 Sorting System
Provides stock-wise and price-wise sorting using DSA algorithms.

### 🔹 Searching System
Uses Binary Search for efficient product searching.

### 🔹 Benchmark Analysis
Compares Linear Search and Binary Search performance using nanoseconds.

### 🔹 Report Generation
Displays reorder reports and inventory comparison analysis.

---

## ✅ Advantages

- Easy to understand and use
- Efficient inventory tracking
- Fast product searching
- Practical DSA implementation
- Organized inventory handling
- Real-world problem-solving approach

---

## ❌ Limitations

- No permanent file storage
- No database connectivity
- Console-based interface only
- No update/delete product feature
- No authentication system

---

## 🚀 Future Scope

- Add file handling support
- Integrate database systems
- Develop GUI version
- Add update and delete operations
- Export reports to PDF/Excel
- Add admin login and authentication
- Implement barcode scanning support

---

## 🧪 Testing

| Test Case | Expected Result |
|-----------|----------------|
| Add Product | Product added successfully |
| Search Product | Correct product displayed |
| Sort by Price | Products sorted correctly |
| Sort by Stock | Products sorted correctly |
| Low Stock Check | Low stock products displayed |
| Invalid Input | Error message displayed |

---

## ▶️ How to Run

### 🔹 Compile the Program

```bash
clang++ inventory_reorder_system.cpp -o inventory_reorder_system
```

### 🔹 Run the Program

```bash
./inventory_reorder_system
```

---

## 🖥️ Sample Output

```text
========================================
        INVENTORY REORDER SYSTEM
========================================

1. Display All Products
2. Add Product
3. Low Stock Products
4. Sort by Stock
5. Sort by Price
6. Search Product by ID
7. Benchmark Search
8. Reorder List
9. Show Electronics Products
10. Show Stationery Products
11. Comparison Report
12. Exit
```

---

## 📈 Sample Reports Generated

- Low Stock Products Report
- Reorder List Report
- Inventory Comparison Report
- Search Benchmark Report
- Category-wise Product Report

---

## 📌 Conclusion

The **Inventory Reorder System** demonstrates the practical implementation of **Data Structures and Algorithms** in solving real-world inventory management problems.

The project improves understanding of:
- Sorting Algorithms
- Searching Algorithms
- Vectors and Structures
- Time Complexity
- Inventory Analysis
- Console Application Development

It combines efficient product management with DSA concepts to build a structured and user-friendly inventory system.

---

## 📚 References

- C++ Documentation
- STL Vector Library
- Chrono Library Documentation
- Data Structures and Algorithms Concepts
- OpenAI ChatGPT for guidance and documentation support

---

## 👩‍💻 Author

**Sanika Kangane**

---

## 🚀 Final Note

This project reflects the practical application of **C++ programming** and **DSA concepts** in developing an efficient Inventory Management System.

It demonstrates how sorting, searching, benchmarking, and stock management techniques can be combined to create a real-world inventory solution with optimized performance and organized data handling.
