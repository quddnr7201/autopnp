/*
 * Copyright (c) 2011-2014, fortiss GmbH.
 * Licensed under the Apache License, Version 2.0.
 *
 * Use, modification and distribution are subject to the terms specified
 * in the accompanying license file LICENSE.txt located at the root directory
 * of this software distribution. A copy is available at
 * http://chromosome.fortiss.org/.
 *
 * This file is part of CHROMOSOME.
 *
 * $Id$
 */

/**
 * \file
 *         Header file for capabilitiesView component.
 *
 * \author
 *         This file has been generated by the CHROMOSOME Modeling Tool (XMT)
 *         (fortiss GmbH).
 */

#ifndef AUTOPNP_ADV_CAPABILITIESVIEW_CAPABILITIESVIEWCOMPONENT_H
#define AUTOPNP_ADV_CAPABILITIESVIEW_CAPABILITIESVIEWCOMPONENT_H

/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "xme/defines.h"

// PROTECTED REGION ID(AUTOPNP_ADV_CAPABILITIESVIEW_CAPABILITIESVIEWCOMPONENT_H_INCLUDES) ENABLED START
#include <string>

#include "xme/hal/include/sched.h" //TODO
#include "xme/hal/include/table.h" //TODO
#include "xme/hal/include/time.h" //TODO

#include "autoPnP/adv/capabilitiesView/include/capabilitiesWindow.h"
#include "autoPnP/topic/autoPnPCommonData.h"
// PROTECTED REGION END

/******************************************************************************/
/***   Defines                                                              ***/
/******************************************************************************/

// PROTECTED REGION ID(AUTOPNP_ADV_CAPABILITIESVIEW_CAPABILITIESVIEWCOMPONENT_H_DEFINES) ENABLED START
// PROTECTED REGION END

/******************************************************************************/
/***   Type definitions                                                     ***/
/******************************************************************************/

// PROTECTED REGION ID(AUTOPNP_ADV_CAPABILITIESVIEW_CAPABILITIESVIEWCOMPONENT_H_TYPE_DEFINITIONS) ENABLED START
typedef enum
{
	COMPONENT_STATUS_ACTIVE = 0,
	COMPONENT_STATUS_ADDED,
	COMPONENT_STATUS_REMOVED
} autoPnP_adv_capabilitiesView_capabilitiesViewComponent_componentStatus_t;

typedef struct
{
	AutoPnP_component_t component;
	autoPnP_adv_capabilitiesView_capabilitiesViewComponent_componentStatus_t status;
	xme_hal_time_timeHandle_t timeHandle;
} autoPnP_adv_capabilitiesView_capabilitiesViewComponent_component_t;
// PROTECTED REGION END

/**
 * \typedef autoPnP_adv_capabilitiesView_capabilitiesViewComponent_config_t
 *
 * \brief Component configuration structure type.
 *
 * \details Structure that represents the state of a component instance.
 */
typedef struct
{
    // PROTECTED REGION ID(AUTOPNP_ADV_CAPABILITIESVIEW_CAPABILITIESVIEWCOMPONENT_H_CONFIG) ENABLED START
	std::string directory; ///< Directory for capabilities image.
	CapabilitiesWindow* capabilitiesWindow; ///< Window displaying capabilities.
	XME_HAL_TABLE(autoPnP_adv_capabilitiesView_capabilitiesViewComponent_component_t, components, 100); //< Array of components. //TODO size
	xme_hal_sched_taskHandle_t taskHandle;
    // PROTECTED REGION END
} autoPnP_adv_capabilitiesView_capabilitiesViewComponent_config_t;

/******************************************************************************/
/***   Prototypes                                                           ***/
/******************************************************************************/
XME_EXTERN_C_BEGIN

/**
 * \brief Initialization of component.
 *
 * \details Called once before the component is started the first time.
 *
 * \note The initializationString parameter is a temporary artifact that
 *       is likely to be replaced by a more type-safe variant in the future.
 *       See Issue #3846.
 *
 * \param[in,out] config Pointer to a component-specific configuration
 *                structure for this component instance. It is by default
 *                initialized with all zeroes and can be freely modified
 *                by this function.
 * \param[in] initializationString String value of component-specific format
 *            that can be interpreted by this function in order to initialize
 *            the state of the component instance.
 *
 * \return XME_STATUS_SUCCESS on successful initialization and an arbitrary
 *         error code otherwise. If XME_STATUS_SUCCESS is not returned,
 *         component instantiation is aborted.
 */
xme_status_t
autoPnP_adv_capabilitiesView_capabilitiesViewComponent_init
(
    autoPnP_adv_capabilitiesView_capabilitiesViewComponent_config_t* const config,
    const char* initializationString
);

/**
 * \brief Finalization of component.
 *
 * \details Called after component will no longer be executed to free allocated resources.
 *          Component must not be executed after fini has been called.
 *
 * \param[in] config Pointer to the component-specific configuration structure
 *            for this component instance.
 */
void
autoPnP_adv_capabilitiesView_capabilitiesViewComponent_fini
(
    autoPnP_adv_capabilitiesView_capabilitiesViewComponent_config_t* const config
);

// PROTECTED REGION ID(AUTOPNP_ADV_CAPABILITIESVIEW_CAPABILITIESVIEWCOMPONENT_H_PROTOTYPES) ENABLED START
// PROTECTED REGION END

XME_EXTERN_C_END

#endif // #ifndef AUTOPNP_ADV_CAPABILITIESVIEW_CAPABILITIESVIEWCOMPONENT_H