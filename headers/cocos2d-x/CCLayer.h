
// sizeof(cocos2d::CCLayer) -> 0x188
struct cocos2d::CCLayer : public cocos2d::CCNode, public cocos2d::CCTouchDelegate, public cocos2d::CCAccelerometerDelegate, public cocos2d::CCKeypadDelegate, public cocos2d::CCKeyboardDelegate, public cocos2d::CCMouseDelegate
{
public:
    bool m_bTouchEnabled;
    bool m_bAccelerometerEnabled;
    bool m_bKeypadEnabled;
    bool m_bKeyboardEnabled;
    bool m_bMouseEnabled;
    cocos2d::CCScriptHandlerEntry *m_pTouchHandler;
    cocos2d::CCScriptHandlerEntry *m_pKeypadHandler;
    cocos2d::CCScriptHandlerEntry *m_pAccelerateHandler;
    int m_nTouchPriority;
    int m_nTouchMode;
};


