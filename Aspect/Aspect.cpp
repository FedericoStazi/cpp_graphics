//
// Created by federico on 11/04/2020.
//

#include "Aspect.h"

Aspect::Aspect() = default;

Aspect::Aspect(const Color &color) : k_diffuse(color) {}

const Color &Aspect::get_k_diffuse() const {
    return k_diffuse;
}

const Color &Aspect::get_k_specular() const {
    return k_specular;
}

const Color &Aspect::get_k_mirror() const {
    return k_mirror;
}

double Aspect::get_roughness() const {
    return roughness;
}
