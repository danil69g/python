Завдання 1
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

 struct Student {
    string surname;
    int birthYear;
    string faculty;
    double avgGrade;
};

 void inputStudents(Student* students, int count) {

    for (int i = 0; i < count; ++i) {
        cout << "Введіть дані про студента " << i + 1 << ":" << endl;
        cout << "Прізвище: ";
        cin >> students[i].surname;
        cout << "Рік народження: ";
        cin >> students[i].birthYear;
        cin.ignore(32767, '\n');  
        cout << "Факультет: ";
        getline(cin, students[i].faculty);
        cout << "Середній бал: ";
        cin >> students[i].avgGrade;
        cout << endl;
    }
}

 void printStudent(const Student& student) {
    cout << "Прізвище: " << student.surname << endl;
    cout << "Рік народження: " << student.birthYear << endl;
    cout << "Факультет: " << student.faculty << endl;
    cout << "Середній бал: " << student.avgGrade << endl;
}

 void studentsByFaculty(const Student* students, int count, const string& faculty) {
    cout << "Студенти факультету " << faculty << ":" << endl;
    for (int i = 0; i < count; ++i) {
        if (students[i].faculty == faculty) {
            printStudent(students[i]);
            cout << endl;
        }
    }
}

 const Student& Avg(const Student* students, int count) {
    const Student* Avg = &students[0];
    for (int i = 1; i < count; ++i) {
        if (students[i].avgGrade > Avg->avgGrade) {
            Avg = &students[i];
        }
    }
    return *Avg;
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int count;
    cout << "Введіть кількість студентів: ";
    cin >> count;

     Student* students = new Student[count];

     inputStudents(students, count);

     string faculty;
    cout << "Введіть факультет, для якого потрібно вивести студентів: ";
    cin.ignore(32767, '\n');  
    getline(cin, faculty);
    studentsByFaculty(students, count, faculty);

     const Student& Avg = Avg(students, count);
    cout << "Студент з найвищим середнім балом:" << endl;
    printStudent(Avg);

     delete[] students;

    return 0;
}

 
Завдання 3
#include <iostream>
#include <string>

using namespace std;

 struct Apartment {
    string ownerSurname;
    double area;
    int numRooms;
    int floor;
};

 void Apartments(Apartment* apartments, int count) {
    for (int i = 0; i < count; ++i) {
        cout << "Введіть дані про квартиру " << i + 1 << ":" << endl;
        cout << "Прізвище власника: ";
        cin >> apartments[i].ownerSurname;
        cout << "Площа (у квадратних метрах): ";
        cin >> apartments[i].area;
        cout << "Кількість кімнат: ";
        cin >> apartments[i].numRooms;
        cout << "Поверх: ";
        cin >> apartments[i].floor;
        cout << endl;
    }
}

 void printApartments(const Apartment* apartments, int count) {
    cout << "Дані про квартири:" << endl;
    for (int i = 0; i < count; ++i) {
        cout << "Квартира " << i + 1 << ":" << endl;
        cout << "Прізвище власника: " << apartments[i].ownerSurname << endl;
        cout << "Площа: " << apartments[i].area << " кв. м" << endl;
        cout << "Кількість кімнат: " << apartments[i].numRooms << endl;
        cout << "Поверх: " << apartments[i].floor << endl;
        cout << endl;
    }
}

 Apartment ApartmentMax(const Apartment* apartments, int count) {
    Apartment maxApartment = apartments[0];
    for (int i = 1; i < count; ++i) {
        if (apartments[i].area > maxApartment.area) {
            maxApartment = apartments[i];
        }
    }
    return maxApartment;
}

 Apartment ApartmentMin(const Apartment* apartments, int count) {
    Apartment minAreaApartment = apartments[0];
    for (int i = 1; i < count; ++i) {
        if (apartments[i].area < minAreaApartment.area) {
            minAreaApartment = apartments[i];
        }
    }
    return minAreaApartment;
}

int main() {
    int count;
    cout << "Введіть кількість квартир: ";
    cin >> count;

     Apartment* apartments = new Apartment[count];

     Apartments(apartments, count);

     printApartments(apartments, count);

     Apartment maxApartment = ApartmentMax(apartments, count);
    cout << "Квартира з найбільшою площею:" << endl;
    cout << "Прізвище власника: " << maxApartment.ownerSurname << endl;
    cout << "Площа: " << maxApartment.area << " кв. м" << endl;
    cout << "Кількість кімнат: " << maxApartment.numRooms << endl;
    cout << "Поверх: " << maxApartment.floor << endl;

     Apartment minApartment = ApartmentMin(apartments, count);
    cout << "Квартира з найменшою площею:" << endl;
    cout << "Прізвище власника: " << minApartment.ownerSurname << endl;
    cout << "Площа: " << minApartment.area << " кв. м" << endl;
    cout << "Кількість кімнат: " << minApartment.numRooms << endl;
    cout << "Поверх: " << minApartment.floor << endl;

     delete[] apartments;

    return 0;
}


