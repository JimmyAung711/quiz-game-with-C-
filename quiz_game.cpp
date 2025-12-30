#include <iostream>

int main(){
          std::cout << "\n";
          std::cout << "----------------------------------------\n";
          std::cout << "------------    Quiz game    -----------\n";
          std::string questions[] = {"Who is the most famous soccer player in the world?",
                                     "When is christmas starts?",
                                     "What is the meaning of life?",
                                     "What is the easiest programming language?"};

          std::string options[][4] = {{"A.Ronaldo","B.Messi","C.Mbappe","D.Naymar"},
                                      {"A.Nov-13","B.Sep-9","C.Jan-1","D.Dec-25"},
                                      {"A.Family","B.Happiness","C.Money","D.Reproduction"},
                                      {"A.HTML","B.Java","C.Python","D.C++"}};

          char answers[] = {'A','D','B','C'};

          int size = sizeof(questions)/sizeof(questions[0]);
          char guess;
          int score;

          for(int i =0; i < size;i++){
                    std::cout << "----------------------------------------\n";
                    std::cout << questions[i] << "\n";
                    std::cout << "----------------------------------------\n";

                    for(int j =0;j < sizeof(options[i])/sizeof(options[i][0]);j++){
                              std::cout << options[i][j] << "\n";
                    };
                    std::cout << "Your guess: ";
                    std::cin >> guess;
                    guess = toupper(guess);
                    if(guess == answers[i]){
                              std::cout << "Correct.\n";
                              score++;
                    }else{
                              std::cout << "Incorrect.\n";
                              std::cout << "Answer: " << answers[i] << "\n";
                    };
          }
          std::cout << "# of correct questions: " << score << "\n";
          std::cout << "# of questions: " << size << "\n";
          std::cout << "Score: " << (score/(double)size)*100 << "\n";
          std::cout << "----------------------------------------"; 
          return 0;
}