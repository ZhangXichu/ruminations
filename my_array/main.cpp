#include <iostream>
#include "my_array.hpp"

int main()
{
    MyArray<Dummy> arr(5);

    arr.add(Dummy(1));
    arr.add(Dummy(2));
    arr.add(Dummy(3));

    std::cout << "Elements in arr :" << std::endl;
    arr.print();


    std::cout << "Elements in arr using conversion operator:" << std::endl;
    const Dummy* ptr = arr; // Implicit conversion to const Dummy*
    std::cout << *(ptr+5) << std::endl;

    std::cout << "current size : " << arr.get_size() << std::endl;
    std::cout << "current capacity : " << arr.get_capacity() << std::endl;

    std::cout << "the 7th element is :" << arr[6] << std::endl;
    
    int* ptr_x;
    {
        MyArray<int> arr_x(20);
        std::cout << "Elements in arr_x :" << std::endl;
        arr_x.print();
        arr_x[10] = 100;
        ptr_x = &arr_x[10];
    }
    std::cout << ptr_x << std::endl; // after MyArray arr_x is destoried, the address of the element is still kept
    std::cout << *ptr_x << std::endl;

    MyArray<int> arr_y(20);
    arr_y[10] = 123;
    int* ptr_y = &arr_y[10];
    arr_y.resize(15);

    std::cout << *ptr_y << std::endl; // what does ptr_y point to now?

    return 0;
}