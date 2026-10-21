#ifndef GUARD_CUSTOM_ABILITIES_H
#define GUARD_CUSTOM_ABILITIES_H

// Custom Abilities Prefix: CA_

#define CA_ENABLED         TRUE // If FALSE, no custom abilities will be enabled.

/*
 * Doubles Special Attack
 * 
 * Variant: ABILITY_HUGE_POWER, ABILITY_PURE_POWER
 * Inspiration/Source: Radical Red
 * Suggested Users:
 *  - Persian
 *  - Alolan Persian
 *  - Delcatty
 *  - Meostic
 */
#define CA_FELINE_PROWESS               (CA_ENABLED && TRUE) // Special version of Huge Power.

// Start In a Pinch Abilities
// Variant(s): Blaze, Overgrowth, Torrent, Swarm
#define CA_ADRENALINE                    (CA_ENABLED && TRUE) //Normal Type
#define CA_VOLT                          (CA_ENABLED && TRUE) //Electric Type
#define CA_SUBZERO                       (CA_ENABLED && TRUE) //Ice Type
#define CA_UNDERDOG                      (CA_ENABLED && TRUE) //Fighting Type
#define CA_INFECTION                     (CA_ENABLED && TRUE) //Poison Type
#define CA_FAULT_LINE                    (CA_ENABLED && TRUE) //Ground Type
#define CA_FLOCK                         (CA_ENABLED && TRUE) //Flying Type
#define CA_REVELATION                    (CA_ENABLED && TRUE) //Psychic Type
#define CA_SEDIMENTARY                   (CA_ENABLED && TRUE) //Rock Type
#define CA_HAUNT                         (CA_ENABLED && TRUE) //Ghost Type
#define CA_MYTHOLOGICAL                  (CA_ENABLED && TRUE) //Dragon Type
#define CA_ECLIPSE                       (CA_ENABLED && TRUE) //Dark Type
#define CA_TEMPER                        (CA_ENABLED && TRUE) //Steel Type
#define CA_ENCHANT                       (CA_ENABLED && TRUE) //Fairy Type

// Start ate/ize abilities
// Variant(s): Pixilate, Refridgerate, Galvanize
#define CA_CONFLAGRATE                   (CA_ENABLED && TRUE) //Fire Type
#define CA_MOISTURIZE                    (CA_ENABLED && TRUE) //Water Type
#define CA_POLLINATE                     (CA_ENABLED && TRUE) //Grass Type
#define CA_EXERCIZE                      (CA_ENABLED && TRUE) //Fighting Type
#define CA_CONTAMINATE                   (CA_ENABLED && TRUE) //Poison Type
#define CA_ESCAVATE                      (CA_ENABLED && TRUE) //Ground Type
#define CA_PROPHESIZE                    (CA_ENABLED && TRUE) //Psychic Type
#define CA_PUPATE                        (CA_ENABLED && TRUE) //Bug type
#define CA_MINERALIZE                    (CA_ENABLED && TRUE) //Rock Type
#define CA_ENERVATE                      (CA_ENABLED && TRUE) //Ghost Type
#define CA_TERRORIZE                     (CA_ENABLED && TRUE) //Dark Type
#define CA_METALLICIZE                   (CA_ENABLED && TRUE) //Steel Type

// Start Prioirty type abilities
// Variant(s): Gale Wings

// Fire Type Gale Wings
// Inspiration/Source: Radical Red
// Suggested users: Rapidash, Typhlosion
#define CA_BLAZING_SOUL                  (CA_ENABLED && TRUE)

// Dragon Type Gale Wings
// Note wanted name "Draconic Momentum" but too long for ability name.
#define CA_DRAKE_MOMENTUM             (CA_ENABLED && FALSE)

// Boosts Kicking Moves
// Variant: Iron Fist
// Inspiration/Source: Radical Red
#define CA_STRIKER             (CA_ENABLED && TRUE)
#define CA_STRIKER_BOOST       1.3

// Configure which moves are effected.
#define CA_STRIKER_BLAZE_KICK      (CA_STRIKER && TRUE)
#define CA_STRIKER_JUMP_KICK       (CA_STRIKER && TRUE)
#define CA_STRIKER_HIGH_JUMP_KICK  (CA_STRIKER && TRUE)
#define CA_STRIKER_TRIPLE_AXEL     (CA_STRIKER && TRUE)
#define CA_STRIKER_TRIPLE_KICK     (CA_STRIKER && TRUE)
#define CA_STRIKER_STOMP           (CA_STRIKER && TRUE)
#define CA_STRIKER_MEGA_KICK       (CA_STRIKER && TRUE)
#define CA_STRIKER_LOW_KICK        (CA_STRIKER && TRUE)
#define CA_STRIKER_ROLLING_KICK    (CA_STRIKER && TRUE)
#define CA_STRIKER_TROP_KICK       (CA_STRIKER && TRUE)
#define CA_STRIKER_PYRO_BALL       (CA_STRIKER && TRUE)
#define CA_STRIKER_HIGH_HORSEPOWER (CA_STRIKER && TRUE)
#define CA_STRIKER_DOUBLE_KICK     (CA_STRIKER && TRUE)

// Expanded Terrain Speed Buffs
// Variants: Surge Surfer

// Misty Terrain
#define CA_MIST_WALKER     (CA_ENABLED && TRUE)
// Psychic Terrain
#define CA_SYNAPSE_SURFER  (CA_ENABLED && TRUE)
// Grassy Terrain
// Recommended Users: Deerling, Swasbuck
#define CA_GRASSY_GALLOP   (CA_ENABLED && TRUE)

#endif // GUARD_CUSTOM_ABILITIES_H