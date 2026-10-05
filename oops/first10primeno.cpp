#include<iostream>
using namespace std;
int main(){
    int n=2;
    int count=0;
    while(count<10){
        bool prime=true;
        for(int i=2; i<n; i++){
           if( n%i==0){
            prime=false;
            break;
           }

        }
        if(prime){
            cout<<n<<" ";
            count++;
            
        }
        n++;
    }
    // cout<<endl;
  
    return 0;
}
// #include <iostream>
// using namespace std;

// int main() {
//     int count = 0;       // थैला (Counter) जो गिनेगा कि कितने प्राइम नंबर मिले
//     int number = 2;      // गिनती 2 से शुरू होगी

//     cout << "पहले 10 प्राइम नंबर्स हैं: " << endl;

//     // जब तक थैले में 10 नंबर्स नहीं हो जाते, तब तक लूप चलेगा
//     while (count < 10) {
//         bool isPrime = true; // मान लेते हैं कि नंबर सच्चा (प्राइम) है

//         // नंबर को 2 से लेकर उसके ठीक पिछले नंबर तक डिवाइड करके चेक करना
//         for (int i = 2; i < number; i++) {
//             if (number % i == 0) { // अगर किसी से भी पूरा कट गया
//                 isPrime = false;  // तो वो प्राइम नहीं है
//                 break;            // आगे चेक करने की जरूरत नहीं, लूप से बाहर निकलो
//             }
//         }

//         // अगर पूरा लूप चलने के बाद भी नंबर किसी से नहीं कटा, तो वो प्राइम है
//         if (isPrime) {
//             cout << number << " "; // नंबर को स्क्रीन पर दिखाओ
//             count++;               // थैले में एक नंबर बढ़ गया
//         }

//         number++; // अगले नंबर पर जाओ (जैसे 2 के बाद 3, फिर 4...)
//     }

//     cout << endl;
//     return 0;
// }
