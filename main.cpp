#include <iostream>
#include <cmath> 
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <vector> 
#include <algorithm>

using namespace std;

int basics() {
    std::cout << "Hello world Marcos es Marico" << std::endl;
    return 0;
}

int listAllPrimes(int limit) {
    for(int i = 3; i < limit; i++) {
        if(!(i % 2 == 0 || i % 3 == 0 || i % 7 == 0 || i % 5 == 0)) {
            std::cout << i << std::endl;
        }
    }
    return 0;
}

int testingDoubles() {
    double d = 999.2;
    int i = 28908/99999;
    float f = 1234.535;
    cout << "the d is ...  " << d << " the double number" << i << " the integer " << f << " the float " << endl;
    return 0;
}

int collatz(int x) {
    int erg;
    if(x % 2 == 0) {
        erg = x / 2;
    } else {
        erg = 3*x + 1;
    }
    return erg;
}

int eingabe() {
    int input;
    std::cout << "Insert a number to continue" << std::endl;
    std::cin >> input;

    int x1 = collatz(input);
    int x2 = collatz(x1);
    int x3 = collatz(x2);

    std::cout << input << "-->" << x1 << "->" << x2 << "->" << x3 << std::endl;
    return 0;
}

namespace one {
    int x = 5;
}

namespace two {
    double y = 2.78080;
}

int nameSpacing() {
    std::cout << one::x << std::endl;
    std::cout << two::y << std::endl;
    return 0;
}

int tryingVectors() {
    std::vector<int> distance;
    srand(time(NULL));
    distance.push_back(28234);
    for(int i = 0; i < distance.size(); i++) {
        std::cout << "the distance is: " << distance[i] << std::endl;  
    }
    return 0;
}

int deepVectors() {
    std::vector<int> distance;
    srand(time(NULL));

    for(int i = 0; i < 100; i++) {
        distance.push_back(rand());
    }
    std::cout << "in index 0 we have " << distance[0] << std::endl;
    std::cout << "in index 43 we have " << distance[43] << std::endl;
    std::cout << "in index 98 we have " << distance[98] << std::endl;

    return 0;
}

int quiz() {
    std::vector<string> questions;
    std::vector<string> allAnswers;
    string questionsArr[10] {
        "whats your name?",
        "how old are you?",
        "3 hobbies of yours?",
        "name two pets?", 
        "do you have a GF ?",
        "do you have a BF ?",
        "are you male or female ?", 
        "In case you are female, write your number down here ;)?",
        "if you were male and you wrote it, sorry im not interested ?", 
        "which are your greatest fears ?"
    };
    for(int i = 0; i < sizeof(questionsArr)/sizeof(*questionsArr); i++) {
        string answer;
        questions.push_back(questionsArr[i]);
        cout << questions[i] << endl;
        getline(cin, answer);
        allAnswers.push_back(answer);
    }
    questions.push_back("Your answers to the last questions: ");
    for(int i = 0; i < sizeof(questionsArr)/sizeof(*questionsArr); i++) {
        cout << questions[i] << " your answer was: " << allAnswers[i] << endl;
    }
    cout << "Thanks for playing!" << endl;
    return 0;
}

int pointers() {
    int  var = 20;   // actual variable declaration.
    int  *ip;        // pointer variable 

    ip = &var;       // store address of var in pointer variable

    cout << "Value of var variable: ";
    cout << var << endl;

    // print the address stored in ip pointer variable
    cout << "Address stored in ip variable: ";
    cout << ip << endl;

    // access the value at the address available in pointer
    cout << "Value of *ip variable: ";
    cout << *ip << endl;
    
    return 0;
}

int pointersDeeper() {
    int variable = 20;
    int *half;

    half = &variable;
    cout << "half: " << half << "*half: " << *half << "variable: "<< variable << endl;

    // half returns the pointer
    //*half returns the value of the variable 20
    //variable is still variable
    return 0;
}

int warnings() {
    int n; 
    cout << "enter a number " <<endl;
    cin >> n;
    if(n = 0) {
        cout << "n = " << n << "ok, n !== null" << endl;
    } else {
        cout << "n = " << n << ", n is not equal 0 " << endl;
    }
    return 0;
    //g++ -Wall -o [.exe file] [program.cpp]
}

bool isPrim(int n) {
    for(int i = 2; i < n; i++) {
        if((n%i) == 0) {
            return false;
        }
    }
}

int definePrimal() {
    int n;
    cout << "Enter a positive number please!" << endl;
    cin >> n;
    if(n <= 0) {
        cerr << "The number should be 0!" << endl;
        return 1;
    }

    if(isPrim(n)) {
        cout << n << " is prime bro" << endl;
    } else {
        cout << n << " is not prime mfkr B)" << endl;
    }
    return 0;
}



int countAll(string str) {
    int arg;
    // unsigned cant save negative values
    unsigned i = 0;
    for(i; i< str.length(); i++) {
        if(str[i] == 'a') {
            arg++;
        }
    }
    return arg;
}

int countChars() {
    string word;
    cout << "Please enter a word" << endl;
    cin >> word;

    cout << "in your word you wrote " << countAll(word) << " times the a letter " << endl;
    return 0;
}

int main() {
    // basics();
    // listAllPrimes(100);
    // eingabe();
    // nameSpacing();
    // tryingVectors();
    // deepVectors();
    // pointers();
    // pointersDeeper();
    // quiz();
    // warnings();
    // definePrimal();
    countChars();
    // testingDoubles();
    return 0;
}
