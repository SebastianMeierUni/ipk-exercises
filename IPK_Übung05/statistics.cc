#include "statistics.hh"

double mean(const std::vector<double>& v){
	double mean;
	for (double entry : v){
		mean = mean + entry;
	}
	return mean/v.size();
}

double median(const std::vector<double>& v){
	std::vector<double> vout;
	vout = v;
	
	std::sort(vout.begin(), vout.end());

	double median;
	if(vout.size()%2==0){
		 median = ( vout[vout.size()/2] + vout[(vout.size()/2) + 1] ) / 2;
	}else{
		 median = vout[(vout.size() + 1 )/2];
	}
	return median;
}

double moment(const std::vector<double>& v,int k){
	double mk;
	for (double entry : v){
		mk = mk + std::pow(entry,k);
	}
	return (mk/( (double) v.size()));	
}

double standard_deviation(const std::vector<double>& v){
	double standardabweichung;
	double means;
	std::vector<double> dummy={0};

	means = mean(v); //Mü
	for (double entry : v){
		dummy[0]=entry - means;
		standardabweichung = standardabweichung + moment(dummy,2);
	}
	return sqrt(standardabweichung);
	
}
//HIIII