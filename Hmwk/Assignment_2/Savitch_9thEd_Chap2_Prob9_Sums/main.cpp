#include <iostream> 
#include <iomanip>

using namespace std;

int main(int argc, char** argv) 
{
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, PosNum = 0, NegNum = 0, sum;
    cout << "Input 10 numbers, any order, positive or negative\n";
   cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8 >> num9 >> num10;
   
   if (num1 > 0) {
   PosNum = PosNum + num1;}
   else {
    NegNum = NegNum + num1;}
    
    if (num2 > 0) {
   PosNum = PosNum + num2;}
   else {
    NegNum = NegNum + num2;}
   
    if (num3 > 0) {
   PosNum = PosNum + num3;}
   else {
    NegNum = NegNum + num3;}
   
    if (num4 > 0) {
   PosNum = PosNum + num4;}
   else {
    NegNum = NegNum + num4;}
   
    if (num5 > 0) {
   PosNum = PosNum + num5;}
   else {
    NegNum = NegNum + num5;}
   
    if (num6 > 0) {
   PosNum = PosNum + num6;}
   else {
    NegNum = NegNum + num6;}
   
    if (num7 > 0) {
   PosNum = PosNum + num7;}
   else {
    NegNum = NegNum + num7;}
   
    if (num8 > 0) {
   PosNum = PosNum + num8;}
   else {
    NegNum = NegNum + num8;}
    
     if (num9 > 0) {
   PosNum = PosNum + num9;}
   else {
    NegNum = NegNum + num9;}
   
    if (num10 > 0) {
   PosNum = PosNum + num10;}
   else {
    NegNum = NegNum + num10;}
   
   cout << "Negative sum = " << setw(3) << NegNum << endl;
   cout << "Positive sum = " << setw(3) << PosNum << endl;
   sum = NegNum + PosNum;
   cout << "Total sum    = " << setw(3) << sum;
    return 0;
}