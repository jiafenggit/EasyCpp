/*
 * 日志辅助函数
 * @author 刘健 59208859@qq.com
*/

#include <easycpp/helpers/log.h>

/// 输出错误日志
void easycpp::helpers::log_error(std::string tag, std::string msg, std::string path)
{
    std::string data = easycpp::helpers::date("%Y/%m/%d %X")+ " | ERROR | " + tag + " | " + msg + "\n";
    easycpp::helpers::file_put_contents((path == "" ? "" : path + "/") + "error." + easycpp::helpers::date("%Y%m%d") + ".log", data, FILE_APPEND);
}

/// 输出调试日志
void easycpp::helpers::log_debug(std::string tag, std::string msg, std::string path)
{
    std::string data = easycpp::helpers::date("%Y/%m/%d %X") + " | DEBUG | " + tag + " | " + msg + "\n";
    easycpp::helpers::file_put_contents((path == "" ? "" : path + "/") + "debug." + easycpp::helpers::date("%Y%m%d") + ".log", data, FILE_APPEND);
}

/// 输出信息日志
void easycpp::helpers::log_info(std::string tag, std::string msg, std::string path)
{
    std::string data = easycpp::helpers::date("%Y/%m/%d %X") + " | INFO | " + tag + " | " + msg + "\n";
    easycpp::helpers::file_put_contents((path == "" ? "" : path + "/") + "info." + easycpp::helpers::date("%Y%m%d") + ".log", data, FILE_APPEND);
}
