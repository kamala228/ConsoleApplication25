#include <iostream>
using namespace std;

#define c cout
#define e endl


class ProgrammingLanguage {
protected:
    string name;
public:
    ProgrammingLanguage(string n) : name(n) {}
    virtual void showInfo() {
        c << "Мова програмування: " << name << e;
    }
};

// Основні напрямки програмування
class WebDevelopment : public ProgrammingLanguage {
public:
    WebDevelopment(string n) : ProgrammingLanguage(n) {}
    void showInfo() override {
        c << name << " використовується у веб-розробці." << e;
    }
};

class MobileDevelopment : public ProgrammingLanguage {
public:
    MobileDevelopment(string n) : ProgrammingLanguage(n) {}
    void showInfo() override {
        c << name << " використовується для мобільних додатків." << e;
    }
};

class GameDevelopment : public ProgrammingLanguage {
public:
    GameDevelopment(string n) : ProgrammingLanguage(n) {}
    void showInfo() override {
        c << name << " використовується у розробці ігор." << e;
    }
};

class SystemProgramming : public ProgrammingLanguage {
public:
    SystemProgramming(string n) : ProgrammingLanguage(n) {}
    void showInfo() override {
        c << name << " використовується для системного програмування." << e;
    }
};

class DataScience : public ProgrammingLanguage {
public:
    DataScience(string n) : ProgrammingLanguage(n) {}
    void showInfo() override {
        c << name << " використовується в аналізі даних та машинному навчанні." << e;
    }
};


class Python : public DataScience {
public:
    Python() : DataScience("Python") {}
    void showInfo() override {
        c << name << ": простий синтаксис, бібліотеки для ML (TensorFlow, Pandas)." << e;
    }
};

class JavaScript : public WebDevelopment {
public:
    JavaScript() : WebDevelopment("JavaScript") {}
    void showInfo() override {
        c << name << ": використовується для фронтенду, має Node.js для серверної частини." << e;
    }
};

class Swift : public MobileDevelopment {
public:
    Swift() : MobileDevelopment("Swift") {}
    void showInfo() override {
        c << name << ": основна мова для iOS-додатків, швидкість та безпека." << e;
    }
};

class Cpp : public GameDevelopment {
public:
    Cpp() : GameDevelopment("C++") {}
    void showInfo() override {
        c << name << ": використовується в іграх (Unreal Engine), висока продуктивність." << e;
    }
};

class CSharp : public GameDevelopment {
public:
    CSharp() : GameDevelopment("C#") {}
    void showInfo() override {
        c << name << ": використовується у Unity, об'єктно-орієнтована мова." << e;
    }
};

int main() {
    system("chcp 1251>null");
    Python py;
    JavaScript js;
    Swift sw;
    Cpp cpp;
    CSharp cs;

    py.showInfo();
    js.showInfo();
    sw.showInfo();
    cpp.showInfo();
    cs.showInfo();

    return 0;
}
