#include <iostream>
#include <cstring>
using namespace std;

class LogBuffer {
    char* buffer;
    int capacity;
    int size;
    static int instanceCount;
    mutable int accessCount = 0;

public:
    // Constructor
    LogBuffer(int cap) : capacity(cap), size(0) {
        buffer = new char[capacity];
        buffer[0] = '\0';
        instanceCount++;
        cout << "[LogBuffer Created] capacity=" << capacity << endl;
    }

    // Copy constructor
    LogBuffer(const LogBuffer& other)
        : capacity(other.capacity), size(other.size) {
        buffer = new char[capacity];
        strcpy(buffer, other.buffer);
        instanceCount++;
        cout << "[LogBuffer Deep Copied] capacity=" << capacity << endl;
    }

    // Copy assignment operator
    LogBuffer& operator=(const LogBuffer& other) {
        if (this == &other) {
            cout << "[Self-assignment detected — no operation]" << endl;
            return *this;
        }
        delete[] buffer;
        capacity = other.capacity;
        size = other.size;
        buffer = new char[capacity];
        strcpy(buffer, other.buffer);
        cout << "[LogBuffer Assigned]" << endl;
        return *this;
    }

    // Destructor
    ~LogBuffer() {
        delete[] buffer;
        instanceCount--;
        cout << "[LogBuffer Destroyed]" << endl;
    }

    void append(const char* msg) {
        int len = strlen(msg);
        if (size + len < capacity) {
            strcpy(buffer + size, msg);
            size += len;
        }
    }

    void print() const {
        cout << buffer << endl;
        accessCount++;
    }

    void clear() {
        size = 0;
        buffer[0] = '\0';
    }



    static int getInstanceCount() {
        return instanceCount;
    }

    int getAccessCount() const {
               return accessCount;
       }
};

// Define static member
int LogBuffer::instanceCount = 0;

int main() {
    LogBuffer log1(256);
    log1.append("Server started on port 8080");
    log1.append(" | Request received from 192.168.1.10");
    log1.print();

    LogBuffer log2 = log1; // deep copy
    log2.append(" | Cached response sent");
    cout << "log1 : "; log1.print();
    cout << "log2 : "; log2.print();

    LogBuffer log3(128);
    log3 = log1; // copy assignment
    log3.print();

    log1 = log1; // self-assignment
    log1.print();
    cout<<endl;
    cout << "Live LogBuffer objects : " << LogBuffer::getInstanceCount() << endl;

    const LogBuffer readOnly(log1); // copy construct into a const object
    readOnly.print();
    readOnly.print();
    readOnly.print();
    cout << "Times printed: " << readOnly.getAccessCount() << endl; // must print 3
}
