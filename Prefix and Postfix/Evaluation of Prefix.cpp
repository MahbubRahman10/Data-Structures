#include<iostream>
#include<stack>
#include<string>
using namespace std;

int EvaluatePrefix(string expression);
int operation(int num1,int num2, char op);

int main(){
    string expression;
    cout << "Enter Postfix Expression : ";
    cin >> expression;
    int result = EvaluatePrefix(expression);
    cout <<"Result : " << result;
}

int EvaluatePrefix(string expression){

    stack <int> s;
    int j = expression.length()-1;
    for(int i= j;i>=0;i--){
        if(expression[i] == ' ' || expression[i] == ','){
            continue;
        }
        else if(expression[i] >= '0' && expression[i] <='9' ){
            int opearnd = expression[i] - 48;
            s.push(opearnd);
        }
        else if(expression[i] =='+' || expression[i] =='-' || expression[i] =='*' || expression[i] =='/'){
            int num_1=s.top();
            s.pop();
            int num_2=s.top();
            s.pop();

            int res = operation(num_1,num_2,expression[i]);
            s.push(res);
        }
        else{
            cout<<"Unexpected Error \n";
            return 0;
        }
    }
    return s.top();
}


int operation(int num1,int num2, char op){
    if(op == '+'){
        return num1 + num2;
    }
    else if(op == '-'){
        return num1 - num2;
    }
    else if(op == '*'){
        return num1 * num2;
    }
    else if(op == '/'){
        return num1 / num2;
    }
}
