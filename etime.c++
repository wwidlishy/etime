#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>

int main(int argc, char** argv)
{
    std::string command;

    for (int i = 1; i < argc; ++i)
    {   
        command += std::string(argv[i]) + " ";
    }

    if (!command.empty()) command.pop_back();

    std::clock_t start = std::clock();
    int returnValue = std::system(command.c_str());
    double duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;

    std::cout << "\n\nCommand executed." << std::endl;
    std::cout << "Time taken: " << duration << " seconds" << std::endl;

    return 0;
}