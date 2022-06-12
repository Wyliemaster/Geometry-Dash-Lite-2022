// sizeof(cocos2d::CCLayerRGBA) -> 0x1A0
struct cocos2d::CCLayerRGBA : public cocos2d::CCLayer, public cocos2d::CCRGBAProtocol
{
public:
    GLubyte m_uDisplayedOpacity;
    GLubyte m_uOpacity;
    cocos2d::ccColor3B m_cDisplayedColour;
    cocos2d::ccColor3B m_cColour;
    bool m_bCascadeOpacity;
    bool m_bCascadeColour;
};