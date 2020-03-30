#include <iostream>
#include <queue>

// https://www.geeksforgeeks.org/queue-cpp-stl/

// FIFO

void showq(std::queue <int> gq)
{
    std::queue <int> g = gq;
    while (!g.empty())
    {
        std::cout << '\t' << g.front();
        g.pop();
    }
    std::cout << '\n';
}

int main()
{
    std::queue <int> gquiz;
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);

    std::cout << "The queue gquiz is : ";
    showq(gquiz);

    std::cout << "\ngquiz.size() : " << gquiz.size();
    std::cout << "\ngquiz.front() : " << gquiz.front();
    std::cout << "\ngquiz.back() : " << gquiz.back();

    std::cout << "\ngquiz.pop() : ";
    gquiz.pop();
    showq(gquiz);

    return 0;
}
