#include "UITextTest_Editor.h"
#include "ui/CocosGUI.h"

UITextEditorTests::UITextEditorTests()
{
    ADD_TEST_CASE(UITextTest_Editor);
}
// UITextTest_Editor
using namespace ui;

bool UITextTest_Editor::init()
{
    if (UIScene_Editor::init())
    {
        Node* node = CSLoader::createNode("cocosui/UIEditorTest/UILabel/crossplatform_UILabel_Editor_1.csb");
        Node* child = node->getChildByTag(5);
        child->removeFromParent();
        _layout = static_cast<Layout*>(child);
        _touchGroup->addChild(_layout);
        
        this->configureGUIScene();

        return true;
    }
    
    return false;
}
