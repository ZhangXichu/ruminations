#include <iostream>
#include "my_array.hpp"
#include "pointer.hpp"
#include "pointer_to_const.hpp"

int main()
{
    MyArray<Dummy> arr(20);

    arr[2] = Dummy(22);
    arr[3] = Dummy(30);
    arr[4] = Dummy(40);

    arr.print();

    Pointer<Dummy> ptr(arr, 2);
    std::cout << "ptr points to " << *ptr << std::endl;
    std::cout << "Use count of arr is " << ptr.get_use_counts() << std::endl;

    Pointer<Dummy> ptr2(ptr);
    std::cout << "Use count of arr is " << ptr.get_use_counts() << std::endl;

    // self assignment
    ptr2 = ptr2;
    std::cout << "Use count of arr is " << ptr.get_use_counts() << std::endl;

    MyArray<int>* arr_ptr = new MyArray<int>(10);
    Pointer<int> ptr3(*arr_ptr, 4);
    std::cout << "Use count of arr_ptr is " << ptr3.get_use_counts() << std::endl;
    delete arr_ptr;
    *ptr3 = 25;
    std::cout << "arr_ptr is still valid: ptr3 = " << *ptr3 << std::endl;


    const MyArray<Dummy> arr_c(20);

    arr_c.print();
    PointerToConst<Dummy> ptr_c(arr_c, 5);
    std::cout << "Use count of arr_c is " << ptr_c.get_use_counts() << std::endl;


    return 0;
}