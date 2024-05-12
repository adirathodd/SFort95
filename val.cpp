#include "val.h"
#include <cmath>

using namespace std;

Value Value::operator+(const Value& op) const {
    if(IsInt() && op.IsInt()){
        return Value(GetInt() + op.GetInt());
    }
    else if (IsInt() && op.IsReal()){
        return Value(GetInt() + op.GetReal());
    }
    else if (IsReal() && op.IsInt()){
        return Value(GetReal() + op.GetInt());
    }
    else if (IsReal() && op.IsReal()){
        return Value(GetReal() + op.GetReal());
    }
    return Value();  
}

Value Value::operator-(const Value& op) const {
    if(IsInt() && op.IsInt()){
        return Value(GetInt() - op.GetInt());
    }
    else if (IsInt() && op.IsReal()){
        return Value(GetInt() - op.GetReal());
    }
    else if (IsReal() && op.IsInt()){
        return Value(GetReal() - op.GetInt());
    }
    else if (IsReal() && op.IsReal()){
        return Value(GetReal() - op.GetReal());
    }
    return Value();  
}

Value Value::operator*(const Value& op) const{
    if(IsInt() && op.IsInt()){
        return Value(GetInt() * op.GetInt());
    }
    else if (IsInt() && op.IsReal()){
        return Value(GetInt() * op.GetReal());
    }
    else if (IsReal() && op.IsInt()){
        return Value(GetReal() * op.GetInt());
    }
    else if (IsReal() && op.IsReal()){
        return Value(GetReal() * op.GetReal());
    }
    return Value();
}

Value Value::operator/(const Value& op) const {
    if(IsInt() && op.IsInt()){
        return Value(GetInt() / op.GetInt());
    }
    else if (IsInt() && op.IsReal()){
        return Value(GetInt() / op.GetReal());
    }
    else if (IsReal() && op.IsInt()){
        return Value(GetReal() / op.GetInt());
    }
    else if (IsReal() && op.IsReal()){
        return Value(GetReal() / op.GetReal());
    }
    return Value();  
}

Value Value::Power(const Value& op) const{
    if(IsInt() && op.IsInt()){
        return Value(pow(GetInt(), op.GetInt()));
    }
    else if (IsInt() && op.IsReal()){
        return Value(pow(GetInt(), op.GetReal()));
    }
    else if (IsReal() && op.IsInt()){
        return Value(pow(GetReal(), op.GetInt()));
    }
    else if (IsReal() && op.IsReal()){
        return Value(pow(GetReal(), op.GetReal()));
    }
    return Value();
}

Value Value::Catenate(const Value& op) const{
    if(IsString() && op.IsString()){
        return Value(GetString() + op.GetString());
    }
    return Value();
}

Value Value::operator==(const Value& op) const{
    if(IsInt() && op.IsInt()){
        return Value(GetInt() == op.GetInt());
    }
    else if (IsInt() && op.IsReal()){
        return Value(GetInt() == op.GetReal());
    }
    else if (IsReal() && op.IsInt()){
        return Value(GetReal() == op.GetInt());
    }
    else if (IsReal() && op.IsReal()){
        return Value(GetReal() == op.GetReal());
    }
    return Value();
}

Value Value::operator<(const Value& op) const{
    if(IsInt() && op.IsInt()){
        return Value(GetInt() < op.GetInt());
    }
    else if (IsInt() && op.IsReal()){
        return Value(GetInt() < op.GetReal());
    }
    else if (IsReal() && op.IsInt()){
        return Value(GetReal() < op.GetInt());
    }
    else if (IsReal() && op.IsReal()){
        return Value(GetReal() < op.GetReal());
    }
    return Value();
}

Value Value::operator>(const Value& op) const{
    if(IsInt() && op.IsInt()){
        return Value(GetInt() > op.GetInt());
    }
    else if (IsInt() && op.IsReal()){
        return Value(GetInt() > op.GetReal());
    }
    else if (IsReal() && op.IsInt()){
        return Value(GetReal() > op.GetInt());
    }
    else if (IsReal() && op.IsReal()){
        return Value(GetReal() > op.GetReal());
    }
    return Value();
}