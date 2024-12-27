#include <iostream>
#include <string>

using namespace std;

// 기본 클래스
class Animal {
public:
    virtual void makeSound() const = 0; // 순수 가상 함수
    virtual ~Animal() {} // 가상 소멸자
};

// Dog 클래스
class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "Dog: 멍멍" << endl;
    }
};

// Cat 클래스
class Cat : public Animal {
public:
    void makeSound() const override {
        cout << "Cat: 냥냥" << endl;
    }
};

// Cow 클래스
class Cow : public Animal {
public:
    void makeSound() const override {
        cout << "Cow: 음머" << endl;
    }
};

int main() {
    // Animal 타입 포인터 배열
    Animal* animals[3];

    // Dog, Cat, Cow 객체 생성 및 배열에 저장
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();

    // 반복문을 사용해 배열의 각 요소에 대해 makeSound() 호출
    for (int i = 0; i < 3; ++i) {
        animals[i]->makeSound();
    }

    // 메모리 해제
    for (int i = 0; i < 3; ++i) {
        delete animals[i];
    }

    return 0;
}
