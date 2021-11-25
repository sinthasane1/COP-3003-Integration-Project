#include "Question.h"
#include <iostream>

Question::Question(const string &questionText, const vector<string> &possibilities, int indexOfCorrectAnswer) {}

const string &Question::getQuestionText() const {
    return questionText;
}

void Question::setQuestionText(const string &questionText) {
    Question::questionText = questionText;
}

const vector<string> &Question::getPossibilities() const {
    return possibilities;
}

void Question::setPossibilities(const vector<string> &possibilities) {
    Question::possibilities = possibilities;
}

int Question::getIndexOfCorrectAnswer() const {
    return indexOfCorrectAnswer;
}

void Question::setIndexOfCorrectAnswer(int indexOfCorrectAnswer) {
    Question::indexOfCorrectAnswer = indexOfCorrectAnswer;
}

void Question::printQuestion() {
    int index = 0;
    cout << questionText << endl;
    for (string q: possibilities) {
        cout << index++ << ") - " <<  q << endl;
    }
    cout << endl;
}

Question Question::makeQuestion(string prompt, string q1, string q2, string q3, string q4, int correct) {
    vector<string> answers;

    answers.push_back(q1);
    answers.push_back(q2);
    answers.push_back(q3);
    answers.push_back(q4);

    Question question(prompt, answers, correct);

    return question;
}
