#include "expr.hpp"

std::ostream& operator<< (std::ostream& os, const ExprBase& expr)
{
    expr.print(os);

    return os;
}

std::ostream& operator<< (std::ostream& os, const Expr& expr)
{
    expr._expr->print(os);

    return os;
}

void OpExpr::print(std::ostream& os) const
{
    os << "(" << *(_left_expr);
    os << _op_name;
    if (_right_expr) // binary operator
    {
        os << *(_right_expr) << ")";
    } else { // unary operator
        os << ")";
    }
}

void NumExpr::print(std::ostream& os) const
{
    os << _value; 
}

Expr::Expr(std::string op_name, int value)
 : _expr(std::make_unique<OpExpr>(op_name, std::make_unique<NumExpr>(value), nullptr))  
{}

Expr::Expr(std::string op_name, int value_1, int value_2)
 :_expr(std::make_unique<OpExpr>(op_name, std::make_unique<NumExpr>(value_1), std::make_unique<NumExpr>(value_2)))
{}

Expr::Expr(std::string op_name, Expr&& expr_left, Expr&& expr_right)
 :_expr(std::make_unique<OpExpr>(op_name, std::move(expr_left._expr), std::move(expr_right._expr)))
{}

