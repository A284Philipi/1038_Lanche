#include <iostream>

using namespace std;

int main()
{
    int a, b;
    double resposta;
    cin >> a;
    cin >> b;
    if (a == 1){
        resposta = b * 4;
    }else{
        if (a == 2){
            resposta = b * 4.5;
        }else{
            if (a == 3){
                resposta = b * 5;
            }else{
                if (a == 4){
                    resposta = b * 2;
                }else{
                    resposta = b * 1.5;
                }
            }
        }
    }
    cout.precision(2);
    cout << fixed << "Total: R$ " << resposta <<endl;
    return 0;
}
