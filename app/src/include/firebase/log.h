/*
 * Copyright 2016 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FIREBASE_APP_CLIENT_CPP_SRC_INCLUDE_FIREBASE_LOG_H_
#define FIREBASE_APP_CLIENT_CPP_SRC_INCLUDE_FIREBASE_LOG_H_

#if !defined(FIREBASE_NAMESPACE)
#define FIREBASE_NAMESPACE firebase
#endif

/// @brief Namespace that encompasses all Firebase APIs.
namespace FIREBASE_NAMESPACE {

/// @cond FIREBASE_APP_INTERNAL

/// @brief Levels used when logging messages.
enum LogLevel {
  /// Verbose Log Level
  kLogLevelVerbose = 0,
  /// Debug Log Level
  kLogLevelDebug,
  /// Info Log Level
  kLogLevelInfo,
  /// Warning Log Level
  kLogLevelWarning,
  /// Error Log Level
  kLogLevelError,
  /// Assert Log Level
  kLogLevelAssert,
};

#if defined(INTERNAL_EXPERIMENTAL) || defined(SWIG)
/// @brief Sets the logging verbosity.
/// All log messages at or above the specific log level.
///
/// @param[in] log_level Log level to display, by default this is set to
/// kLogLevelInfo.
void SetLogLevel(LogLevel level);

/// @brief Gets the logging verbosity.
///
/// @return Get the currently configured logging verbosity.
LogLevel GetLogLevel();
#endif  // defined(INTERNAL_EXPERIMENTAL) || defined(SWIG)

/// @endcond

// NOLINTNEXTLINE - allow namespace overridden
}  // namespace FIREBASE_NAMESPACE

#endif  // FIREBASE_APP_CLIENT_CPP_SRC_INCLUDE_FIREBASE_LOG_H_
