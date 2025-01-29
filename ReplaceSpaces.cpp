#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	string s = ""; 
	for(int i = 0; i < str.length(); i++ ){
		if(str[i]==' '){
			s+="@40";
		}
		else{
			s.push_back(str[i]);
		}
		
	}
	return s; 
}
