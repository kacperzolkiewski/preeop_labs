#include "lab01.h"
using namespace std;

int * initFibonacci(int n){
  int * sequence = new int[n+1];
  for(int i =0; i <= n; i++){
    if(i == 0){
      sequence[i] = 0;
    }else if(i == 1){
      sequence[i] = 1;
    }else {
      sequence[i] = sequence[i-2] + sequence[i-1];
    }
  }
  return sequence;
}

void print(const int* sequence, int n){
  cout << "("; 
  for(int i = 0; i < n; i++){
    cout << sequence[i] << ", ";
  }
  cout << sequence[n] << ")" << endl;
}

void deleteSequence(const int *sequence){
  delete [] sequence;
}

void addSequence(int *numberOfSequences, int ***sequencesList, int **sequencesLength, int n){
  int **seqList = *sequencesList;
  *sequencesList = new int*[(*numberOfSequences) + 1];
  int *seqLength = *sequencesLength;
  *sequencesLength = new int[(*numberOfSequences) + 1];

  for(int i =0; i < (*numberOfSequences); i++){
    *(*sequencesList + i) = *(seqList + i);
    *(*sequencesLength + i) = *(seqLength + i);
  }

  delete [] seqList;
  delete [] seqLength;

  (*sequencesList)[*numberOfSequences] = initFibonacci(abs(n));
  (*sequencesLength)[*numberOfSequences] = abs(n);
  (*numberOfSequences)++;
}

void printAllSequences(int **sequencesList, int *sequencesLength, int numberOfSequences){
  for(int i =0; i < numberOfSequences; i++){
    cout << "Ciąg nr " << i << ": ";
    print(*(sequencesList + i), *(sequencesLength + i));
  }
}

void removeSequence(int* numberOfSequences, int *** sequencesList, int ** sequencesLength, int n){
  int **seqList = *sequencesList;
  *sequencesList = new int*[(*numberOfSequences) - 1];
  int *seqLength = *sequencesLength;
  *sequencesLength = new int[(*numberOfSequences) - 1];
  int j =0;

  for(int i =0; i < (*numberOfSequences); i++){
    if(i != n){
      *(*sequencesList + j) = *(seqList + i);
      *(*sequencesLength + j) = *(seqLength + i);
      j++;
    }
  }

  delete [] seqList;
  delete [] seqLength;

  (*numberOfSequences) --;
}

void deleteSequences(int *numberOfSequences, int ***sequencesList, int **sequencesLength){

  for(int i =0; i < (*numberOfSequences); i++){
    delete [] *(*sequencesList + i);
    delete [] *(sequencesLength + i);
  }

  (*numberOfSequences) = 0;
}