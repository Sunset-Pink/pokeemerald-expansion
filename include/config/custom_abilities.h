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

#endif // GUARD_CUSTOM_ABILITIES_H