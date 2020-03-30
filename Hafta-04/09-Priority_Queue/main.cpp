#include <iostream>
#include <queue>

// https://www.geeksforgeeks.org/priority-queue-in-cpp-stl/

// Queue'nun sıralı halidir.

void showpq(std::priority_queue <int> gq)
{
    std::priority_queue <int> g = gq;
    while (!g.empty())
    {
        std::cout << '\t' << g.top();
        g.pop();
    }
    std::cout << '\n';
}

int main ()
{
    std::priority_queue <int> gquiz;
    gquiz.push(10);
    gquiz.push(30);
    gquiz.push(20);
    gquiz.push(5);
    gquiz.push(1);

    std::cout << "The priority queue gquiz is : ";
    showpq(gquiz);

    std::cout << "\ngquiz.size() : " << gquiz.size();
    std::cout << "\ngquiz.top() : " << gquiz.top();


    std::cout << "\ngquiz.pop() : ";
    gquiz.pop();
    showpq(gquiz);

    return 0;
}

