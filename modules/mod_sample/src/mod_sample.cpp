#include "ScriptDevMgr.h"

class modsample : public PlayerScript
{
public:
    modsample() : PlayerScript("modsample") {}

    void OnLogin(Player* player)
    {
        ChatHandler(player).PSendSysMessage("Hook works fine!");
    }
    
    void OnGiveXP(Player* player, uint32& xp, Unit* victim)
    {
        ChatHandler(player).PSendSysMessage("You just recieved %u xp", xp);
    }
};

void Addmod_sampleScripts()
{
    new modsample();
}