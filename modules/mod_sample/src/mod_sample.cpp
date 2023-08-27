#include "ScriptDevMgr.h"

class modsample : public PlayerScript
{
public:
    modsample() : PlayerScript("modsample") {}

    void OnLogin(Player* player)
    {
        ChatHandler(player).PSendSysMessage("Hook works fine!");
    }
};

void Addmod_sampleScripts()
{
    new modsample();
}