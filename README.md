# 📦 Inventory Reorder System

A console-based Inventory Reorder System developed using **C++** and **Data Structures & Algorithms (DSA)** concepts.  
This project helps manage inventory efficiently by tracking stock levels, sorting products, searching products, and generating reorder lists.

---

## 📌 Project Overview

The system stores product information such as:
- Product ID
- Product Name
- Category
- Stock Quantity
- Reorder Level
- Product Price

It allows users to manage products and identify low-stock items that need restocking.

---

## ✨ Features

- Display all products
- Add new products
- View low stock products
- Generate reorder list
- Sort products by stock quantity
- Sort products by price
- Search products using Binary Search
- Benchmark Linear Search vs Binary Search
- Display category-wise products

---

## 🛠️ Technologies Used

- C++
- STL Vector
- Structures
- Functions
- Chrono Library

---

## 🧠 DSA Concepts Used

### 📍 Selection Sort
Used to sort products based on stock quantity.

### 📍 Quick Sort
Used to sort products based on product price.

### 📍 Binary Search
Used for fast product searching by Product ID.

### 📍 Linear Search
Used for performance comparison.

### 📍 Vector
Used for dynamic product storage.

---

## 📂 Project Structure

```text
Inventory-Reorder-System/
│
├── inventory_reorder_system.cpp
├── inventory-reorder-system_Report.pdf
└── README.md
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
| 11 | Exit |

---

## ⚙️ Algorithms Complexity

| Algorithm | Purpose | Time Complexity |
|-----------|----------|----------------|
| Selection Sort | Sort by stock | O(n²) |
| Quick Sort | Sort by price | O(n log n) |
| Binary Search | Search product | O(log n) |
| Linear Search | Benchmark comparison | O(n) |

---

## ✅ Advantages

- Simple and easy to use
- Efficient inventory management
- Fast searching using Binary Search
- Practical implementation of DSA concepts
- Organized product handling

---

## ❌ Limitations

- No permanent data storage
- No database connectivity
- Console-based interface only
- No update/delete functionality
- No user authentication

---

## 🚀 Future Scope

- Add file handling
- Add database integration
- Build graphical user interface (GUI)
- Add update and delete product options
- Generate reports automatically
- Add admin login system

---

## 🧪 Testing

| Test Case | Expected Result |
|-----------|----------------|
| Add Product | Product added successfully |
| Search Product | Correct product displayed |
| Sort by Price | Products sorted correctly |
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
11. Exit
```

---

## 📌 Conclusion

The Inventory Reorder System is a simple and effective C++ project that demonstrates the practical implementation of Data Structures and Algorithms.  
It improves understanding of sorting, searching, vectors, structures, and performance analysis techniques used in real-world applications.

---

## 📚 References

- C++ Documentation
- Data Structures and Algorithms Concepts
- Chrono Library in C++
- OpenAI ChatGPT for project guidance and documentation support

---

## 🚀 Final Note

This project reflects the practical use of **Data Structures and Algorithms** in solving real-world inventory management problems using **C++**.  
It combines sorting, searching, and inventory tracking concepts into a simple and efficient system.

The Inventory Reorder System not only improves product management efficiency but also strengthens understanding of core programming and DSA concepts through hands-on implementation.
