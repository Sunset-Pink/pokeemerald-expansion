#ifndef GUARD_CUSTOM_ABILITIES_H
#define GUARD_CUSTOM_ABILITIES_H

// Custom Abilities Prefix: CA_

#define CA_ENABLED         TRUE // If FALSE, no custom abilities will be enabled.


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

#endif // GUARD_CUSTOM_ABILITIES_H