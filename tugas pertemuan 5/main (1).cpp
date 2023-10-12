#include <iostream>
#include <sstream>

using namespace std;

string nextTime(string currentTime) {
    int hour, minute, second;
 
    stringstream ss(currentTime);
    char delimiter;
    ss >> hour >> delimiter >> minute >> delimiter >> second;
 
    second += 1;
    if (second == 60) {
        second = 0;
        minute += 1;
        if (minute == 60) {
            minute = 0;
            hour += 1;
            if (hour == 24) {
                hour = 0;
            }
        }
    }
 
    stringstream result;
    result << hour << ":";
    result << (minute < 10 ? "0" : "") << minute << ":";
    result << (second < 10 ? "0" : "") << second;

    return result.str();
}

int main() {
    string current_time = "10:10:00"; // Ubah sesuai keinginan Anda
    string new_time = nextTime(current_time);
    cout << new_time << endl;

    return 0;
}