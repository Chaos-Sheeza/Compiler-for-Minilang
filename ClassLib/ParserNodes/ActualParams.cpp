#include "MainHeader.h"

ActualParams::ActualParams(Lexer* l){
    expr = new Expression(l);    
}