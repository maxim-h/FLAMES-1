#include <string>
#include <iostream>
#include <Rcpp.h>
#include <fstream>
#include <array>
#include <stdexcept>
#include <assert.h>
#include "json/json.h"
#include "config.h"

Rcpp::List
parse_json_config (std::string json_file);

int
verify_json_config(Json::Value json);

Config
load_json_config(Json::Value json);