#include "cpp-httplib/httplib.h"

int main() {

    httplib::Server svr;

    svr.Get("/", [](const httplib::Request& req, httplib::Response& res){
        res.set_content("Hello", "text/html");
    });

    svr.listen("localhost", 3000);
}