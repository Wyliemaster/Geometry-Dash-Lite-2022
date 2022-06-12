
// sizeof(FLAlertLayer) -> 0x268
struct FLAlertLayer : public cocos2d::CCLayerColor
{
public:
    cocos2d::CCMenu *m_pButtonMenu;
    int m_nControllerConnected;
    cocos2d::CCObject *m_pTarget;
    bool m_bBackButtonTriggersBtn2;
    cocos2d::CCLayer *m_pLayer;
    int m_nZOrder;
    bool m_bNoElasticity;
    ButtonSprite *m_pBtn1;
    ButtonSprite *m_pBtn2;
    ScrollingLayer *m_pScrollingLayer;
    int m_nJoystickConnected;
    bool m_bScrollable;
    bool m_bNoAction;
    int m_nTouchID;
    bool m_bForcePrio;
};
