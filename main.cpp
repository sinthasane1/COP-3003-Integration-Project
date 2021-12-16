// Name: Sebastian Inthasane
// Course: COP3003 Programming II
// Instructor: Professor Scott Vanselow
// COP3003 Integration Project

#include <iostream>
#include "BonusQuestion.h"

using namespace std;


/* L04
 * Procedural approach divides program into functions(procedures), while OOP divides it into objects
 *
 *  L05
 * OOP assumes inheritance, so we can make a class called Animal, and then we can extend it with Cat and Dog classes,
 * which will have their unique parts but also similar parts that are contained in the Animal class,
 * We can look at Cat as an animal, so we can put Cat in an array of Animals because Cat is an Animal
 */

/** @brief Factory method for generating questions for the quiz
 *  Makes questions I predetermined and returns them to the main
 * @return vector with questions
 */
vector<Question> generateQuestionsForTheQuiz() {
    vector<Question> questions;

    questions.push_back(Question::makeQuestion("What happens when you attempt to compile and run the following code?\n"
                                               "#include <iostream>\n"
                                               "using namespace std;\n"
                                               "void fun(char*);\n"
                                               "int main()"
                                               "int x;\n"
                                               "{;\n"
                                               "char t[4]={'0','1','2','3'};\n"
                                               "fun(&t[2]);\n"
                                               "return 0;\n"
                                               "};\n"
                                               "void fun(char *a)\n"
                                               "{\n"
                                               "cout << *a\n"
                                               "}\n"
                                               "}", "It prints: 2", "It prints: 21", "It prints: 00", "It prints: 02", 0));

    questions.push_back(Question::makeQuestion("What happens when you attempt to compile and run the following code?\n"
                                               "#include <iostream>\n"
                                               "using namespace std;\n"
                                               "int main (int argc, const char * argv[])\n"
                                               "{\n"
                                               "int a = 30, b = 1, c = 5, i=10;\n"
                                               "i = b < a < c;\n"
                                               "cout << i;\n"
                                               "return 0;\n"
                                               "}\n"
                                               "}", "compilation fails", "It prints: 10", "It prints: 0", "It prints: 1", 3));

    questions.push_back(Question::makeQuestion("What is the output of the program given below?\n"
                                               "#include <iostream>\n"
                                               "using namespace std;\n"
                                               "int main (int argc, const char * argv[])\n"
                                               "{\n"
                                               "int i=10;\n"
                                               "{\n"
                                               "int i=0;\n"
                                               "cout<<i;\n"
                                               "}\n"
                                               "cout<<i;\n"
                                               "return 0;\n"
                                               "}\n"
                                               "}", "1010", "100", "010", "None of these", 2));

    questions.push_back(Question::makeQuestion("What happens when you attempt to compile and run the following code?\n"
                                               "#include <iostream>\n"
                                               "using namespace std;\n"
                                               "#include <iostream>\n"
                                               "using namespace std;\n"
                                               "class First\n"
                                               "{\n"
                                               "public:\n"
                                               "void Print(){ cout<<\"from First\";}\n"
                                               "};\n"
                                               "int main()\n"
                                               "{\n"
                                               "First t[2];\n"
                                               "for (int i=0; i<2; i++)\n"
                                               "t[i].Print();\n"
                                               "}\n"
                                               "}", "It prints: from First", "It prints: from Firstfrom First", "Compilation error", "Runtime error", 1));

    questions.push_back(Question::makeQuestion("What happens when you attempt to compile and run the following code?\n"
                                               "#include <iostream>\n"
                                               "#include <string>\n"
                                               "using namespace std;\n"
                                               "class A {\n"
                                               "public:\n"
                                               "int x;\n"
                                               "A() { x=0;}\n"
                                               "A(int x) { this?>x=x;}\n"
                                               "};\n"
                                               "class B : private A {\n"
                                               "public:\n"
                                               "using A::x;\n"
                                               "B() { x=1;}\n"
                                               "B(int x) {this?>x = x;}\n"
                                               "};\n"
                                               "int main () {\n"
                                               "B c1;\n"
                                               "B c2(?5);\n"
                                               "cout << c1.x;\n"
                                               "cout << c2.x;\n"
                                               "return 0;\n"
                                               "}\n"
                                               "}", "It prints: 5", "It prints: 1?5", "It prints: 05", "It prints: 0", 0));

    questions.push_back(Question::makeQuestion("What happens when you attempt to compile and run the following code?\n"
                                               "#include <iostream>\n"
                                               "#include <string>\n"
                                               "using namespace std;\n"
                                               "class B;\n"
                                               "class A {\n"
                                               "int age;\n"
                                               "public:\n"
                                               "A () { age=5; };\n"
                                               "friend class B;\n"
                                               "};\n"
                                               "class B {\n"
                                               "string name;\n"
                                               "public:\n"
                                               "B () { name=\"Bob\"; };\n"
                                               "void Print(A ob) {\n"
                                               "cout << name << ob.age;\n"
                                               "}\n"
                                               "};\n"
                                               "int main () {\n"
                                               "A a;\n"
                                               "B b;\n"
                                               "b.Print(a);\n"
                                               "return 0;\n"
                                               "}", "It prints: Bob5", "It prints: Bob", "It prints: 5", "None of these", 0));


    questions.push_back(Question::makeQuestion("What happens when you attempt to compile and run the following code?\n"
                                               "#include <iostream>\n"
                                               "using namespace std;\n"
                                               "class A\n"
                                               "{\n"
                                               "public:\n"
                                               "virtual void Print(){ cout<<\"A\";}\n"
                                               "};\n"
                                               "class B:public A\n"
                                               "{\n"
                                               "public:\n"
                                               "void Print(){ cout<< \"B\";}\n"
                                               "};\n"
                                               "int main()\n"
                                               "{\n"
                                               "A *obj;\n"
                                               "A ob1;\n"
                                               "obj = &ob1;\n"
                                               "obj?>Print();\n"
                                               "B ob2;\n"
                                               "obj = &ob2;\n"
                                               "obj?>Print();\n"
                                               "}\n"
                                               "}", "It prints: AB", "It prints: AA", "It prints: BA", "It prints: BB", 0));

    questions.push_back(Question::makeQuestion("What happens when you attempt to compile and run the following code?\n"
                                               "#include <iostream>\n"
                                               "#include <string>\n"
                                               "using namespace std;\n"
                                               "class A {\n"
                                               "public:\n"
                                               "A() { cout << \"A no parameters\";}\n"
                                               "A(string s) { cout << \"A string parameter\";}\n"
                                               "A(A &a) { cout << \"A object A parameter\";}\n"
                                               "};\n"
                                               "class B : public A {\n"
                                               "public:\n"
                                               "B() { cout << \"B no parameters\";}\n"
                                               "B(string s) { cout << \"B string parameter\";}\n"
                                               "B(int s) { cout << \"B int parameter\";}\n"
                                               "};\n"
                                               "int main () {\n"
                                               "A a2(\"Test\");\n"
                                               "B b1(10);\n"
                                               "B b2(b1);\n"
                                               "return 0;\n"
                                               "}\n"
                                               "}", "It prints: A no parametersA no parametersB string parameter", "It prints: A string parameterA no parametersB int parameterA object A parameter", "It prints: A no parametersB string parameter", "It prints: A no parametersA no parameters", 1));

    questions.push_back(Question::makeQuestion("What happens when you attempt to compile and run the following code?\n"
                                               "#include <iostream>\n"
                                               "#include <string>\n"
                                               "using namespace std;\n"
                                               "class First\n"
                                               "{\n"
                                               "string *s;\n"
                                               "public:\n"
                                               "First() { s = new string(\"Text\");}\n"
                                               "~First() { delete s;}\n"
                                               "void Print(){ cout<<*s;}\n"
                                               "};\n"
                                               "int main()\n"
                                               "{\n"
                                               "First FirstObject;\n"
                                               "FirstObject.Print();\n"
                                               "FirstObject.~First();\n"
                                               "}\n"
                                               "}", "It prints: Text", "Compilation error", "Runtime error", "None of these", 2));


    questions.push_back(Question::makeQuestion("What happens when you attempt to compile and run the following code?\n"
                                               "#include <iostream>\n"
                                               "#include <string>\n"
                                               "using namespace std;\n"
                                               "class A {\n"
                                               "public:\n"
                                               "int x;\n"
                                               "};\n"
                                               "class B : public A {\n"
                                               "public:\n"
                                               "B() { x=1;}\n"
                                               "B(int x) {this?>x = x;}\n"
                                               "};\n"
                                               "int main () {\n"
                                               "B c1;\n"
                                               "B c2(10);\n"
                                               "cout << c1.x;\n"
                                               "cout << c2.x;\n"
                                               "return 0;\n"
                                               "}", "It prints: 010", "It prints: 110", "It prints: 00", "It prints: 1", 1));
    return questions;
}

/**@brief Main method
 * Asks questions, sums up the points and lets the user know how much they scored
 * @return
 */
int main() {
    vector<Question> questions = generateQuestionsForTheQuiz();
    int count = 0;
    int answer;
    BonusQuestion bonus = BonusQuestion::makeQuestion("What is a sqrt(81)", "3", "6", "9", "I dont know", 2);

    //Iterator for iterating through the questions, L07
    for (auto q = begin (questions); q != end (questions); ++q) {
        q->printQuestion();

        cout << "> ";
        cin >> answer;

        if (answer == q->getIndexOfCorrectAnswer()) {
            cout << "That's correct!" << endl;
            count += q->getPoints();
        } else {
            cout << "Sorry, that is wrong, the correct answer was " << q->getPossibilities()[q->getIndexOfCorrectAnswer()]
                 << endl;
        }

        cout << "You have " << count << " points" << endl;

    }

    bonus.printQuestion();

    cout << "> ";
    cin >> answer;

    if (answer == bonus.getIndexOfCorrectAnswer()) {
        cout << "That's correct!" << endl;
        count += bonus.getPoints();
    } else {
        cout << "Sorry, that is wrong, the correct answer was "
             << bonus.getPossibilities()[bonus.getIndexOfCorrectAnswer()] << endl;
    }

    cout << "You have " << count << " points" << endl;


    cout << "Congratulations, you scored " << count << "/" << questions.size() << endl;

    return 0;
}
