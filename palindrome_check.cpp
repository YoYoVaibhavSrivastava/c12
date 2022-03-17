https://www.codingninjas.com/codestudio/problems/check-if-the-string-is-a-palindrome_1062633?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5&leftPanelTab=1

char tolowercase(char ch){

       if(ch >= 'a' && ch <= 'z' || (ch>=0 && ch<=9 )){

           return ch;

       }

       else{

           return ch - 'A' + 'a';    

       }

}

bool checkPalindrome(string s)
{
  

       int len=s.size(), start=0, end = len-1;

       int count=0;

       while(start<end){

           

    if(s[start] >= 33 && s[start]<=47){

               start++;

               continue;

           }else if(s[start]>=58 && s[start]<=64){

               start++;

               continue;

           }else if(isspace(s[start])){

               start++;

               continue;

           }

           

           if(s[end] >= 33 && s[end]<=47){

               end--;

               continue;

           }else if(s[end]>=58 && s[end]<=64){

               end--;

               continue;

           }if(isspace(s[end])){

               end--;

               continue;

           }

           

           

           

           if(tolowercase(s[start]) != tolowercase(s[end])){

               return false;

           }

           else{

//                

               start++;

               end--;

           }

       }

       return true;



}
