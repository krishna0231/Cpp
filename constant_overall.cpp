class BigObject {
    // Large data structure
    int data[10000];
public:
    int getValue() const { return data[0]; }
};

// Function declaration
void analyze(const BigObject &obj) {
    // Can read but not modify obj
    int val = obj.getValue();
    // obj.modifySomething(); // Would be a compile error
}

int main() {
    BigObject big;
    const BigObject constBig;
    
    // All these calls are valid:
    analyze(big);        // Non-const object
    analyze(constBig);   // Const object
    analyze(BigObject()); // Temporary object
    
    return 0;
}