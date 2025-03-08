// Generating a random number between 1 and 10
int main() {
    std::srand(std::time(nullptr));
    int randomNumber = std::rand() % 10 + 1;
    return randomNumber;
}
