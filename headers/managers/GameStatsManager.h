#ifndef __GAMESTATSMANAGER_H__
#define __GAMESTATSMANAGER_H__

// Sizeof(GameStatsManager) -> 0x2D0 
struct GameStatsManager : public cocos2d::CCNode
{
public:
  cocos2d::CCString *m_pUnkCCString; // 0x138
  cocos2d::CCDictionary *m_pStoreItems1;
  cocos2d::CCDictionary *m_pStoreItems;
  cocos2d::CCDictionary *m_pSecretChestRewards;
  cocos2d::CCDictionary *m_pSecretChests;
  cocos2d::CCDictionary *m_pSpecialChestRewards;
  cocos2d::CCDictionary *m_pSpecialChestKeys;
  cocos2d::CCDictionary *m_pLiteChests;
  cocos2d::CCArray *m_pStoreItems2;
  cocos2d::CCDictionary *m_pRewardItems;
  cocos2d::CCDictionary *m_pDailyChests;
  cocos2d::CCDictionary *m_pAdChests;
  cocos2d::CCDictionary *m_pActiveQuests;
  cocos2d::CCDictionary *m_pUpcomingQuests;
  double m_dChallengeTime;
  cocos2d::CCDictionary *m_pStats;
  std::map<int const, int> m_nMap1;
  int m_nSomeMap1Idx;
  std::map<int const, int> m_nMap2;
  int m_nSomeMap2Idx;
  cocos2d::CCDictionary *m_pCompletedLevels;
  cocos2d::CCDictionary *m_pPendingCoins;
  cocos2d::CCDictionary *m_pVerifiedCoins;
  cocos2d::CCDictionary *m_pPurchasedIcons;
  cocos2d::CCDictionary *m_pOnlineLevelsCurrencyHighscore;
  cocos2d::CCDictionary *m_pMainLevelsCurrencyHighscore;
  cocos2d::CCDictionary *m_pGauntletLevelsCurrencyHighscore;
  cocos2d::CCDictionary *m_pTimelyLevelCurrencyHighscore;
  cocos2d::CCDictionary *m_pRewardedStars;
  cocos2d::CCDictionary *m_pRewardedTimelyStars;
  cocos2d::CCDictionary *m_pGauntletDiamondHighscore;
  cocos2d::CCDictionary *m_pTimelyDiamondHighscore;
  cocos2d::CCDictionary *m_pCurrencyAwardDict;
  cocos2d::CCDictionary *m_pBonusDiamonds;
  cocos2d::CCDictionary *m_pMappacks;
  cocos2d::CCDictionary *m_pWeeklyChest;
  cocos2d::CCDictionary *m_pTreasureRoomChests;
  int m_nDemonKeySeed;
  int m_nDemonKeyRand;
  int m_nDemonKeys;
  cocos2d::CCDictionary *m_pSpecialChests;
  bool m_bUnk1;
  cocos2d::CCDictionary *m_pUnk2;
  cocos2d::CCDictionary *m_pItemUnlockStates;
};


#endif