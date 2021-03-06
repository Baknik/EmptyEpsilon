#ifndef ENGINEERING_SCREEN_H
#define ENGINEERING_SCREEN_H

#include "gui/gui2_overlay.h"
#include "shipTemplate.h"

class GuiKeyValueDisplay;
class GuiLabel;
class GuiSlider;
class GuiAutoLayout;
class GuiArrow;
class GuiToggleButton;
class GuiProgressbar;

class EngineeringScreen : public GuiOverlay
{
private:
    GuiKeyValueDisplay* energy_display;
    GuiKeyValueDisplay* hull_display;
    GuiKeyValueDisplay* front_shield_display;
    GuiKeyValueDisplay* rear_shield_display;
    GuiLabel* power_label;
    GuiSlider* power_slider;
    GuiLabel* coolant_label;
    GuiSlider* coolant_slider;
    
    class SystemRow
    {
    public:
        GuiAutoLayout* layout;
        GuiToggleButton* button;
        GuiProgressbar* damage_bar;
        GuiLabel* damage_label;
        GuiProgressbar* heat_bar;
        GuiArrow* heat_arrow;
        GuiProgressbar* power_bar;
        GuiProgressbar* coolant_bar;
    };
    std::vector<SystemRow> system_rows;
    ESystem selected_system;
public:
    EngineeringScreen(GuiContainer* owner);
    
    virtual void onDraw(sf::RenderTarget& window);
};

#endif//ENGINEERING_SCREEN_H
