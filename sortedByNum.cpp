#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>


/*
Write a function, named sort_by_course_number, that takes a reference to a vector of string 
(like {"CSE 232", "ECE 100", "CSE 450", "CSE 232"}) and returns nothing. The function should reorder 
the vector so that the courses are sorted by number in ascending order. You can assume that the department 
code is separated from the number by a space and that all course numbers are 3 characters long.

You should be using the STL algorithms to achieve this, full credit is only possible if your solution 
doesn't have any looping constructs (no "while" or "for" keywords anywhere in the solution). If a URL 
you are citing has such a word, add an interupting space like: https://www.programiz.com/cpp-programming/fo r-loop
*/
bool myFunction (std::string first, std::string second){
	int firstNum = stoi(first.substr(first.length()-3));
	int secondNum = stoi(second.substr(second.length()-3));
	if (firstNum < secondNum){
		return true;
	}
	return false;
}

void sort_by_course_number(std::vector<std::string> &vec){
	std::sort (vec.begin(), vec.end(), myFunction);

}

int main(){
	std::vector<std::string> course_names = {"CSE 232", "ECE 100", "ECE 850", "CSE 231", "CSE 450", "IBIO 331", "CSE 335"};
	sort_by_course_number(course_names);
	for(auto ordered : course_names){
		std::cout<<ordered;
	}

}


	// std::vector<std::string> course_names = {"CSE 232", "ECE 100", "ECE 850", "CSE 231", "CSE 450", "IBIO 331", "CSE 335"};
	// std::vector<std::string> course_names_expected = { "ECE 100", "CSE 231", "CSE 232", "IBIO 331", "CSE 335", "CSE 450", "ECE 850" };
	
	// sort_by_course_number(course_names);
	// ASSERT_EQ(course_names, course_names_expected)