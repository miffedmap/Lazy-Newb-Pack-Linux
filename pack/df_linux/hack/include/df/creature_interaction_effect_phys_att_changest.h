/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CREATURE_INTERACTION_EFFECT_PHYS_ATT_CHANGEST_H
#define DF_CREATURE_INTERACTION_EFFECT_PHYS_ATT_CHANGEST_H
#ifndef DF_CREATURE_INTERACTION_EFFECT_H
#include "creature_interaction_effect.h"
#endif
namespace df {
  struct DFHACK_EXPORT creature_interaction_effect_phys_att_changest : creature_interaction_effect {
    int32_t phys_att_perc[6];
    int32_t phys_att_add[6];
    static virtual_identity _identity;
  protected:
    creature_interaction_effect_phys_att_changest(virtual_identity *_id = &creature_interaction_effect_phys_att_changest::_identity);
    friend void *df::allocator_fn<creature_interaction_effect_phys_att_changest>(void*,const void*);
  };
}
#endif
