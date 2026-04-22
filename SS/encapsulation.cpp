#include <iostream>
using namespace std;

class Student {
private:
    int marks;   // private data (hidden)

public:
    void setMarks(int m) {   // setter
        marks = m;
    }

    int getMarks() {   // getter
        return marks;
    }
};

int main() {
    Student s;

    s.setMarks(85);
    cout << "Marks: " << s.getMarks();

    return 0;
}