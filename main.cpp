// Name: Sebastian Inthasane
// Course: COP3003 Programming II
// Instructor: Professor Scott Vanselow
// COP3003 Integration Project

#include <iostream>
#include "QuestionFactory.cpp"

using namespace std;

vector<Question> generateQuestionsForTheQuiz(){
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
                                               "#include <string>\n"
                                               "using namespace std;\n"
                                               "class A {\n"
                                               "public:\n"
                                               "A() { cout << "A no parameters"; }\n"
                                               "A(string s) { cout << "A string parameter"; }\n"
                                               "A(A& a) { cout << "A object A parameter"; }\n"
                                               "};\n"
                                               "class B : public A {\n"
                                               "public:\n"
                                               "B() { cout << "B no parameters"; \n"
                                               "B(string s) { cout << "B string parameter"; }\n"
                                               "};\n"
                                               "int main() {\n"
                                               "A a2("Test");\n"
                                               "B b1("Alan");\n"
                                               "B b2(b1);\n"
                                               "return 0;\n"
                                               "}", "It prints: A no parametersA no parameters no parametersB string parameter", "It prints: A string parameterA no ParametersB string parameterA object A parameter", "It prints: A no parametersB string parameter", "It prints: A no parametersA no parameters", 1));


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

    questions.push_back(Question::makeQuestion("What happens when you attempt to compile and run the following code?\n"
                                               "#include <iostream>\n"
                                               "#include <string>\n"
                                               "using namespace std;\n"
                                               "class A {\n"
                                               "public:\n"
                                               "string s;\n"
                                               "B (A a) { this?>s=s; }\n"
                                               "}'\n"
                                               "Class B{\n"
                                               "public:\n"
                                               "string s;\n"
                                               "B(A a){this?>s=a.s;}\n"
                                               "void print(){cout<<s;}\n"
                                               "};\n"
                                               "int main ()\n"
                                               "{\n"
                                               "A a("Hello world");\n"
                                               "B b=a;\n"
                                               "b.print();\n"
                                               "}", "It prints: Hello world", "It prints: Hello", "Compilation error", "None of these", 0));


    return questions;
}


int main() {
    vector<Question> questions = generateQuestionsForTheQuiz();
    int count = 0;
    int answer;
    for (Question q: questions) {
        q.printQuestion();

        cout << "> ";


        cin >> answer;

        if(answer == q.getIndexOfCorrectAnswer()){
            cout << "That's correct!" << endl;
            count++;
        }
        else{
            cout << "Sorry, that is wrong, the correct answer was " << q.getPossibilities()[q.getIndexOfCorrectAnswer()] << endl;
        }

    }

    cout << "Congratulations, you scored " << count << "/" << questions.size() << endl;

    return 0;
}
