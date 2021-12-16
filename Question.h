#ifndef SEEBSTERSQUIZ_QUESTION_H
#define SEEBSTERSQUIZ_QUESTION_H

#include <string>
#include <vector>
// L01
using namespace std;

class Question {

    //L06
private:
    string questionText;
    vector<string> possibilities;
    int indexOfCorrectAnswer{};

public:
    //L01a all of those are in cpp file
    Question(const string &questionText, const vector<string> &possibilities, int indexOfCorrectAnswer);


    // L01b
    /**@brief Constructor for the class
     *
     * @param questionText
     */
    Question(const string &questionText);

    /**
     * @return question text of this question
     */
    const string &getQuestionText() const;

    /**
     * @param questionText sets question text of this question
     */
    void setQuestionText(const string &questionText);

    /**
     * @return possibilities vector of this question
     */
    const vector<string> &getPossibilities() const;

    /**
     * @param possibilities sets possibilities vector of this question
     */
    void setPossibilities(const vector<string> &possibilities);

    /**
     * @return index of the correct answer of this question
     */
    int getIndexOfCorrectAnswer() const;

    /**
     * @param indexOfCorrectAnswer sets the index of the correct answer of this question
     */
    void setIndexOfCorrectAnswer(int indexOfCorrectAnswer);

    /** @brief prints the question and answers
     *
     * Goes through the vector and prints all the possibilities of the question
     */
    void printQuestion();

    /** @brief returns number of points scored for answering correctly
     *  In this case returns 1
     * @return number of points
     */
    int getPoints();

    /** @brief makes question with the given params
     *
     * Makes a vector of questions, and makes a new Question object
     * @param prompt prompt of the question
     * @param q1 answer 1
     * @param q2 answer 2
     * @param q3 answer 3
     * @param q4 answer 4
     * @param correct index of the correct answer
     * @return Question made with the passed params
     */
    static Question makeQuestion(string prompt, string q1, string q2, string q3, string q4, int correct);
};


#endif //SEEBSTERSQUIZ_QUESTION_H
