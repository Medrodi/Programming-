#include <iostream>
#include <queue>

int main() {
    
    std::queue<int> Queue;

    
    Queue.push(1);
    std::cout << "Содержимое очереди после добавления(1): ";
    std::cout << Queue.front() << std::endl;
    
    
    Queue.push(45);
    Queue.push(59);
    
    std::cout << Queue.front() << std::endl;
    Queue.pop();
    std::cout << Queue.front() << std::endl;
    Queue.pop();
    std::cout << Queue.front() << std::endl;
    
    return 0;
    
}
