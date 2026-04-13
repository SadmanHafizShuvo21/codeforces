// 13 April 2026
#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <vector>

std::mutex mtx;
std::condition_variable cv;
bool writing = false;
std::vector<int> log_file;
void func(int id) {
    for (int i = 0; i < 5; i++) {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [] {
            return writing == false;
        });
        writing = true;
        std::cout << "Thread " << id << " writing log " << i << "\n";

        log_file.push_back(id * 10 + i);
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        writing = false;
        lock.unlock();
        cv.notify_one();
    }
}

int main() {

    std::thread t1(func, 1);
    std::thread t2(func, 2);
    std::thread t3(func, 3);

    t1.join();
    t2.join();
    t3.join();

    std::cout << "\nTotal logs = " << log_file.size() << "\n";
}