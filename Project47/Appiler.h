#pragma once


namespace HearderFiles {

	class Applier {
	private:
	public:
		string _name = "";
		int _age = 0;
		string _speciality = "";
		string _text = "";
		
		Applier() = default;
		Applier(string name, int age, string speciality, string text) {
			_name = name;
			_age = age;
			_speciality = speciality;
			_text = text;
		}


		friend ostream& operator<< (ostream& output, Applier s);
	};


	ostream& operator<< (ostream& output, Applier* s) {

		output << "Name=>" << s->_name << endl
			<< "Age=>" << s->_age << endl
			<< "Speciality=>" << endl 
			<<"Text=>" << s->_text << endl;

		return output;
	}
}