#ifndef SEEBSTERSQUIZ_BONUSQUESTION_H
#define SEEBSTERSQUIZ_BONUSQUESTION_H


#include "Question.h"
//L02,
//L02 a, question is public because we want its methods public
class BonusQuestion : public Question {
private:

public:
    /** @brief Constructor for the class
    *
    * @param questionText
    * @param possibilities
    * @param indexOfCorrectAnswer
    */
    BonusQuestion(const string &questionText, const vector<string> &possibilities, int indexOfCorrectAnswer);
    /** @brief returns number of points scored for answering correctly
     *  In this case returns 5
     * @return number of points
     */
    int getPoints();
    /** @brief makes Bonus Question with the given params
     *
     * Makes a vector of questions, and makes a new Question object
     * @param prompt prompt of the question
     * @param q1 answer 1
     * @param q2 answer 2
     * @param q3 answer 3
     * @param q4 answer 4
     * @param correct index of the correct answer
     * @return BonusQuestion made with the passed params
     */
    static BonusQuestion makeQuestion(string prompt, string q1, string q2, string q3, string q4, int correct);
};


#endif //SEEBSTERSQUIZ_BONUSQUESTION_H

