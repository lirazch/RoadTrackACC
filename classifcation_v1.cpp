#include <iostream>
#include <Eigen/Dense>
#include <map>
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
	// prints: Found! Foo is bar

	map<string, float> my_map ;
	my_map.insert(make_pair("f_mean_0",-2.97));
	my_map.insert(make_pair("f_mean_5", -1.32));
	my_map.insert(make_pair("f_mean_6", -4.56));
	my_map.insert(make_pair("f_std_0", 23.43));
	my_map.insert(make_pair("f_std_5", 32.57));
	my_map.insert(make_pair("f_std_6", 12.59));
	my_map.insert(make_pair("r_mean_0", -0.52));
	my_map.insert(make_pair("r_mean_5", 11.32));
	my_map.insert(make_pair("r_mean_6", 6.28));
	my_map.insert(make_pair("r_std_0", 14.32));
	my_map.insert(make_pair("r_std_5", 42.48));
	my_map.insert(make_pair("r_std_6", 26.4));

	//std::cout<<my_map.find("r_std_6");
	//std::cout << "a => " << my_map.find('r_std_6')->second << '\n';
		// searching
	map<string, float>::iterator it;
	it = my_map.find("r_std_6");
	if (it != my_map.end())
		cout << "Found! " << it->first << " is " << it->second << "\n";

	/// there is more but later...

	return my_map;
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

MatrixXf model_weights()//return the "model weights", currently 3X6
{
	MatrixXf m(3, 6);
    VectorXf data_point(3);
    m(0,0)=0.2030422;
    m(0,1)=0.42991926;
    m(0,2)=-0.08137797;
    m(0,3)=1;
    m(0,4)=1;
    m(0,5)=1;
    m(1,0)=0.11759804;
    m(1,1)=-0.10445514;
    m(1,2)=-0.003818286;
    m(1,3)=1;
    m(1,4)=1;
    m(1,5)=1;
    m(2,0)=0.03010658;
    m(2,1)=-0.61413439;
    m(2,2)=0.23996983;
    m(2,3)=1;
    m(2,4)=1;
    m(2,5)=1;
    return m;
}

int generator(MatrixXf m)
{
	//random numbers
	int v1 ;
	int cat;
	//MatrixXf m(3, 6);
	VectorXf data_point(6);
	VectorXf feature_layer(3);

    for( int a = 0; a < 10; a = a + 1 ) 
    	// this will be the generator of the phases
    {
    	v1 = rand() % 400 +100;
    	cat = rand() % 3;

    }

    // no generate stream
    map<string, float> stream_parms=param_dict();

    std::normal_distribution<double> distribution(5.0,2.0);
    std::default_random_engine generator;
    std::cout << "normal_distribution (5.0,2.0):" << std::endl;

    int p[10]={};

    for (int i=0; i<1000; ++i) 
    {
    	double forward_m = distribution(generator);
    	double vertical_m = distribution(generator);
    	double radial_m = distribution(generator);

    	double forward_s = distribution(generator);
    	double vertical_s = distribution(generator);
    	double radial_s = distribution(generator);
    	//if ((number>=0.0)&&(number<10.0)) ++p[int(number)];
    	//cout<<number<<'\n'; // print these numbers rand
	    data_point(0)=forward_m;
	    data_point(1)=vertical_m;
	    data_point(2)=radial_m;
	    data_point(3)=forward_s;
	    data_point(4)=vertical_s;
	    data_point(5)=radial_s;

	    //cout<<data_point<<"vector\n";
	    

	    // now do sigmoid
	    feature_layer=m * data_point;
	    cout << (feature_layer) << "fig\n";

	    //cout<<m*data_point<<"preds"; // 6*3*3 = 6
	    double* sig_vector = sigmoid(feature_layer);
	    double max=std::numeric_limits<int>::min();
	    int ref=-1;
	    for (int i = 0; i < 3; i++) //this is my hand made argmax
	    {
	    	//cout<<i<<" xx "<<m3[i]<<endl;
	    	//cout<<"true"<<m3[i];
	    	if (max<sig_vector[i])
	    	{
	    		max=sig_vector[i];
	    		ref=i;
	    	}
	    }

	    cout <<"categroy is: " <<ref<<"\n";
	    //distance(feature_layer, max_element(feature_layer, feature_layer + N))
		//cout << "Index of max element: " << distance(feature_layer, max_element(feature_layer, feature_layer + N)) << endl;
  	}
}

int main()
{
    //Matrix3f mat;

    MatrixXf weights(CATEGORY_COUNT, FEATURE_COUNT);


  //mat = m.transpose()*m;
    //std::cout << "Now mat is mat:\n" << m.transpose()*data_point << std::endl; example for matrix multiplication
    weights = model_weights();
    generator(weights);

}

//fucntion that returns a weight matrix
// function that returns a stream