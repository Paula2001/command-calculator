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

        switch_function(double y,char c,double p){
            switch(c){
                case '+':
                    sum(y);
                    break ;
                case '-':
                    minus(y);
                    break;
                case '/':
                    divided(y);
                    break;
                case '*':
                    times(y);
                    break;
                case 'p':
                    power(p);
                    break;
                default:
                    cout << "Enter rec. sign" ;
            }
        }
    private:
        double result;
        void recursion(){
            double y ;
            char c ;
            double p;
        cout << " = " << result << " " ;
        cin >> c ;
        if(c != 'p'){
            cin >>y;
        }else{
            cin >> p ;
        }
            this->switch_function(y,c,p);
        }

        void sum(double y){
            result +=  y;
            recursion();
        }
        void minus(double y){
            result-= y;
            recursion();
        }
        void divided(double y){
            result /=  y;
            recursion();
        }
        void times(double y){
            result*= y;
            recursion();
        }
        void power(double p){
                int cons = result;
            for(int i = 1;i < p;i++){
                result*=cons;
            }
            recursion();
        }
};
int main()
{
    double x , y  ;
    char z ;
    double p ;
    cin >> x >> z ;
    if (z != 'p'){
        cin >>y;
    }else{
        cin >>p ;
    }
    calculator cal(x);
    cal.switch_function(y,z,p);
    return 0;
}
