#include "discodottledata.hpp"

#include "create.hpp"

int main()
{
    DD::map2<DD::Species, DD::Item>    spec_item    = DD::init(DD::species, DD::item);
    DD::map2<DD::Species, DD::Move>    spec_move    = DD::init(DD::species, DD::move);
    DD::map2<DD::Move, DD::Species>    move_spec    = DD::init(DD::move, DD::species);
    DD::map2<DD::Species, DD::Nature>  spec_nat     = DD::init(DD::species, DD::nature);
    DD::map2<DD::Species, DD::Species> spec_spec    = DD::init(DD::species, DD::species);

    return 0;
}