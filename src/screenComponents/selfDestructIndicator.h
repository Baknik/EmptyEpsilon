#ifndef GUI_SELF_DESTRUCT_INDICATOR_H
#define GUI_SELF_DESTRUCT_INDICATOR_H

#include "gui/gui2.h"

class GuiSelfDestructIndicator : public GuiElement
{
private:
    GuiPanel* box;
    GuiLabel* label;
public:
    GuiSelfDestructIndicator(GuiContainer* owner);

    virtual void onDraw(sf::RenderTarget& window);
};

#endif//GUI_SELF_DESTRUCT_INDICATOR_H
