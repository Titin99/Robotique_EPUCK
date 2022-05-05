#ifndef MAIN_H
#define MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

#include "camera/dcmi_camera.h"
#include "msgbus/messagebus.h"
#include "parameter/parameter.h"


/** Robot wide IPC bus. */
extern messagebus_t bus;

extern parameter_namespace_t parameter_root;

#ifdef __cplusplus
}
#endif

/* Defeine global constants */
#define ROBOT_SPEED_MEDIUM	300
#define ROBOT_SPEED_SLOW	100
#define ROBOT_SPEED_NULL	0

#endif
