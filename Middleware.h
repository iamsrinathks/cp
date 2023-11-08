#ifndef MIDDLEWARE_H
#define MIDDLEWARE_H

#include <memory>
#include "Kiruthika.h"
#include "Palanivelu.h"

class MiddlewareProxy : public Kiruthika, public Palanivelu {
public:
    MiddlewareProxy();
    void initialize(const std::shared_ptr<Kiruthika>& above, const std::shared_ptr<Palanivelu>& below);
    void setReady();
    void setSuspended();
    void request() override;
    void process() override;

private:
    MiddlewareState state;
    std::shared_ptr<Kiruthika> aboveLayer;
    std::shared_ptr<Palanivelu> belowLayer;
};

#endif // MIDDLEWARE_H

