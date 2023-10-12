#include <iostream>

bool isLeapYear(int year) {
    if (year % 400 == 0) {
        return true;
    }
    else if (year % 100 == 0) {
        return false;
    }
    else if (year % 4 == 0) {
        return true;
    }
    else {
        return false;
    }
}

void nextDay(int& day, int& month, int& year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) {
        daysInMonth[1] = 29;
    }

    if (day == daysInMonth[month - 1]) {
        day = 1;
        if (month == 12) {
            month = 1;
            year++;
        }
        else {
            month++;
        }
    }
    else {
        day++;
    }
}

int main() {
    int day, month, year;

    // Baca tanggal saat ini
    std::cout << "Masukkan tanggal (hari bulan tahun): ";
    std::cin >> day >> month >> year;

    // Panggil fungsi Nextday
    nextDay(day, month, year);

    // Tampilkan tanggal berikutnya
    std::cout << "Tanggal berikutnya adalah: " << day << " " << month << " " << year << std::endl;

    return 0;
}
