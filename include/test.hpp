#include <eosio/eosio.hpp>
#include <eosio/system.hpp>

using namespace eosio;


CONTRACT test : public contract {

    public:
        using contract::contract;
        test(name receiver, name code, datastream<const char*> ds)
        :contract(receiver, code, ds)
        {}

        ACTION noop(uint32_t number);
        
        ACTION nop(uint32_t number);

        ACTION np(uint32_t number);

};
