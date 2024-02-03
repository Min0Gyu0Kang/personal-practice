#include <string>
#include <vector>
#include <numeric> // for std::gcd

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    int numerator = numer1 * denom2 + numer2 * denom1;
    int denominator = denom1 * denom2;
    
    int gcd_value = gcd(numerator, denominator);
    
    numerator /= gcd_value;
    denominator /= gcd_value;
    vector<int> answer={numerator,denominator};
    return answer;
}