#pragma once


namespace HearderFiles {

	class Company {
		vector<Applier*> appliers;

	public:
		Company() = default;


		void hireUp(Applier* cv) {
			appliers.push_back(cv);
		}

		void showAllCV() {
			for (size_t i = 0; i < appliers.size(); i++)
				cout << appliers[i] << endl;
		}


		void writeToFile(string filename) {

			ofstream file(filename, ios::app);
			
			if (!file)
			{
				throw new exception("File can not find");
			}

			if (!file.is_open())
				throw new exception("File can not opened");
			

			for (size_t i = 0; i < appliers.size(); i++)
			{
				if (i == appliers.size() - 1)
				{
					file << appliers[i]->_name << ' '
						<< appliers[i]->_age << ' '
						<< appliers[i]->_speciality << ' '
						<< appliers[i]->_text;
				}
				else
				{
					file << appliers[i]->_name <<' '
						<<appliers[i]->_age << ' '
						<< appliers[i]->_speciality <<' '
						<<appliers[i]->_text << endl;
				}
			}
		}


		void readToFile(string filename) {


			ifstream file(filename);

			file.seekg(0);

			if (!file)
			{
				throw new exception("File can not find");
			}

			if (!file.is_open())
				throw new exception("File can not opened");

			string data;

			while (!file.eof())
			{
				getline(file, data);

				cout << data << endl;
			}
		}
	};


}