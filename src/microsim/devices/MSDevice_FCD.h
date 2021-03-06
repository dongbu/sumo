/****************************************************************************/
// Eclipse SUMO, Simulation of Urban MObility; see https://eclipse.org/sumo
// Copyright (C) 2013-2018 German Aerospace Center (DLR) and others.
// This program and the accompanying materials
// are made available under the terms of the Eclipse Public License v2.0
// which accompanies this distribution, and is available at
// http://www.eclipse.org/legal/epl-v20.html
// SPDX-License-Identifier: EPL-2.0
/****************************************************************************/
/// @file    MSDevice_FCD.h
/// @author  Daniel Krajzewicz
/// @author  Jakob Erdmann
/// @date    11.06.2013
/// @version $Id$
///
// A device which records floating car data
/****************************************************************************/
#ifndef MSDevice_FCD_h
#define MSDevice_FCD_h


// ===========================================================================
// included modules
// ===========================================================================
#ifdef _MSC_VER
#include <windows_config.h>
#else
#include <config.h>
#endif

#include "MSDevice.h"
#include <utils/common/SUMOTime.h>


// ===========================================================================
// class declarations
// ===========================================================================
class SUMOVehicle;


// ===========================================================================
// class definitions
// ===========================================================================
/**
 * @class MSDevice_FCD
 * @brief A device which collects info on the vehicle trip (mainly on departure and arrival)
 *
 * Each device collects departure time, lane and speed and the same for arrival.
 *
 * @see MSDevice
 */
class MSDevice_FCD : public MSDevice {
public:
    /** @brief Inserts MSDevice_FCD-options
     * @param[filled] oc The options container to add the options to
     */
    static void insertOptions(OptionsCont& oc);


    /** @brief Build devices for the given vehicle, if needed
     *
     * The options are read and evaluated whether a FCD-device shall be built
     *  for the given vehicle.
     *
     * The built device is stored in the given vector.
     *
     * @param[in] v The vehicle for which a device may be built
     * @param[filled] into The vector to store the built device in
     */
    static void buildVehicleDevices(SUMOVehicle& v, std::vector<MSDevice*>& into);

public:
    /// @brief Destructor.
    ~MSDevice_FCD();


    /// @name Methods called on vehicle movement / state change, overwriting MSDevice
    /// @{

    bool notifyEnter(SUMOVehicle& /*veh*/, MSMoveReminder::Notification /*reason*/, const MSLane* /*enteredLane*/ ) {
        return false;
    }

    /// @brief return the name for this type of device
    const std::string deviceName() const {
        return "fcd";
    }

private:
    /** @brief Constructor
     *
     * @param[in] holder The vehicle that holds this device
     * @param[in] id The ID of the device
     */
    MSDevice_FCD(SUMOVehicle& holder, const std::string& id);




private:
    /// @brief Invalidated copy constructor.
    MSDevice_FCD(const MSDevice_FCD&);

    /// @brief Invalidated assignment operator.
    MSDevice_FCD& operator=(const MSDevice_FCD&);


};


#endif

/****************************************************************************/

