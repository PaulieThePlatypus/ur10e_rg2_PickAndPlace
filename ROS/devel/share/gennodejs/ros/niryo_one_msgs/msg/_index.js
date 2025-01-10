
"use strict";

let Position = require('./Position.js');
let LogStatus = require('./LogStatus.js');
let Trajectory = require('./Trajectory.js');
let ToolCommand = require('./ToolCommand.js');
let ShiftPose = require('./ShiftPose.js');
let SoftwareVersion = require('./SoftwareVersion.js');
let ProcessState = require('./ProcessState.js');
let RobotMoveCommand = require('./RobotMoveCommand.js');
let Sequence = require('./Sequence.js');
let TrajectoryPlan = require('./TrajectoryPlan.js');
let DigitalIOState = require('./DigitalIOState.js');
let HardwareStatus = require('./HardwareStatus.js');
let MatlabMoveResult = require('./MatlabMoveResult.js');
let RobotState = require('./RobotState.js');
let ConveyorFeedback = require('./ConveyorFeedback.js');
let ObjectPose = require('./ObjectPose.js');
let RPY = require('./RPY.js');
let SequenceAutorunStatus = require('./SequenceAutorunStatus.js');
let ToolActionResult = require('./ToolActionResult.js');
let SequenceGoal = require('./SequenceGoal.js');
let ToolAction = require('./ToolAction.js');
let SequenceActionResult = require('./SequenceActionResult.js');
let SequenceActionGoal = require('./SequenceActionGoal.js');
let JoystickJointsActionResult = require('./JoystickJointsActionResult.js');
let ToolActionGoal = require('./ToolActionGoal.js');
let SequenceResult = require('./SequenceResult.js');
let JoystickJointsGoal = require('./JoystickJointsGoal.js');
let ToolGoal = require('./ToolGoal.js');
let RobotMoveResult = require('./RobotMoveResult.js');
let JoystickJointsActionGoal = require('./JoystickJointsActionGoal.js');
let SequenceFeedback = require('./SequenceFeedback.js');
let ToolResult = require('./ToolResult.js');
let RobotMoveActionResult = require('./RobotMoveActionResult.js');
let JoystickJointsActionFeedback = require('./JoystickJointsActionFeedback.js');
let JoystickJointsFeedback = require('./JoystickJointsFeedback.js');
let JoystickJointsAction = require('./JoystickJointsAction.js');
let RobotMoveActionGoal = require('./RobotMoveActionGoal.js');
let ToolFeedback = require('./ToolFeedback.js');
let RobotMoveFeedback = require('./RobotMoveFeedback.js');
let SequenceActionFeedback = require('./SequenceActionFeedback.js');
let ToolActionFeedback = require('./ToolActionFeedback.js');
let RobotMoveGoal = require('./RobotMoveGoal.js');
let JoystickJointsResult = require('./JoystickJointsResult.js');
let SequenceAction = require('./SequenceAction.js');
let RobotMoveActionFeedback = require('./RobotMoveActionFeedback.js');
let RobotMoveAction = require('./RobotMoveAction.js');

module.exports = {
  Position: Position,
  LogStatus: LogStatus,
  Trajectory: Trajectory,
  ToolCommand: ToolCommand,
  ShiftPose: ShiftPose,
  SoftwareVersion: SoftwareVersion,
  ProcessState: ProcessState,
  RobotMoveCommand: RobotMoveCommand,
  Sequence: Sequence,
  TrajectoryPlan: TrajectoryPlan,
  DigitalIOState: DigitalIOState,
  HardwareStatus: HardwareStatus,
  MatlabMoveResult: MatlabMoveResult,
  RobotState: RobotState,
  ConveyorFeedback: ConveyorFeedback,
  ObjectPose: ObjectPose,
  RPY: RPY,
  SequenceAutorunStatus: SequenceAutorunStatus,
  ToolActionResult: ToolActionResult,
  SequenceGoal: SequenceGoal,
  ToolAction: ToolAction,
  SequenceActionResult: SequenceActionResult,
  SequenceActionGoal: SequenceActionGoal,
  JoystickJointsActionResult: JoystickJointsActionResult,
  ToolActionGoal: ToolActionGoal,
  SequenceResult: SequenceResult,
  JoystickJointsGoal: JoystickJointsGoal,
  ToolGoal: ToolGoal,
  RobotMoveResult: RobotMoveResult,
  JoystickJointsActionGoal: JoystickJointsActionGoal,
  SequenceFeedback: SequenceFeedback,
  ToolResult: ToolResult,
  RobotMoveActionResult: RobotMoveActionResult,
  JoystickJointsActionFeedback: JoystickJointsActionFeedback,
  JoystickJointsFeedback: JoystickJointsFeedback,
  JoystickJointsAction: JoystickJointsAction,
  RobotMoveActionGoal: RobotMoveActionGoal,
  ToolFeedback: ToolFeedback,
  RobotMoveFeedback: RobotMoveFeedback,
  SequenceActionFeedback: SequenceActionFeedback,
  ToolActionFeedback: ToolActionFeedback,
  RobotMoveGoal: RobotMoveGoal,
  JoystickJointsResult: JoystickJointsResult,
  SequenceAction: SequenceAction,
  RobotMoveActionFeedback: RobotMoveActionFeedback,
  RobotMoveAction: RobotMoveAction,
};
