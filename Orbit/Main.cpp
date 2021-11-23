#include "User.h"
#include "OrbitController.h"

int main(){
    User* user = new User();
    user->loadSatitiles(10);
    user->connect();
    user->sendMessage("S3", "Run Diagnostics");
    user->disconnect();
    return 0;
}