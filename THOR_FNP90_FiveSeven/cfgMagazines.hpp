class CA_Magazine;
class THOR_FNP90_Mag: CA_Magazine
	{
		scope=2;
		displayName=$STR_THOR_FNP90_Mag;
		picture="\A3\weapons_f\data\ui\M_30Rnd_9x21_CA.paa";
        model="\THOR_FNP90_FiveSeven\data\THOR_FNP90_Mag.p3d";
		ammo="THOR_57x28_Ball";
		count=50;
		mass=14;
		initSpeed=370;
		tracersEvery=0;
		descriptionShort=$STR_THOR_FNP90_Mag_Desc;
	};
  
class THOR_FNP90_Mag_Tracer : THOR_FNP90_Mag
	{
		displayName=$STR_THOR_FNP90_Mag_Tracer;
		picture="\A3\weapons_f\data\ui\M_30Rnd_9x21_CA.paa";
        model="\THOR_FNP90_FiveSeven\data\THOR_FNP90_Mag.p3d";
		ammo="THOR_57x28_Tracer_Red";
		count=50;
		mass=14;
		initSpeed=370;
		tracersEvery=1;
		descriptionShort=$STR_THOR_FNP90_Mag_Tracer_Desc; 
	};