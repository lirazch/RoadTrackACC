#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <boost/algorithm/string.hpp>

/*
 * A class to read data from a csv file.
 */
char get_sequence_length() //returns random length of currnet category from 100 to 500
{
  int v1 ;
  char cat;
    //for( int a = 0; a < 10; a = a + 1 ) 
      // this will be the generator of the phases

  v1 = rand() % 400 +100;
  //cat = rand() % 3;
  
    cat = (rand() % 3) + '0';

    return cat;
}

int generator(MatrixXf m)
{
  //random numbers
  char cat_id; // later use get_sequence_length

  //MatrixXf m(3, 6);
  VectorXf data_point(FEATURE_COUNT);
  VectorXf feature_layer(CATEGORY_COUNT);

    // no generate stream
    map<string, float> stream_parms=param_dict();

    map<string, float>::iterator it;
    
    std::default_random_engine generator;

    int p[10]={};

    for (int i=0; i<20; ++i) 
    {
      cat_id = get_sequence_length();
      //cout<<"cat is"<<cat_id<<"\n";

      // get the paramter form the dict.

    string str = "rfv";
    for(char& c : str) {
        string y("std_");
        y.append(1,c);

        it = stream_parms.find(y+=cat_id);
      if (it != stream_parms.end())
        cout << "Found! " << it->first << " is " << it->second << "\n";
    }
    std::normal_distribution<double> distribution(5.0,it->second);
    double f = distribution(generator);
    double v = distribution(generator);
    double r = distribution(generator);

      double forward_m = distribution(generator);
      double vertical_m = distribution(generator);
      double radial_m = distribution(generator);

      double forward_s = distribution(generator);
      double vertical_s = distribution(generator);
      double radial_s = distribution(generator);

      data_point(0)=forward_m;
      data_point(1)=vertical_m;
      data_point(2)=radial_m;
      data_point(3)=forward_s;
      data_point(4)=vertical_s;
      data_point(5)=radial_s;

      // now do sigmoid
      feature_layer=m * data_point;
      //cout << (feature_layer) << "fig\n";

      //cout<<m*data_point<<"preds"; // 6*3*3 = 6
      double* sig_vector = sigmoid(feature_layer);
      double max=std::numeric_limits<int>::min();
      int ref=-1;
      for (int i = 0; i < 3; i++) //this is my hand made argmax
      {

        if (max<sig_vector[i])
        {
          max=sig_vector[i];
          ref=i;
        }
      }

      cout <<"\n"<<"predicted categroy is: " <<ref<<"\n";
      //distance(feature_layer, max_element(feature_layer, feature_layer + N))
    //cout << "Index of max element: " << distance(feature_layer, max_element(feature_layer, feature_layer + N)) << endl;
    }
}
int ex () //another example for map/dict
{
  std::map<char,int> mymap;
  std::map<char,int>::iterator it;

  mymap['a']=50;
  mymap['b']=100;
  mymap['c']=150;
  mymap['d']=200;

  it = mymap.find('b');
  if (it != mymap.end())
    mymap.erase (it);

  // print content:
  std::cout << "elements in mymap:" << '\n';
  std::cout << "a => " << mymap.find('a')->second << '\n';
  std::cout << "c => " << mymap.find('c')->second << '\n';
  std::cout << "d => " << mymap.find('d')->second << '\n';

  return 0;
}

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

/*
* Parses through csv file line by line and returns the data
* in vector of vector of strings.
*/
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
  // Creating an object of CSVWriter
  CSVReader reader("simulated_data.csv");

  // Get the data from CSV File
  std::vector<std::vector<std::string> > dataList = reader.getData();

  // Print the content of row by row on screen
  for(std::vector<std::string> vec : dataList)
  {
    for(std::string data : vec)
    {
      std::cout<<data << " , ";
    }
    std::cout<<std::endl;
  }
  return 0;

}