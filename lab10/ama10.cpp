#include "amBinaryTree.h"
#include "amEmployee.h"

// Functions: main()
// Description: using binary trees with employee objects
// Programmer: Austin Maung
// Version: 1.0
// Hardware: HP Pavilion
// Software: Windows 10
// Compiles under Visual Studio Code
int main()
{
    BinaryTree<Employee> tree;
    tree.insert(Employee(123456,"Ann Ohlone"));
    tree.insert(Employee(155555,"Tim Aikens"));
    tree.insert(Employee(333323,"Wan Weaver"));
    tree.insert(Employee(896931,"Boss Goove"));
    tree.insert(Employee(252657,"Leonardo Gi"));
    tree.insert(Employee(111111,"Mitsune Ka"));
    tree.insert(Employee(777777,"Ya Mantis"));
    tree.insert(Employee(888888,"Beever Man"));
    cout << "Here is the workforce:" << endl;
    tree.print();
    int id;
    while(true)
    {
        cout << "Enter an employee number: ";
        cin >> id;
        tree.find(id);
    }
    return 0;
}
/*
Here is the workforce:
ID Number: 111111 Name: Mitsune Ka
ID Number: 123456 Name: Ann Ohlone
ID Number: 155555 Name: Tim Aikens
ID Number: 252657 Name: Leonardo Gi
ID Number: 333323 Name: Wan Weaver
ID Number: 777777 Name: Ya Mantis
ID Number: 888888 Name: Beever Man
ID Number: 896931 Name: Boss Goove

Enter an employee number: 00000
That employee was not found.
Enter an employee number: 111111
Employee was found: 
ID Number: 111111 Name: Mitsune Ka
Enter an employee number: 252657
Employee was found: 
ID Number: 252657 Name: Leonardo Gi
*/