#include "KiruthikaImplementation.h"
#include "PalaniveluImplementation.h"
#include "Middleware.h"

int main() {
    // Create instances of Kiruthika and Palanivelu implementations
    std::shared_ptr<Kiruthika> kiruthikaClient = std::make_shared<KiruthikaImplementation>();
    std::shared_ptr<Palanivelu> palaniveluLayer = std::make_shared<PalaniveluImplementation>();

    // Create an instance of the middleware
    MiddlewareProxy middleware;

    // Initialize the middleware with above and below layers
    middleware.initialize(kiruthikaClient, palaniveluLayer);

    // Set the middleware to the "Ready" state
    middleware.setReady();

    // Perform actions through the middleware
    middleware.request();
    middleware.process();

    // Set the middleware to the "Suspended" state
    middleware.setSuspended();

    middleware.request();
    middleware.process();

    return 0;
}

