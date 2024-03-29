#include "sequence.hpp"

;

int main()
{
    Sequence<int> sequence;

    sequence = Sequence<int>(5, sequence);
    sequence = Sequence<int>(6, sequence);
    sequence = Sequence<int>(7, sequence);
    sequence = construct(8, sequence);
    // use convenience function
    sequence.insert(9);

    sequence.print_all_elements();
    std::cout << "length of sequence = " << sequence.length() << std::endl;

    std::cout << "head of sequence = " << *sequence << std::endl;

    int arr_1[] = {2, 4, 7, 10, 16, 34, 41, 55, 67, 80};
    int arr_2[] = {1, 4, 7, 13, 26, 35, 40, 81};

    Sequence<int> seq_x(arr_1, 10);
    Sequence<int> seq_y(arr_2, 8);

    std::cout << "elements in seq_x : ";
    seq_x.print_all_elements();
    std::cout << "elements in seq_y : ";
    seq_y.print_all_elements();

    Sequence<int> seq_m_xy = merge(seq_x, seq_y);
    std::cout << "after merge seq_x and seq_y : ";
    seq_m_xy.print_all_elements();

    int arr_input[] = {62, 111, 106, 57, 126};
    Sequence<int> seq_input(arr_input, 5);
    Sequence<int> part1, part2;
    split(seq_input, part1, part2);

    std::cout << "seq_x part1: ";
    part1.print_all_elements();
    std::cout << "seq_x part2: ";
    part2.print_all_elements();

    std::cout << "sorted: ";
    sort(seq_input).print_all_elements();

    return 0;
}