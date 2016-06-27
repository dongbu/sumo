/****************************************************************************/
/// @file    GNECalibratorDialog.h
/// @author  Pablo Alvarez Lopez
/// @date    Jun 2016
/// @version $Id$
///
/// Dialog for edit rerouters
/****************************************************************************/
// SUMO, Simulation of Urban MObility; see http://sumo-sim.org/
// Copyright (C) 2001-2013 DLR (http://www.dlr.de/) and contributors
/****************************************************************************/
//
//   This file is part of SUMO.
//   SUMO is free software; you can redistribute it and/or modify
//   it under the terms of the GNU General Public License as published by
//   the Free Software Foundation; either version 3 of the License, or
//   (at your option) any later version.
//
/****************************************************************************/
#ifndef GNECalibratorDialog_h
#define GNECalibratorDialog_h

// ===========================================================================
// included modules
// ===========================================================================

#ifdef _MSC_VER
#include <windows_config.h>
#else
#include <config.h>
#endif

#include "GNEAdditionalDialog.h"
#include "GNECalibrator.h"

// ===========================================================================
// class definitions
// ===========================================================================

/**
 * @class GNECalibratorDialog
 * @brief Dialog for edit rerouters
 */

class GNECalibratorDialog : public GNEAdditionalDialog {
    /// @brief FOX-declaration
    FXDECLARE(GNECalibratorDialog)

public:
    // Constructor
    GNECalibratorDialog(GNECalibrator *calibratorParent);

    // destructor
    ~GNECalibratorDialog();

    /// @name FOX-callbacks
    /// @{
    /// @brief event called after press add row button
    long onCmdAddRow(FXObject*, FXSelector, void*);

    /// @brief event called after press remove row
    long onCmdRemoveRow(FXObject*, FXSelector, void*);

    /// @brief event after press accept button
    long onCmdAccept(FXObject*, FXSelector, void*);

    /// @brief event after press cancel button
    long onCmdCancel(FXObject*, FXSelector, void*);

    /// @brief event after press reset button
    long onCmdReset(FXObject*, FXSelector, void*);
    /// @}

protected:

    /// @brief FOX needs this
    GNECalibratorDialog() {}

    /// @brief pointer to calibrator parent
    GNECalibrator *myCalibratorParent;

    /// @brief Map with the temporal FlowValues
    std::map<std::pair<SUMOTime, SUMOTime>, GNECalibrator::CalibratorFlow> myFlowValues;

    /// @brief Table with the data
    FXTable *myDataList;

    /// @brief textField for insert a flow's Id
    FXTextField *myTextFieldId;

    /// @brief textField for insert a flow's Type
    FXTextField *myTextFieldType;

    /// @brief textField for insert a flow's Route
    FXTextField *myTextFieldRoute;

    /// @brief textField for insert a flow's color
    FXTextField	*myTextFieldColor;

    /// @brief textField for insert a flow's DepartLane
    FXTextField *myTextFieldDepartLane;

    /// @brief textField for insert a flow's DepartPos
    FXTextField *myTextFieldDepartPos;

    /// @brief textField for insert a flow's DepartSpeed
    FXTextField *myTextFieldDepartSpeed;

    /// @brief textField for insert a flow's ArrivalLane
    FXTextField *myTextFieldArrivalLane;

    /// @brief textField for insert a flow's ArrivalPos
    FXTextField *myTextFieldArrivalPos;
    
    /// @brief textField for insert a flow's ArrivalSpeed
    FXTextField *myTextFieldArrivalSpeed;

    /// @brief textField for insert a flow's Line
    FXTextField *myTextFieldLine;

    /// @brief textField for insert a flow's PersonNumber
    FXTextField *myTextFieldPersonNumber;

    /// @brief textField for insert a flow's ContainerNumber
    FXTextField *myTextFieldContainerNumber;

    /// @brief textField for insert a flow's vehsPerHour
    FXTextField *myTextFieldVehsPerHour;

    /// @brief textField for insert a flow's period
    FXTextField *myTextFieldPeriod;

    /// @brief textField for insert a flow's probability
    FXTextField *myTextFieldProbability;

    /// @brief textField for insert a flow's number
    FXTextField *myTextFieldnumber;

    /// @brief Button for insert row
    FXButton *myAddRow;

    /// @brief Horizontal frame for row elements
    FXHorizontalFrame *myRowFrame;

private:
    /// @brief update data table
    void updateTable();

    /// @brief Invalidated copy constructor.
    GNECalibratorDialog(const GNECalibratorDialog&);

    /// @brief Invalidated assignment operator.
    GNECalibratorDialog& operator=(const GNECalibratorDialog&);
};

#endif