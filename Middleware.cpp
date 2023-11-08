#include "Middleware.h"
#include <iostream>

MiddlewareProxy::MiddlewareProxy() : state(MiddlewareState::NotReady) {}

void MiddlewareProxy::initialize(const std::shared_ptr<Kiruthika>& above, const std::shared_ptr<Palanivelu>& below) {
    aboveLayer = above;
    belowLayer = below;
}

void MiddlewareProxy::setReady() {
    state = MiddlewareState::Ready;
}

void MiddlewareProxy::setSuspended() {
    state = MiddlewareState::Suspended;
}

void MiddlewareProxy::request() {
    if (state == MiddlewareState::Ready) {
        aboveLayer->request();
    } else {
        std::cout << "Middleware not ready to process Kiruthika's request" << std::endl;
    }
}

void MiddlewareProxy::process() {
    if (state == MiddlewareState::Ready) {
        belowLayer->process();
    } else {
        std::cout << "Middleware not ready to process Palanivelu's request" << std::endl;
    }
}

