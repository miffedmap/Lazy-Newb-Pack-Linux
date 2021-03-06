/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SPHERE_TYPE_H
#define DF_SPHERE_TYPE_H
namespace df {
  namespace enums {
    namespace sphere_type {
      enum sphere_type : int32_t {
        AGRICULTURE,
        ANIMALS,
        ART,
        BALANCE,
        BEAUTY,
        BIRTH,
        BLIGHT,
        BOUNDARIES,
        CAVERNS,
        CHAOS,
        CHARITY,
        CHILDREN,
        COASTS,
        CONSOLATION,
        COURAGE,
        CRAFTS,
        CREATION,
        DANCE,
        DARKNESS,
        DAWN,
        DAY,
        DEATH,
        DEFORMITY,
        DEPRAVITY,
        DISCIPLINE,
        DISEASE,
        DREAMS,
        DUSK,
        DUTY,
        EARTH,
        FAMILY,
        FAME,
        FATE,
        FERTILITY,
        FESTIVALS,
        FIRE,
        FISH,
        FISHING,
        FOOD,
        FORGIVENESS,
        FORTRESSES,
        FREEDOM,
        GAMBLING,
        GAMES,
        GENEROSITY,
        HAPPINESS,
        HEALING,
        HOSPITALITY,
        HUNTING,
        INSPIRATION,
        JEALOUSY,
        JEWELS,
        JUSTICE,
        LABOR,
        LAKES,
        LAWS,
        LIES,
        LIGHT,
        LIGHTNING,
        LONGEVITY,
        LOVE,
        LOYALTY,
        LUCK,
        LUST,
        MARRIAGE,
        MERCY,
        METALS,
        MINERALS,
        MISERY,
        MIST,
        MOON,
        MOUNTAINS,
        MUCK,
        MURDER,
        MUSIC,
        NATURE,
        NIGHT,
        NIGHTMARES,
        OATHS,
        OCEANS,
        ORDER,
        PAINTING,
        PEACE,
        PERSUASION,
        PLANTS,
        POETRY,
        PREGNANCY,
        RAIN,
        RAINBOWS,
        REBIRTH,
        REVELRY,
        REVENGE,
        RIVERS,
        RULERSHIP,
        RUMORS,
        SACRIFICE,
        SALT,
        SCHOLARSHIP,
        SEASONS,
        SILENCE,
        SKY,
        SONG,
        SPEECH,
        STARS,
        STORMS,
        STRENGTH,
        SUICIDE,
        SUN,
        THEFT,
        THRALLDOM,
        THUNDER,
        TORTURE,
        TRADE,
        TRAVELERS,
        TREACHERY,
        TREES,
        TRICKERY,
        TRUTH,
        TWILIGHT,
        VALOR,
        VICTORY,
        VOLCANOS,
        WAR,
        WATER,
        WEALTH,
        WEATHER,
        WIND,
        WISDOM,
        WRITING,
        YOUTH
      };
    }
  }
  using enums::sphere_type::sphere_type;
  template<> struct DFHACK_EXPORT identity_traits<sphere_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<sphere_type> {
    typedef int32_t base_type;
    typedef sphere_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 129;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[130];
  };
}
#endif
