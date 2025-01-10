
"use strict";

let CloseGripper = require('./CloseGripper.js')
let SetConveyor = require('./SetConveyor.js')
let ControlConveyor = require('./ControlConveyor.js')
let TakePicture = require('./TakePicture.js')
let EditWorkspace = require('./EditWorkspace.js')
let GetWorkspaceRatio = require('./GetWorkspaceRatio.js')
let GetWorkspaceRobotPoses = require('./GetWorkspaceRobotPoses.js')
let DebugMarkers = require('./DebugMarkers.js')
let PingDxlTool = require('./PingDxlTool.js')
let GetTargetPose = require('./GetTargetPose.js')
let GetTrajectoryList = require('./GetTrajectoryList.js')
let ManageTrajectory = require('./ManageTrajectory.js')
let ManagePosition = require('./ManagePosition.js')
let SetSequenceAutorun = require('./SetSequenceAutorun.js')
let PushAirVacuumPump = require('./PushAirVacuumPump.js')
let DebugColorDetection = require('./DebugColorDetection.js')
let OpenGripper = require('./OpenGripper.js')
let ObjDetection = require('./ObjDetection.js')
let ChangeMotorConfig = require('./ChangeMotorConfig.js')
let SetLeds = require('./SetLeds.js')
let ManageSequence = require('./ManageSequence.js')
let GetCalibrationCam = require('./GetCalibrationCam.js')
let SetInt = require('./SetInt.js')
let PullAirVacuumPump = require('./PullAirVacuumPump.js')
let GetWorkspaceList = require('./GetWorkspaceList.js')
let GetPositionList = require('./GetPositionList.js')
let UpdateConveyorId = require('./UpdateConveyorId.js')
let SetDigitalIO = require('./SetDigitalIO.js')
let ManageProcess = require('./ManageProcess.js')
let RobotMove = require('./RobotMove.js')
let ChangeHardwareVersion = require('./ChangeHardwareVersion.js')
let GetSequenceList = require('./GetSequenceList.js')
let EditGrip = require('./EditGrip.js')
let SetCalibrationCam = require('./SetCalibrationCam.js')
let GetInt = require('./GetInt.js')
let SetString = require('./SetString.js')
let GetDigitalIO = require('./GetDigitalIO.js')
let SendCustomDxlValue = require('./SendCustomDxlValue.js')

module.exports = {
  CloseGripper: CloseGripper,
  SetConveyor: SetConveyor,
  ControlConveyor: ControlConveyor,
  TakePicture: TakePicture,
  EditWorkspace: EditWorkspace,
  GetWorkspaceRatio: GetWorkspaceRatio,
  GetWorkspaceRobotPoses: GetWorkspaceRobotPoses,
  DebugMarkers: DebugMarkers,
  PingDxlTool: PingDxlTool,
  GetTargetPose: GetTargetPose,
  GetTrajectoryList: GetTrajectoryList,
  ManageTrajectory: ManageTrajectory,
  ManagePosition: ManagePosition,
  SetSequenceAutorun: SetSequenceAutorun,
  PushAirVacuumPump: PushAirVacuumPump,
  DebugColorDetection: DebugColorDetection,
  OpenGripper: OpenGripper,
  ObjDetection: ObjDetection,
  ChangeMotorConfig: ChangeMotorConfig,
  SetLeds: SetLeds,
  ManageSequence: ManageSequence,
  GetCalibrationCam: GetCalibrationCam,
  SetInt: SetInt,
  PullAirVacuumPump: PullAirVacuumPump,
  GetWorkspaceList: GetWorkspaceList,
  GetPositionList: GetPositionList,
  UpdateConveyorId: UpdateConveyorId,
  SetDigitalIO: SetDigitalIO,
  ManageProcess: ManageProcess,
  RobotMove: RobotMove,
  ChangeHardwareVersion: ChangeHardwareVersion,
  GetSequenceList: GetSequenceList,
  EditGrip: EditGrip,
  SetCalibrationCam: SetCalibrationCam,
  GetInt: GetInt,
  SetString: SetString,
  GetDigitalIO: GetDigitalIO,
  SendCustomDxlValue: SendCustomDxlValue,
};
