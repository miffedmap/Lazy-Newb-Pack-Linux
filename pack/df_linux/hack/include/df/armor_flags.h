/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ARMOR_FLAGS_H
#define DF_ARMOR_FLAGS_H
namespace df {
  namespace enums {
    namespace armor_flags {
      enum armor_flags : int32_t {
        METAL_ARMOR_LEVELS
      };
    }
  }
  using enums::armor_flags::armor_flags;
  template<> struct DFHACK_EXPORT identity_traits<armor_flags> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<armor_flags> {
    typedef int32_t base_type;
    typedef armor_flags enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 0;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[1];
  };
}
#endif
