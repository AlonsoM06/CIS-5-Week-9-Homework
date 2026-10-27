#include <iostream>
using std::cout;
using std::endl;

// Homework 9 — Alonso Martinez
// CIS 5 Week 09 · Menu on the lab

//double average is my function that has an array which contains values and will find its average as long as n doesn’t equal 0
double average (const int a[], int n) {
if (n==0) {
  return 0;
}
int sum = 0;
for (int i=0; i < n; ++i) {
  sum += a[i];
}
return sum * 1.0/ n ;
}


void printSummary(double avg) {
  cout << "Average: " << avg << endl;
}

void printMenu() {
  std::cout << "1) Average  2) High  3) Quit\n";
}



// int high is a function same as the first one but will find highest array value
int high(const int a[], int n) {
  int max = a[0];
  for (int i = 0; i < n; ++i) {
    if (a[i] > max) {
      max = a[i];
    }
  }
  return max;
}

int main() {
  const int N = 4;
  int scores[N] = {80, 90, 70, 100};
  int choice = 0;

  do {
    printMenu();
    std::cin >> choice;
    if (choice == 1) {
      double avg = average(scores, N);
      printSummary(avg);
    } else if (choice == 2) {
      int top = high(scores, N);
      std::cout << "High: " << top << "\n";
    }
  } while (choice != 3);

  return 0;
}
