// sizeof(cocos2d::CCObject) -> 0x34
struct CCObject : public CCCopying
{
public:
    unsigned int m_uID;
    int m_nLuaID;
    int m_nTag;
    unsigned int m_uReference;
    unsigned int m_uAutoReleaseCount;
    int m_eObjType;
    int m_uObjectIdxInArray;
    int m_nChildIndex;
    int PAD;
    int m_nZOrder;
    unsigned int m_uOrderOfArrival;
};
