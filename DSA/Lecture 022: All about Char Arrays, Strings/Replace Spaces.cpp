[https://www.codingninjas.com/codestudio/problems/replace-spaces_1172172?leftPanelTab=0]
 
 /*
 Given a string str then replace all the spaces with "@40" and return the string
 */
 
 //pushing all the characters into the temp string when character is not equal to ' ' and pushing '@','4','0' when character in the given string is ' '.
 
 #include <bits/stdc++.h> 
string replaceSpaces(string &str){
	// Write your code here.
    string temp="";
    int count=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]!=' ')
            temp.push_back(str[i]);
        else{
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
    }
    str= temp;
    
    return str;
}
