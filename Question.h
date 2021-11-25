#ifndef SEEBSTERSQUIZ_QUESTION_H
#define SEEBSTERSQUIZ_QUESTION_H
#include <string>
#include <vector>

using namespace std;
class Question {
private:
    string questionText;
    vector <string> possibilities;
    int indexOfCorrectAnswer;

public:

    Question(const string &questionText, const vector <string> &possibilities, int indexOfCorrectAnswer);

    const string &getQuestionText() const;

    void setQuestionText(const string &questionText);

    const vector<string> &getPossibilities() const;

    void setPossibilities(const vector<string> &possibilities);

    int getIndexOfCorrectAnswer() const;

    void setIndexOfCorrectAnswer(int indexOfCorrectAnswer);

    void printQuestion();

    static Question makeQuestion(string prompt, string q1, string q2, string q3, string q4, int correct);
};


#endif 
