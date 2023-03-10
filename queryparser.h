#ifndef QUERYPARSER_H
#define QUERYPARSER_H

#pragma once

#include "hsql/SQLParser.h"
#include "hsql/SQLParserResult.h"
#include <iostream>

using namespace std;
using namespace hsql;

class QueryParser {
 public:
  QueryParser();
  ~QueryParser();

  const SQLStatement* Parse(string stmt);

 private:
};

#endif