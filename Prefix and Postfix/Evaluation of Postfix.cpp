#include<iostream>
#include<stack>
#include<string>
using namespace std;

int EvaluatePostfix(string expression);
int operation(int num1,int num2, char op);

int main(){
    string expression;
    cout << "Enter Postfix Expression : ";
    cin >> expression;
    int result = EvaluatePostfix(expression);
    cout <<"Result : " << result;
}

int EvaluatePostfix(string expression){

    stack <int> s;

    for(int i= 0;i<expression.length();i++){
        if(expression[i] == ' ' || expression[i] == ','){
            continue;
        }
        else if(expression[i] >= '0' && expression[i] <='9' ){
            int opearnd = expression[i] - 48;
            s.push(opearnd);
        }
        else if(expression[i] =='+' || expression[i] =='-' || expression[i] =='*' || expression[i] =='/'){
            int num_2=s.top();
            s.pop();
            int num_1=s.top();
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

