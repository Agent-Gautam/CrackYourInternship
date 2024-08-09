#include <bits/stdc++.h>
using namespace std;

string numberToWords(int num) {
        string ans = "";
        vector<int> digits;
        while(num) {
            digits.push_back(num%10);
            num /= 10;
        }
        int n = digits.size();
        vector<string> ones = {"zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        vector<string> eleven = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        vector<string> tens = {"", "Ten", "Twenty", "Thirty", "Fourty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninty"};
        vector<string> periods = {"Hundred", "Thousand", "Million", "Trillion"};
        int place = n%3;
        int period = (n-1)/3;
        for(int i = n-1; i >= 0; i--) {
            if(i != n) ans += " ";
            if(place == 3 || place == 0){
                if(digits[i] != 0) ans += ones[digits[i]] + " Hundred";
            }
            else if(place == 2 || place == -1) {
                if(digits[i+1] == 0) {
                    ans += tens[digits[i]];
                }
                else if(digits[i] == 1) {
                    ans += digits[i+1];
                }
                else {
                    ans += tens[digits[i]];
                }
            }
            else if(place == 1 || place == -2) {
                if(digits[i] != 0) ans += ones[digits[i]];
                if(period) {
                    ans += " ";
                    ans += periods[period]; 
                }
                period--;
                place = 3;
                continue;
            }
            place--;
        }
        return ans;
    }
    int main(){
    int num = 1234567;
    cout << numberToWords(num);
}