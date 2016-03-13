# Civilization IV Diplomatic Features - Standalone
<strong>Current version:</strong> 11.0.0003

<strong>Current stability:</strong> Stable

<h1>Summary</h1>
<p>Civilization IV Diplomatic Features is a modification for Civilization V. The goal is to provide as its title suggests: integrate Civilization IV's diplomacy into Civilization V. Upon the release of Civilization V, many felt it's diplomacy was lacking in several areas, making it feel more "gamey" and less "immersive" as Civilization IV. To help remedy that, my mod adds the following features:</p>

<ul>
<li>Sharing Opinions: Players can request for other leaders to disclose their opinions of other civilizations. If agreed, leaders will share their opinions of other leaders, helping players make informed decisions about how to proceed.</li>
<li>Map Trading: Explored territory can be shared with other players upon the discovery of Military Science.</li>
<li>Technology Trading: Technology can be traded freely amongst civilizations upon the discovery of Scientific Theory. This is an optional feature and can be set to replace Research Agreements, or operate alongside them.</li>
<li>Request Help: Players that have Declarations of Friendship with other leaders may ask them for a generous donation (replacing the usual demand). This opens up functionality for players that only existed for CPUs prior to this mod.</li>
<li>Generous Offers: Leaders will occasionally gift items to human players if they have a Declaration of Friendship with them.</li>
<li>Vassalage: The largest feature of the mod, Vassalage returns from Civilization IV: Warlords. The Vassal System is overhauled from the ground up, and includes a new Vassalage Overview. Vassals are like major puppets for players; a vassal must declare war on his master's opponents, and are subjected to taxes, in exchange for protection from your master. Vassals offer a more unique way to play the game.</li>
<li>All of the above features are fully understood by the AI.</li>
</ul>

<strong>This mod hosted here is the standalone, Brave New World version. Gods and Kings is no longer supported.</strong>

<h1>Install Instructions:</h1>
Subscribe from the Steam Workshop OR

<ol>
<li>Download mod from <a href="https://mega.nz/#fm/fAtwnaBZ">here</a></li>
<li>Extract to My Games/Civilization V/MODS/ folder</li>
<li>Delete existing Civilization IV Diplomatic Features install</li>
<li>Open Civilization V</li>
<li>Subscribe to the mod on the Steam Workshop</li>
<li>Click MODS, wait for the .civ5mod file to extract</li>
</ol>

<h1>Compatibility</h1>
<ol>
<li>Not compatible with mods that modify the DLL</li>
<li>Not compatible with mods that modify the following Lua files:</li>
<ol>
<li></li>
</ol>
</ol>

<h1>Lua API</h1>
<b>Deal</b>
<ul>
<li>AddTechTrade( int playerID, int techID );</li>
<li>AddVassalageTrade( int playerID );</li>
<li>AddMapTrade( int playerID );</li>
<li>AddRevokeVassalageTrade( int playerID );</li>
</ul>

<h2>Game</h2>
<ul>
<li>int GetMinimumVoluntaryVassalTurns(); // Returns minimum number of turns before a voluntary vassal can request independence</li>
<li>int GetMinimumVassalTurns(); // Returns minimum number of turns before a capitulated vassal can request independence</li>
<li>int GetNumTurnsBetweenVassals(); // Returns minimum number of turns before a player can re-vassalize a civilization that he ended vassalage with (in any means)</li>
<li>int GetMinimumVassalTax(); // Returns the smallest amount that taxes can possibly go</li>
<li>int GetMaximumVassalTax(); // Returns the highest amount that taxes can possibly go</li>
<li>int GetMinimumVassalLiberateTurns(); // Returns the minimum number of turns a player must be a vassal before his master can liberate him</li>
<li>int GetMinimumVassalTaxTurns(); // Returns the minimum number of turns before a player can set taxes (after they've been already set)</li>
<li>eraID GetVassalageEnabledEra(); // Returns the era where Vassalage is enabled (-1 if none)</li>
</ul>

<h2>Player</h2>
<ul>
<li>int GetVassalGoldMaintenance(); // Returns the amount of gold this player is paying in maintenance.</li>
<li>bool IsVassalageAcceptable(playerID eOtherPlayer); // Returns true if the player's diplomacy AI will accept vassalage from player (NOTE: this function should accept a second parameter bool bWar, not yet implemented!)</li>
<li>int GetYieldPerTurnFromVassals(yieldID eYield); // Returns the yield per turn increase from player's vassals</li>
<li>int GetHappinessFromVassals(); // Returns happiness increase from vassals.</li>
<li>int GetScoreFromVassals(); // Returns score increase from vassals.</li>
<li>MilitaryAggressivePostureTypes GetMilitaryAggressivePosture(playerID eOtherPlayer); // Returns how aggressive this player feels eOtherPlayer is being. (AGGRESSIVE_POSTURE_NONE, AGGRESSIVE_POSTURE_LOW, AGGRESSIVE_POSTURE_MEDIUM, AGGRESSIVE_POSTURE_HIGH)</li>
<li>bool MoveRequestTooSoon(playerID eOtherPlayer); // Returns if it is too soon to ask for a move troops request</li>
<li>int GetPlayerMoveTroopsRequestCounter(playerID eOtherPlayer); // Returns the number of turns in the move troops request counter (starts at 0 when request is made)</li>
<li>int GetExpensePerTurnFromVassalTaxes(); // Get the number of GPT player is paying because of vassal taxes</li>
<li>int GetMyShareOfVassalTaxes(); // Get the amount of GPT player is receiving from vassal taxes.</li>
<li>int GetVassalTaxContribution(playerID eOtherPlayer); // Get the amount of GPT eOtherPlayer is contributing to us due to vassal taxes.<li>
<li>int GetVassalScore(playerID eOtherPlayer); // Opinion weight change due to being a vassal.</li>
<li>int GetVassalTreatedScore(playerID eOtherPlayer); // Score of how well our vassal eOtherPlayer thinks we've treated him during vassalage.<li>
<li>int GetVassalDemandScore(playerID eOtherPlayer); // Opinion weight change due to our demands of our vassal.</li>
<li>int GetVassalProtectScore(playerID eOtherPlayer); // Opinion weight change due to our protection of vassal eOtherPlayer.</li>
<li>int GetVassalFailedProtectScore(playerID eOtherPlayer); // Opinion weight change due to our failed protection of vassal eOtherPlayer.</li>
<li>int GetVassalTradeRouteScore(playerID eOtherPlayer); // Opinion weight change due to a trade route between us and vassal eOtherPlayer.</li>
<li>int GetVassalReligionScore(playerID eOtherPlayer); // Opinion weight change due to shared (or unshared!) religion between us and vassal eOtherPlayer.</li>
<li>int GetVassalTreatmentLevel(playerID eOtherPlayer); // Vassal opinion level of how our vassal eOtherPlayer sees us. (NO_VASSAL_TREATMENT, VASSAL_TREATMENT_CONTENT, VASSAL_TREATMENT_DISAGREE, VASSAL_TREATMENT_MISTREATED, VASSAL_TREATMENT_UNHAPPY, VASSAL_TREATMENT_ENSLAVED)</li>
<li>string GetVassalTreatmentToolTip(playerID eOtherPlayer); // Get the tooltip for Vassal Treatment.</li>
<li>string GetVassalIndependenceTooltipAsMaster(playerID ePlayer); // Get request independence when we are a master of ePlayer</li>
<li>string GetVassalIndependenceTooltipAsVassal(playerID ePlayer); // Get request independence when we are a vassal of ePlayer</li>
<li>int GetMajorityReligion(); // <b>From Community Patch: </b> Get our majority religion.</li>
</ul>

<h2>Team</h2>
<ul>
<li>Coming soon!</li>
</ul>
