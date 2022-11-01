using UnityEngine;

namespace Exoa.Designer
{
    public class HDLogger
    {
        public delegate void OnLogHandler(string msg, LogCategory category, LogType type = LogType.Log);
        public static OnLogHandler OnLog;

        public enum LogCategory { General, FileSystem, Screenshot, Floormap, Interior, Building };

        public static void LogError(string msg, LogCategory category)
        {
            Log(msg, category, LogType.Error);
        }
        public static void LogWarning(string msg, LogCategory category)
        {
            Log(msg, category, LogType.Warning);
        }
        public static void Log(string msg, LogCategory category, LogType type = LogType.Log)
        {
            if (BuildOptions.DEBUG_MODE && (category == LogCategory.General || type == LogType.Error || type == LogType.Exception))
            {
                LogToConsole(msg, category, type);
            }
            else if (BuildOptions.LOG_FILE_SYSTEM && category == LogCategory.FileSystem)
            {
                LogToConsole(msg, category, type);
            }
            else if (BuildOptions.LOG_SCREENSHOTS && category == LogCategory.Screenshot)
            {
                LogToConsole(msg, category, type);
            }
            else if (BuildOptions.LOG_FLOORMAP && category == LogCategory.Floormap)
            {
                LogToConsole(msg, category, type);
            }
            else if (BuildOptions.LOG_INTERIOR && category == LogCategory.Interior)
            {
                LogToConsole(msg, category, type);
            }
            else if (BuildOptions.LOG_BUILDING && category == LogCategory.Building)
            {
                LogToConsole(msg, category, type);
            }
            OnLog?.Invoke(msg, category, type);
        }

        private static void LogToConsole(string msg, LogCategory category, LogType type)
        {
            msg = "[" + category + "] " + msg;
            switch (type)
            {
                case LogType.Error:
                case LogType.Exception:
                    Debug.LogError(msg);
                    break;
                case LogType.Warning:
                    Debug.LogWarning(msg);
                    break;
                default:
                    Debug.Log(msg);
                    break;
            }
        }
    }
}
