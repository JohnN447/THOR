class BulletBase;
class THOR_57x28_Ball: BulletBase
{
    hit=14;
    indirectHit=0;
    indirectHitRange=0;
    cost=1;
    typicalSpeed=920;
    airFriction=-0.0012000001;
    waterFriction=-0.30000001;
    caliber=0.69999999;
    deflecting=20;
    model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    tracerScale=1;
    tracerStartTime=0.050000001;
    tracerEndTime=1;
    visibleFire=4;
    audibleFire=6;
    class CamShakeExplode
    {
        power="(5^0.5)";
        duration="((round (5^0.5))*0.2 max 0.2)";
        frequency=20;
        distance="((5^0.5)*3)";
    };
    class CamShakeHit
    {
        power=5;
        duration="((round (5^0.25))*0.2 max 0.2)";
        frequency=20;
        distance=1;
    };
};
class THOR_57x28_Tracer_Red: THOR_57x28_Ball
{
    model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    nvgOnly=0;
};