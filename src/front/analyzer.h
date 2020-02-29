#ifndef YULANG_FRONT_ANALYZER_H_
#define YULANG_FRONT_ANALYZER_H_

#include <optional>

#include "define/ast.h"
#include "define/type.h"
#include "define/symbol.h"

namespace yulang::front {

class Analyzer {
 public:
  Analyzer() {}

  define::TypePtr AnalyzeOn(define::PropertyAST &ast);
  define::TypePtr AnalyzeOn(define::VarLetDefAST &ast);
  define::TypePtr AnalyzeOn(define::FunDefAST &ast);
  define::TypePtr AnalyzeOn(define::DeclareAST &ast);
  define::TypePtr AnalyzeOn(define::TypeAliasAST &ast);
  define::TypePtr AnalyzeOn(define::StructAST &ast);
  define::TypePtr AnalyzeOn(define::EnumAST &ast);
  define::TypePtr AnalyzeOn(define::ImportAST &ast);
  define::TypePtr AnalyzeOn(define::VarElemAST &ast);
  define::TypePtr AnalyzeOn(define::LetElemAST &ast);
  define::TypePtr AnalyzeOn(define::ArgElemAST &ast);
  define::TypePtr AnalyzeOn(define::EnumElemAST &ast);
  define::TypePtr AnalyzeOn(define::BlockAST &ast);
  define::TypePtr AnalyzeOn(define::IfAST &ast);
  define::TypePtr AnalyzeOn(define::WhenAST &ast);
  define::TypePtr AnalyzeOn(define::WhileAST &ast);
  define::TypePtr AnalyzeOn(define::ForInAST &ast);
  define::TypePtr AnalyzeOn(define::AsmAST &ast);
  define::TypePtr AnalyzeOn(define::ControlAST &ast);
  define::TypePtr AnalyzeOn(define::WhenElemAST &ast);
  define::TypePtr AnalyzeOn(define::BinaryAST &ast);
  define::TypePtr AnalyzeOn(define::CastAST &ast);
  define::TypePtr AnalyzeOn(define::UnaryAST &ast);
  define::TypePtr AnalyzeOn(define::IndexAST &ast);
  define::TypePtr AnalyzeOn(define::FunCallAST &ast);
  define::TypePtr AnalyzeOn(define::IntAST &ast);
  define::TypePtr AnalyzeOn(define::FloatAST &ast);
  define::TypePtr AnalyzeOn(define::CharAST &ast);
  define::TypePtr AnalyzeOn(define::IdAST &ast);
  define::TypePtr AnalyzeOn(define::StringAST &ast);
  define::TypePtr AnalyzeOn(define::BoolAST &ast);
  define::TypePtr AnalyzeOn(define::NullAST &ast);
  define::TypePtr AnalyzeOn(define::ValInitAST &ast);
  define::TypePtr AnalyzeOn(define::PrimTypeAST &ast);
  define::TypePtr AnalyzeOn(define::UserTypeAST &ast);
  define::TypePtr AnalyzeOn(define::FuncTypeAST &ast);
  define::TypePtr AnalyzeOn(define::VolaTypeAST &ast);
  define::TypePtr AnalyzeOn(define::ArrayTypeAST &ast);
  define::TypePtr AnalyzeOn(define::PointerTypeAST &ast);
  define::TypePtr AnalyzeOn(define::RefTypeAST &ast);

  std::optional<define::EvalNum> EvalOn(define::PropertyAST &ast);
  std::optional<define::EvalNum> EvalOn(define::VarLetDefAST &ast);
  std::optional<define::EvalNum> EvalOn(define::FunDefAST &ast);
  std::optional<define::EvalNum> EvalOn(define::DeclareAST &ast);
  std::optional<define::EvalNum> EvalOn(define::TypeAliasAST &ast);
  std::optional<define::EvalNum> EvalOn(define::StructAST &ast);
  std::optional<define::EvalNum> EvalOn(define::EnumAST &ast);
  std::optional<define::EvalNum> EvalOn(define::ImportAST &ast);
  std::optional<define::EvalNum> EvalOn(define::VarElemAST &ast);
  std::optional<define::EvalNum> EvalOn(define::LetElemAST &ast);
  std::optional<define::EvalNum> EvalOn(define::ArgElemAST &ast);
  std::optional<define::EvalNum> EvalOn(define::EnumElemAST &ast);
  std::optional<define::EvalNum> EvalOn(define::BlockAST &ast);
  std::optional<define::EvalNum> EvalOn(define::IfAST &ast);
  std::optional<define::EvalNum> EvalOn(define::WhenAST &ast);
  std::optional<define::EvalNum> EvalOn(define::WhileAST &ast);
  std::optional<define::EvalNum> EvalOn(define::ForInAST &ast);
  std::optional<define::EvalNum> EvalOn(define::AsmAST &ast);
  std::optional<define::EvalNum> EvalOn(define::ControlAST &ast);
  std::optional<define::EvalNum> EvalOn(define::WhenElemAST &ast);
  std::optional<define::EvalNum> EvalOn(define::BinaryAST &ast);
  std::optional<define::EvalNum> EvalOn(define::CastAST &ast);
  std::optional<define::EvalNum> EvalOn(define::UnaryAST &ast);
  std::optional<define::EvalNum> EvalOn(define::IndexAST &ast);
  std::optional<define::EvalNum> EvalOn(define::FunCallAST &ast);
  std::optional<define::EvalNum> EvalOn(define::IntAST &ast);
  std::optional<define::EvalNum> EvalOn(define::FloatAST &ast);
  std::optional<define::EvalNum> EvalOn(define::CharAST &ast);
  std::optional<define::EvalNum> EvalOn(define::IdAST &ast);
  std::optional<define::EvalNum> EvalOn(define::StringAST &ast);
  std::optional<define::EvalNum> EvalOn(define::BoolAST &ast);
  std::optional<define::EvalNum> EvalOn(define::NullAST &ast);
  std::optional<define::EvalNum> EvalOn(define::ValInitAST &ast);
  std::optional<define::EvalNum> EvalOn(define::PrimTypeAST &ast);
  std::optional<define::EvalNum> EvalOn(define::UserTypeAST &ast);
  std::optional<define::EvalNum> EvalOn(define::FuncTypeAST &ast);
  std::optional<define::EvalNum> EvalOn(define::VolaTypeAST &ast);
  std::optional<define::EvalNum> EvalOn(define::ArrayTypeAST &ast);
  std::optional<define::EvalNum> EvalOn(define::PointerTypeAST &ast);
  std::optional<define::EvalNum> EvalOn(define::RefTypeAST &ast);

 private:
  EnvPtr symbols_, user_types_;
  EvalEnvPtr values_;
};

}  // namespace yulang::front

#endif  // YULANG_FRONT_ANALYZER_H_