
// sizeof(cocos2d::CCLayerColor) -> 0x210
struct cocos2d::CCLayerColor : public cocos2d::CCLayerRGBA, public cocos2d::CCBlendProtocol
{
public:
    cocos2d::ccVertex2F m_pSquareVertices[4];
    cocos2d::ccColor4F m_pSquareColors[4];
    cocos2d::ccBlendFunc m_tBlendFunc;
};
