#pragma once

class IRateLimiter{

    public:
    virtual bool rateLimit(int customerId) = 0;
};
