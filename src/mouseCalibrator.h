#ifndef MOUSE_CALIBRATOR_H
#define MOUSE_CALIBRATOR_H

#include "gui/gui2.h"
/*!
 * \brief Calibrator used for touch screens.
 * It's possible to use empty epsilon with touch screens, which may or may not be correclty calibrated.
 * This simply sits in between the mouse events and translates them according to its calibration.
 */
class MouseCalibrator : public GuiCanvas, public Updatable
{
private:
    string filename;
    int state;
    GuiPanel* screen_box[3];
    GuiPanel* test_box;
    GuiButton* ready_button;
    sf::Vector2f mouse_point[3];
public:
    MouseCalibrator(string filename);

    virtual void update(float delta);

    /*!
     * \brief Calculate the transformation matrix
     */
    void calculateMatrix();
};

#endif//MOUSE_CALIBRATOR_H
