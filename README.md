# 📚 Smart University Resource Exchange & Sharing System

## 📖 Project Overview

The **Smart University Resource Exchange & Sharing System** is a C++ console-based application developed to simplify the process of sharing and borrowing academic resources within a university.

Students often own useful academic resources such as books, calculators, laptops, Arduino kits, electronic components, project materials, and other learning tools. At the same time, many students need these resources for a short period but do not know who has them or whether they are available.

This project provides a secure and organized platform where students can list available resources, send borrowing requests, return items on time, and maintain a complete borrowing history. The system also helps administrators monitor all activities and generate reports.

By encouraging resource sharing, this application reduces unnecessary purchases, saves money, promotes collaboration, and ensures efficient utilization of university resources.

---

# 🎯 Project Objectives

- Develop a secure and user-friendly resource sharing platform.
- Simplify the borrowing and returning process.
- Maintain accurate digital records of all resources.
- Reduce paperwork through digital management.
- Encourage collaboration among university students.
- Improve transparency in resource management.
- Generate useful reports for administrators.

---

# ✨ Core Features

| Feature | Description |
|---------|-------------|
| 🔐 User Authentication | Secure login system for Admin and Students. |
| 👤 User Management | Register, update, search, and manage student information. |
| 📦 Resource Management | Add, edit, delete, search, and categorize academic resources. |
| 📥 Borrow Request | Students can send borrowing requests to resource owners. |
| ✅ Request Approval | Owners can approve or reject borrowing requests. |
| 🔄 Borrow & Return | Manage borrowing, returning, and update resource status. |
| 🔍 Advanced Search | Search resources by category, name, or availability. |
| 📊 Report Generation | Generate reports on users, resources, and borrowing history. |
| 💾 File Handling | Store all information permanently using text files. |

---

# 🌟 Unique Features

| Unique Feature | Description |
|---------------|-------------|
| ⭐ Trust Score System | Every user has a Trust Score based on their borrowing and returning behaviour. Returning items on time increases the score, while late returns decrease it. |
| 🤖 Smart Resource Recommendation | If the requested resource is unavailable, the system recommends similar available resources. |
| 📅 Due Date Reminder | Displays reminders before the return deadline to reduce late returns. |
| 🏆 Most Helpful Student Ranking | Shows the students who have shared the highest number of resources. |
| 📈 Resource Usage Analytics | Displays the most borrowed resources and overall borrowing trends. |
| 🔧 Resource Condition Tracker | Keeps records of the condition of every resource before and after borrowing. |
| 🚦 Availability Status | Shows whether a resource is Available, Borrowed, Reserved, or Under Maintenance. |
| 📜 Borrow History | Maintains a complete history of every borrowing and returning transaction. |

---

# 🏗️ Project Modules

### 1. Authentication Module
- Admin Login
- Student Login
- Password Verification

### 2. User Management Module
- Register User
- Update User
- Search User
- Delete User

### 3. Resource Management Module
- Add Resource
- Update Resource
- Delete Resource
- Search Resource
- View All Resources

### 4. Borrow & Return Module
- Send Borrow Request
- Approve or Reject Request
- Borrow Resource
- Return Resource

### 5. Report Module
- User Report
- Resource Report
- Borrow Report
- Trust Score Report

---

# 🛠️ Technologies Used

| Technology | Purpose |
|------------|---------|
| C++ | Core Programming Language |
| Object-Oriented Programming (OOP) | Modular and reusable code |
| File Handling | Permanent data storage |
| Standard Template Library (STL) | Efficient data management |
| VS Code | Development Environment |
| Git & GitHub | Version Control |

---

# 📂 Project Structure

```text
Smart-University-Resource-Exchange-And-Sharing-System/
│
├── main.cpp
├── login.cpp
├── login.h
├── user.cpp
├── user.h
├── resource.cpp
├── resource.h
├── borrow.cpp
├── borrow.h
├── report.cpp
├── report.h
├── filehandler.cpp
├── filehandler.h
│
├── data/
│   ├── users.txt
│   ├── resources.txt
│   ├── borrow_history.txt
│   ├── trust_score.txt
│   └── reports.txt
│
└── README.md
```

---

# 🚀 Future Enhancements

- Graphical User Interface (GUI)
- Database Integration (MySQL)
- QR Code Based Resource Borrowing
- Email Notification System
- Mobile Application
- Online Resource Exchange Platform
- Resource Reservation System
- AI-Based Resource Recommendation

---

# ▶️ How to Run

1. Clone the repository.
2. Open the project in VS Code.
3. Compile the project using a C++ compiler.
4. Run the executable file.
5. Login as Admin or Student.
6. Start managing and sharing academic resources.

---

# 📌 Project Status

**Status:** 🚧 Under Development

This project is currently being developed as part of a university Software Development course. New features and improvements will be added throughout the development process.

---

# 📄 License

This project is developed for **educational and academic purposes only**.
