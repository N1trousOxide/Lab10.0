//Copyright 2020 <ZaitsevGames & N1trousOxide & yurygavrilov47>
#include <map>
#include <string>
#pragma once
const std::size_t DEFAULT_THREAD_HASH = boost::thread::hardware_concurrency();
const char DEFAULT_LOG_LEVEL[] = "error";
const char DEFAULT_OUTPUT_PATH[] = "/home/nitrousoxide/testfolder2";
const std::map <std::string, int> log_lvls =
    {{"info", 0}, {"warning", 1}, {"error", 2}};

