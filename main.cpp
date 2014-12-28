#include <iostream>	
#include <string>
#include <cstdlib>
#include "server.h"
 
using namespace std;
 
int main(){
	cout << "Starting server...\n" ;
	bool started = server::server::start();
	if(!started){
		cerr << "server did not start. See logs for details.\n";
	}else{
		cout << "server started successfully\n" ;
	}
	return EXIT_SUCCESS;
}