#include <iostream>

using namespace std;
void print_table_header(){
    cout << "\n\n\t\t\t Multiplication Table From 1 to 10\n\n";
    cout << "\t";
    for (int i = 1; i <= 10; i++){
        cout << i << "\t";
    }
    cout << "\n--------------------------------------------------------------------------------------\n";
}
string column_seprator(int i){
    if(i < 10){
        return "   |";
    }
    else return "  |";
}
void print_multiplication_table(){
    print_table_header();
    for (int i = 1; i <= 10; i++){
        cout << " " << i << column_seprator(i) << "\t";
        for(int j = 1; j <= 10; j++){
            cout << i*j << "\t";
        }
        cout << endl;
    }
}
int main(){
    print_multiplication_table();
    return 0;
}