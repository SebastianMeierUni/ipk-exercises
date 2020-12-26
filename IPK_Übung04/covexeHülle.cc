#include <iostream>
#include <vector>
#include <algorithm>
#include <array>
#include <fstream>
#include <stack>
//#include <ofstream>

int wieGroIstDieDatei (std::string filename){
	std::ifstream f;
	f.open(filename);

	int zaehler =-1;
	std::string s; 

	while (!f.eof())         {
		getline(f, s);           
		zaehler++;	
    	}
	f.close();
	return zaehler;
}

std::vector<std::array<double, 2>> read_points_from_file(std::string filename) {
	std::vector<std::array<double, 2>> v1 (wieGroIstDieDatei(filename));	

    	std::ifstream f;
	f.open(filename);

	std::string s; 
	int v_idx=-1;
	int a_idx = 0;
	std::string c="";
	std::array<double, 2> speicher;
	
    	while (!f.eof())     {
        	v_idx = v_idx+1;
		a_idx=0;
		getline(f, s);           
		c="";
		for(long unsigned int i=0 ; i < s.length() ; i++){
			if(s.at(i) == ' '){
				speicher[a_idx] = atof(c.c_str());
				a_idx=1;
				c="";
			}else{
				c = c + s.at(i);
			}
			if(i+1 == s.length()){
				speicher[a_idx] = atof(c.c_str());
				v1[v_idx]=speicher;
			}		
		}
	
    	}
    	f.close();
	return v1;
}

bool sort_by_y(std::array<double, 2> a , std::array<double, 2> b){
	if(a[1] < b[1]){
		return true;
	}else if(a[1] == b[1] and a[0] < b[0]){
		return true;
	}else{
		return false;
	}
}
bool sort_by_angle(std::array<double, 2> a , std::array<double, 2> b){
	if(a[0] * b[1] - a[1] * b[0] > 0){
		return true;
	}else if(a[0] * b[1] - a[1] * b[0] == 0 and std::abs(a[0]) > std::abs(b[0])){
		return true;
	}else{
		return false;
	}
}

std::array<double, 2> points_subtrahieren(std::vector<std::array<double, 2>>& points){
	std::array<double, 2> Einsspeicher = points[0];

	std::array<double, 2> rechnerspeicher;
	
	for(long unsigned int j=0 ; j < points.size() ; j++){
		rechnerspeicher = points[j]; 
		rechnerspeicher [0] = rechnerspeicher [0]- Einsspeicher[0];	
		rechnerspeicher	[1] = rechnerspeicher [1]- Einsspeicher[1];
		points[j]= rechnerspeicher;
	}
	return Einsspeicher;
}

void points_addieren(std::vector<std::array<double, 2>>& points , std::array<double, 2> zahl){

	std::array<double, 2> rechnerspeicher;
	
	for(long unsigned int j=0 ; j < points.size() ; j++){
		rechnerspeicher = points[j]; 
		rechnerspeicher [0] = rechnerspeicher [0] + zahl[0];	
		rechnerspeicher	[1] = rechnerspeicher [1] + zahl[1];
		points[j]= rechnerspeicher;
	}
}



std::stack <std::array<double, 2>> grahamScan(std::vector<std::array<double, 2>>& points){
	std::array<double, 2> pt1;
	std::array<double, 2> pt2;
	
	std::stack <std::array<double, 2>> hullenskelet;
	hullenskelet.push(points[0]);
	hullenskelet.push(points[1]);

	std::array<double, 2> i_pointsarray;
	double berechnung;

	long unsigned int j=2 ;

	while(j < points.size() ){
		pt1 = hullenskelet.top();	//B
		hullenskelet.pop();
		pt2 = hullenskelet.top();	//A
		hullenskelet.pop();

		hullenskelet.push(pt2);
		hullenskelet.push(pt1);

		i_pointsarray=points[j]; 	//C	

		berechnung = ( (((pt1[0])-(pt2[0]))*((i_pointsarray[1])-(pt2[1]))) - (((i_pointsarray[0])-(pt2[0]))*((pt1[1])-(pt2[1])) ));
		if(berechnung>0 || hullenskelet.size()==2){
			hullenskelet.push(points[j]);
			j++;
		}else {
			hullenskelet.pop();
		}
	}
	return	hullenskelet;
}

void read_points_from_file(std::string filename, std::vector<std::array<double, 2>>& points){
	std::array<double, 2> point;
	std::ofstream ofs (filename, std::ofstream::out);

	for(long unsigned int i=0 ; i < points.size() ; i++){
		point = points[i];
		ofs << point[0] <<" "<< point[1] <<std::endl;	
		if(i == points.size()){
			ofs << point[0] <<" "<< point[1];
		}
	}

	ofs.close();
}

void convex_hull(std::vector<std::array<double, 2>>& points){
	std::sort(points.begin() , points.end(), sort_by_y); 
	std::array<double, 2>ersterPoint = points_subtrahieren( points );
	std::sort(points.begin()+1, points.end(), sort_by_angle);
	points_addieren(points,ersterPoint);
	
	//Berechnung der Hülle
	std::stack <std::array<double, 2>> array;
	array = grahamScan(points);

	std::array<double, 2> ablage;
	points.resize(array.size());
	long unsigned int zaehler=-1;

	while(array.size()!= 0){
		zaehler++;
		ablage = array.top();
		array.pop();
		points[zaehler] = ablage;
	}
	read_points_from_file("hull.txt" , points);
} 	

int main(){
	std::string filename = "convex-hull-points.txt";
	std::vector<std::array<double, 2>> vectorarray = read_points_from_file(filename);
	
	convex_hull(vectorarray);	
}
