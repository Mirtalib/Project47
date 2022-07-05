#include<iostream>
#include<vector>
#include<fstream>
#include<string>


using namespace std;

#include"Appiler.h"
#include"Company.h"
using namespace HearderFiles;


int main() {

	Applier* cv1 = new Applier("Ceyhun", 18, "IT", "Empty1");
	Applier* cv2 = new Applier("Sebine", 17, "Designer", "Empty2");


	Company company;
	company.hireUp(cv1);
	company.hireUp(cv2);
	// 
	company.writeToFile("company.txt");


	company.readToFile("Eompany.txt");
	company.showAllCV();
}