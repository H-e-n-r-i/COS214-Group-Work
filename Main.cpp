#include "User.h"
#include "OrbitController.h"

int main(){
    User* user = new User();
    user->loadSatitiles(60);
    user->connect();
    user->sendMessage("S23", "Run Diagnostics");
    user->disconnect();
    return 0;
}