#include "BonusQuestion.h"
//L01c initialization list

BonusQuestion::BonusQuestion(const string &questionText, const vector<string> &possibilities, int indexOfCorrectAnswer)
        : Question(questionText, possibilities, indexOfCorrectAnswer) {}

int BonusQuestion::getPoints() {
    return 5;
}

BonusQuestion BonusQuestion::makeQuestion("What happens when you attempt to compile and run the following code?\n"
                                          "#include <iostream>\n"
                                          "#include <string>\n"
                                          "using namespace std;\n"
                                          "class A {\n"
                                          "public:\n"
                                          "A() { cout << \"A0 \";}\n"
                                          "A(string s) { cout << \"A1\";}\n"
                                          "};\n"
                                          "class B : public A {\n"
                                          "public:\n"
                                          "B() { cout << \"B0 \";}\n"
                                          "B(string s) { cout << \"B1 \";}\n"
                                          "};\n"
                                          "class C : private B {\n"
                                          "public:\n"
                                          "C() { cout << \"C0 \";}\n"
                                          "C(string s) { cout << \"C1 \";}\n"
                                          "};\n"
                                          "int main () {\n"
                                          "B b1;\n"
                                          "C c1;\n"
                                          "return 0;\n"
                                          "}\n"
                                          "}", "It prints: A0 B0 A0 B1 A0 C0 A0 C1", "It prints: B0 B1 C0 C1", "It prints: A0 B0 A0 B0 C0", "It prints: B0 B1", 2));

    answers.push_back(q1);
    answers.push_back(q2);
    answers.push_back(q3);
    answers.push_back(q4);

    BonusQuestion question(prompt, answers, correct);

    return question;
}

