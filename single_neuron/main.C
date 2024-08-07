#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct neuron{
	double x ;
	double w;
	double b;
};

struct neuron neuron_init(){
	//initializing the neuron structure
	struct neuron nn;

	//setting a number 'N' as upper limit of random number generation
	int N = 10;
	//setting random values to the parameters
	nn.w = rand() % (N+1);
	nn.b = rand() % (N+1);
	nn.x = 0;
	return nn;
}


int main(){
	//setting seed for random number generator 
	srand(time(NULL));
	struct neuron neuron;

	neuron = neuron_init();
	printf("%f",neuron.b);
}



