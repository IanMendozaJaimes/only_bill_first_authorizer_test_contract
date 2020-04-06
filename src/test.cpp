#include <test.hpp>
#include <eosio/eosio.hpp>
#include <string>


ACTION test::noop(uint32_t number){
    require_auth(permission_level(get_self(), name("cosign")));
    //require_auth(get_self());
    print("noop executed successfully");
    return;
}


ACTION test::nop(uint32_t number){
    require_auth(get_self());
    print("nop executed successfully");
    return;
}


ACTION test::np(uint32_t number){
    //require_auth(_self);
    print("np executed successfully");
    return;
}



EOSIO_DISPATCH(test,(np)(nop)(noop));

