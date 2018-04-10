const char CRYPTONOTE_NAME[] = "Bihcoin";
const uint64_t MONEY_SUPPLY = (uint64_t)(-1);
const unsigned EMISSION_SPEED_FACTOR = 18;
const uint64_t DIFFICULTY_TARGET = 120;
const std::initializer_list<const char*> SEED_NODES = {
  "111.11.11.11:17236",
  "222.22.22.22:17236",
};
const uint64_t MINIMUM_FEE = 100000;
const size_t CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE = 20000;
const uint64_t CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX = 0xe9; // addresses start with "0x494f"
const char GENESIS_COINBASE_TX_HEX[] = "";
Bihcoind --print-genesis-tx
const char GENESIS_COINBASE_TX_HEX[] = "013c01ff0001ffff...785a33d9ebdba68b0";
