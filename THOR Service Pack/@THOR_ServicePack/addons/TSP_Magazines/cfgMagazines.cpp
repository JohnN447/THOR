class CA_Magazine;

class ThorSP_BaseMag: CA_Magazine{
    ammo ="B_556x45_Ball";
    author = "SaintBlood";
    count = 30;
    displayName = "BaseMag";
    displayNameShort = "";
    descriptionShort = "Not intended to be used - not even to appear ingame, what have you done? :p";
    initSpeed = 920;
    mass = 8;
    maxLeadSpeed = 23;
    maxThrowHoldTime = 2;
    maxThrowIntensityCoef = 1.4;
    minThrowIntensityCoef = 0.3;
    model = "\A3\weapons_f\ammo\mag_univ.p3d";
    modelSpecial = "";
    nameSound = "magazine";
    picture = "";
    quickReload = 0;
    reloadAction = "";
    scope = 1;
    selectionFireAnim = "zasleh";
    simulation = "ProxyMagazines";
    type = 256;
    useAction = 0;
    useActionTitle = "";
    value = 1;
    weaponpoolavailable = 1;
    weight = 0;
    lastRoundsTracer = 0;
    tracersEvery = 0;
    magazineGroup[] = {};
};

#include "556x45\cfgNormal.cpp"
#include "556x45\cfgTracer.cpp"
