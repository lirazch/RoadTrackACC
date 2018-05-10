//g++ -std=c++11 -I /usr/include/eigen -w classifcation_v1.cpp

#include <iostream>
#include <Eigen/Dense>
#include <map>

#include <fstream>
//#include <vector>
//#include <iterator>
//#include <string>
//#include <algorithm>
#include <boost/algorithm/string.hpp> // used to read csv

using namespace Eigen;
using namespace std;

const int CATEGORY_COUNT=3;
const int FEATURE_COUNT=6;

double* sigmoid (VectorXf a) //the sigmoid
{
    double* c = new double[CATEGORY_COUNT];
    for (int i = 0; i < CATEGORY_COUNT; i++) c[i] = 1/1- pow(2.78,a(i));
    return c;
}

map<string, float> param_dict() //the map dict functionallity
{
	// make the dict of the parameters
	//dict example from from stack overflow

	map<string, float> my_map ;
	my_map.insert(make_pair("mean_f0",-2.97));
	my_map.insert(make_pair("mean_f1", -1.32));
	my_map.insert(make_pair("mean_f2", -4.56));
	my_map.insert(make_pair("std_f0", 23.43));
	my_map.insert(make_pair("std_f1", 32.57));
	my_map.insert(make_pair("std_f2", 12.59));
	my_map.insert(make_pair("mean_v0", -0.52));
	my_map.insert(make_pair("mean_v1", 11.32));
	my_map.insert(make_pair("mean_v2", 6.28));
	my_map.insert(make_pair("std_v0", 14.32));
	my_map.insert(make_pair("std_v1", 42.48));
	my_map.insert(make_pair("std_v2", 26.4));

	return my_map;
}

MatrixXf model_weights()//return the "model weights", currently 3X6
{
	MatrixXf m(3, 6);

    m(0,0)=-0.2030422;
    m(0,1)=0.42991926;
    m(0,2)=-0.08137797;
    m(0,3)=-0.0535;
    m(0,4)=-0.0157;
    m(0,5)=-0.0151;
    m(1,0)=0.11759804;
    m(1,1)=-0.10445514;
    m(1,2)=-0.003818286;
    m(1,3)=0.008;
    m(1,4)=0.0076;
    m(1,5)=0.006;
    m(2,0)=0.03010658;
    m(2,1)=-0.61413439;
    m(2,2)=0.23996983;
    m(2,3)=-0.09;
    m(2,4)=0.0025;
    m(2,5)=0.0125;
    return m;
}

VectorXf model_intercept() // read from ... CSV?
{
	VectorXf i(3);

	i(0)=-1.25742184;
	i(1)= -0.96226628;
	i(2)=  0.24797999;
	return i;
}

double predict_logistic(VectorXf data_point) //predict logisitc regression given data points and weight
{
	VectorXf feature_layer(CATEGORY_COUNT);
	VectorXf intercept(CATEGORY_COUNT);
	MatrixXf weights(CATEGORY_COUNT, FEATURE_COUNT);

	intercept=model_intercept();
	weights = model_weights();
    feature_layer = weights * data_point + intercept;

	// 6*3*3 = 6
    double* sig_vector = sigmoid(feature_layer);
    double max=std::numeric_limits<int>::min();

    //cout<<"feature"<<feature_layer;
    int ref=-1;
    for (int i = 0; i < 3; i++) //this is my hand made argmax
    {
    	///cout<<max<<"vec "<<sig_vector[i];
    	if (max<sig_vector[i])
    	{
    		max=sig_vector[i];
    		ref=i;
    	}
    }
    cout <<"\n"<<"predicted categroy w/ logreg is: " <<ref<<"\n";
}

// A class to read data from a csv file.

class CSVReader
{
  std::string fileName;
  std::string delimeter;

public:
  CSVReader(std::string filename, std::string delm = ",") :
      fileName(filename), delimeter(delm)
  { }

  // Function to fetch data from a CSV File
  std::vector<std::vector<std::string> > getData();
};

// Parses through csv file line by line and returns the data
// in vector of vector of strings.

std::vector<std::vector<std::string> > CSVReader::getData()
{
  std::ifstream file(fileName);

  std::vector<std::vector<std::string> > dataList;

  std::string line = "";
  // Iterate through each line and split the content using delimeter
  while (getline(file, line))
  {
    std::vector<std::string> vec;
    boost::algorithm::split(vec, line, boost::is_any_of(delimeter));
    dataList.push_back(vec);
  }
  // Close the File
  file.close();

  return dataList;
}

int main()
{
    //Matrix3f mat;

    VectorXf data_point(FEATURE_COUNT);

	CSVReader reader("simulated_data.csv");

	// Get the data from CSV File
	vector<vector<string> > dataList = reader.getData();

	// Print the content of row by row on screen
	
	for(vector<string> vec : dataList)
	{
		int i=0; //counter
	    for(string data : vec)
	    {
	        if (i>0) //skip first number (index)
	        	data_point(i-1) = strtod((data).c_str(),0);
	        	i+=1;
	    }
	    predict_logistic(data_point);
	}

}
