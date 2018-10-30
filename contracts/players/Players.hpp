#include <eosiolib/eosio.hpp>
#include <eosiolib/print.hpp>
#include <string>

namespace Oasis {
    using namespace eosio;
    using std::string;

    class Players : public contract {
        using contract::contract;   //in order to use its constructor 
       
        public:
            Players(account_name self):contract(self) {}

            [[eosio::action]]
            void add(const account_name account, string& username);

            [[eosio::action]]
            void update(account_name account, uint64_t level, int64_t healthPoints, int64_t energyPoints);

            [[eosio::action]]
            void getplayer(const account_name account);

        private:

            //data persistentc : multi_index
            //@abi table player i64
            struct player {
                uint64_t account_name;
                string username;
                uint64_t level;
                uint64_t health_points = 1000;
                uint64_t energy_points = 1000;

                uint64_t primary_key() const { return account_name; }

                EOSLIB_SERIALIZE(player, (account_name)(username)(level)(health_points)(energy_points))
            };

            typedef multi_index<N(player), player> playerIndex;
    };

    EOSIO_ABI(Players, (add)(update)(getplayer))
}
