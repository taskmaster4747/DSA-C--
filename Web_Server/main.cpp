#include<iostream>
#include "crow_all.h"

int main( int argc, const char * argv[]){

crow::SimpleApp app;

      CROW_ROUTE(app, "/")([](){
       return "Hello from crow!";
});

    app.port(18080).run();
return 0;
}
