#include<iostream>
using namespace std;



void DisplayStr(char arr[]){
    // for(int i=0;i<n;i++){
    //     cout << 
    // }
    cout << arr << endl;
}

void findLength(char arr[]){

    int length;
    for(int i=0;arr[i] != '\0';i++){
        length = i;
    }

    cout << "length of the string is: " << length << endl;
}

void changeToLowerCase(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        if(arr[i] <= 90 && arr[i] >= 65){
            arr[i] = arr[i] + 32;
        }
    }
}

void changeToUpperCase(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        if(arr[i] <= 122 && arr[i] >= 97){
            arr[i] = arr[i] - 32;
        }
    }
}

void toggleCase(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        if(arr[i] <= 90 && arr[i] >= 65){
            arr[i] = arr[i] + 32;
        }else if(arr[i] <= 122 && arr[i] >= 97){
            arr[i] = arr[i] - 32;
        }
        
    }
}

void countVowel(char arr[]){
    int vCount = 0, cCount = 0;
    for(int i=0; arr[i] != '\0'; i++){
        if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U'){
            vCount++;
        }

        if((arr[i] <= 90 && arr[i] >= 65) ||( arr[i] <= 122 && arr[i] >= 97)){
            cCount++;
        }

        cCount = cCount - vCount;

    }

    cout << "no. of vowels: " << vCount << endl;
    cout << "no. of consonants: " << cCount << endl;
}

void countWords(char arr[]){
    int wCount = 0;
    for(int i=0; arr[i] != '\0'; i++){
        if(arr[i] == ' '  && arr[i-1] != ' '){
            wCount++;
        }
    }

    cout << "no. of words: " << wCount + 1 << endl;
}

bool checkValid(char *arr){
    for(int i =0; arr[i] != '\0'; i++){
        if(!((arr[i] <= 90 && arr[i] >= 65) || (arr[i] <= 122 && arr[i] >= 97) || (arr[i] >= 48 && arr[i] <= 57))){
            return false;
        }
    }

    return true;
}

void reversestring(char arr[], char arr2[]){
    int i,j;
    for(i=0; arr[i] != '\0'; i++){}

    i = i-1;
    for(j=0; i>=0; i--, j++){
        arr2[j] = arr[i];
    }

    arr2[j] = '\0';

    cout << arr2 << endl;
}

void reverseString2(char arr[]){
    int i,j;
    
    for(j=0; arr[j] != '\0'; j++){

    }

    j = j-1;

    for(int i=0; i<j; i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    cout << "Reversed array is: " << arr << endl;
}

void comparestrings(char arr[], char arr2[]){
    int i,j;

    for(int i=0,j=0; arr[i] != '\0' && arr2[j] != '\0'; i++, j++){
        if(arr[i] != arr2[j]){
            break;
        }
    }

    if(arr[i] == arr2[j]){
        cout << "Equal" << endl;
    }else if(arr[i] < arr2[j]){
        cout << "Smaller" << endl;
    }else{
        cout << "Greater" << endl;
    }

}

void duplicatesInStrings(char arr[], int H[]){
    for(int i=0; arr[i] != '\0'; i++){
        H[arr[i] - 97] += 1;
    }

    for(int i=0; i<26; i++){
        if(H[i] > 1){
            cout <<" Alphabet " << char(i+97) << " is appearing " << H[i] << " times." << endl;
        }
    }
}

void duplicateUsingBits(){}

void checkAnagram(char arr[], char arr2[], char H[]){
    for(int i=0; arr[i] != '\0'; i++){
        H[arr[i] - 97] += 1;
    }
    
    int i;
    for(i=0; arr2[i] != '\0'; i++){
        H[arr2[i] - 97] -= 1;
        if(H[arr2[i] - 97] < 0){
            cout << " Not Anagram " << endl;
            break;
        }
    }

    if(arr2[i] == '\0'){
        cout << " Its Anagram" << endl;
    }
}

int main(){
    char name[] = "spartsh";
    DisplayStr(name);

    char name2[] = "this is char array";
    findLength(name2);

    char name3[] = "SPAr345";

    toggleCase(name3);
    DisplayStr(name3);

    // changeToUpperCase(name3);
    // DisplayStr(name3);
    // changeToLowerCase(name3);
    // DisplayStr(name3) ;

    

    return 0;
}

// watch file ---> testStringImmutable.cpp
