#include <iostream>

using namespace std;
class calculator{
    public:
        calculator(){
            result = 0;
        }
        calculator(int x){
            result = x;
        }

        switch_function(double y,char c){
            switch(c){
                case '+':
                    sum(y ,c);
                    break ;
                case '-':
                    minus(y,c);
                    break;
                default:
                    cout << "Enter reco. sign" ;
            }
        }
    private:
        double result;
        void recursion(){
            double y ;
            char c ;
        cout << result << " " ;
            cin >> c >>y;
            this->switch_function(y,c);
        }
        void sum(double y,char c){
            result +=  y;
            recursion();
        }
        void minus(double y,char c){
            result-= y;
            recursion();
        }
};
int main()
{
    double x , y  ;
    char z ;
    cin >> x >> z >>y;
    calculator cal(x);
    cal.switch_function(y,z);
    return 0;
}
