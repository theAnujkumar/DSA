#include<iostream>
#include<string.h>
using namespace std;

class Student {
    const int rollNo;

    public:
    //'const int Student::rollNo' should be initialized
    Student(int r) : rollNo(r) {}
    
    void show() {
        cout << "Roll No: " << rollNo << endl;
    }
};

class Marks {
    int marks;
public:
    Marks(int m) : marks(m) {}

    int getMarks() const {   // const member function
        // marks++; ❌ error – cannot modify inside const function
        return marks;
    }
    void setMarks(int marks) const
    {
        marks = marks;
    }
};

int main()
{
    Student s1(5);
    s1.show();

    const Marks s2(90);
    s2.getMarks();     // ✅ allowed
    // s2.setMarks(95); ❌ error
}

/*
| Usage               | Meaning                            |
| ------------------- | ---------------------------------- |
| `const int x`       | Variable cannot change             |
| `const int* p`      | Value pointed by `p` cannot change |
| `int* const p`      | Pointer `p` itself cannot change   |
| `void func() const` | Function cannot modify object data |
| `const Class obj`   | Object cannot be modified          |

*/