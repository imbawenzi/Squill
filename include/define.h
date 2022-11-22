#ifndef __DEFINE_H__
#define __DEFINE_H__


/* MARK FOR GENERATE START: DO NOT REMOVE */
#define ALLTYPE(V) \
	V(kProgram) \
	V(kStmtlist) \
	V(kStmt) \
	V(kCreateStmt) \
	V(kDropStmt) \
	V(kSelectStmt) \
	V(kUpdateStmt) \
	V(kInsertStmt) \
	V(kAlterStmt) \
	V(kCreateTableStmt) \
	V(kCreateIndexStmt) \
	V(kCreateTriggerStmt) \
	V(kCreateViewStmt) \
	V(kDropIndexStmt) \
	V(kDropTableStmt) \
	V(kDropTriggerStmt) \
	V(kDropViewStmt) \
	V(kTableName) \
	V(kAlterAction) \
	V(kSelectNoParens) \
	V(kSelectWithParens) \
	V(kOptWithClause) \
	V(kSelectClauseList) \
	V(kOptOrderClause) \
	V(kOptLimitClause) \
	V(kSelectClause) \
	V(kCombineClause) \
	V(kOptAllOrDistinct) \
	V(kSelectTarget) \
	V(kOptFromClause) \
	V(kOptWhereClause) \
	V(kOptGroupClause) \
	V(kOptWindowClause) \
	V(kFromClause) \
	V(kExprList) \
	V(kWindowClause) \
	V(kWindowDefList) \
	V(kWindowDef) \
	V(kWindowName) \
	V(kWindow) \
	V(kIdentifier) \
	V(kOptExistWindowName) \
	V(kOptPartition) \
	V(kOptFrameClause) \
	V(kRangeOrRows) \
	V(kFrameBoundStart) \
	V(kFrameBoundEnd) \
	V(kFrameBound) \
	V(kExpr) \
	V(kOptHavingClause) \
	V(kWhereClause) \
	V(kTableRef) \
	V(kOptTablePrefix) \
	V(kOptAsAlias) \
	V(kOptIndex) \
	V(kOptOn) \
	V(kOptUsing) \
	V(kColumnName) \
	V(kColumnNameList) \
	V(kJoinOp) \
	V(kOptJoinType) \
	V(kLimitClause) \
	V(kOptLimitRowCount) \
	V(kOrderItemList) \
	V(kOrderItem) \
	V(kOptOrderBehavior) \
	V(kCteTableList) \
	V(kCteTable) \
	V(kCteTableName) \
	V(kOptColumnNameListP) \
	V(kOptTemp) \
	V(kOptIfNotExist) \
	V(kCreateDefinitionList) \
	V(kOptTableOptionList) \
	V(kOptCreateDefinitionListP) \
	V(kOptIgnoreOrReplace) \
	V(kOptAs) \
	V(kLikeField) \
	V(kOptIndexType) \
	V(kIndexType) \
	V(kOptIndexKeyword) \
	V(kIndexName) \
	V(kKeyPartList) \
	V(kOptIndexOption) \
	V(kOptExtraOption) \
	V(kTriggerName) \
	V(kTriggerActionTime) \
	V(kTriggerEvents) \
	V(kTriggerBody) \
	V(kOptViewAlgorithm) \
	V(kOptSqlSecurity) \
	V(kViewName) \
	V(kOptCheckOption) \
	V(kTableOptionList) \
	V(kTableOption) \
	V(kOptOpComma) \
	V(kOptOpEqual) \
	V(kInsertMethod) \
	V(kRowFormat) \
	V(kVisibleInvisible) \
	V(kIndexAlgorithmOption) \
	V(kLockOption) \
	V(kOptIfExist) \
	V(kTableNameList) \
	V(kOptRestrictOrCascade) \
	V(kOptPriority) \
	V(kOptIgnore) \
	V(kOptInto) \
	V(kValueOrValues) \
	V(kSuperValueList) \
	V(kOptAsRowAlias) \
	V(kOptOnDuplicate) \
	V(kAssignmentList) \
	V(kOptLowPriority) \
	V(kValueList) \
	V(kValue) \
	V(kRowAlias) \
	V(kOptColAlias) \
	V(kColAliasList) \
	V(kColAlias) \
	V(kKeyPart) \
	V(kOptColumn) \
	V(kColumnDef) \
	V(kAlterConstantAction) \
	V(kColumnDefList) \
	V(kCreateDefinition) \
	V(kColumnDefinition) \
	V(kIndexOrKey) \
	V(kOptIndexName) \
	V(kFulltextOrSpatial) \
	V(kOptIndexOrKey) \
	V(kOptConstraintSymbol) \
	V(kReferenceDefinition) \
	V(kCheckConstraintDefinition) \
	V(kDataType) \
	V(kOptNullNotNull) \
	V(kOptVisibleInvisible) \
	V(kOptAutoIncrement) \
	V(kOptUniquePrimary) \
	V(kOptColumnFormat) \
	V(kOptStorage) \
	V(kOptReferenceDefinition) \
	V(kOptCheckConstraintDefinition) \
	V(kColumnFormat) \
	V(kStorage) \
	V(kOptMatch) \
	V(kOptOnDelete) \
	V(kOptOnUpdate) \
	V(kReferenceOption) \
	V(kOptEnforced) \
	V(kSymbol) \
	V(kAssignment) \
	V(kAsAlias) \
	V(kOperand) \
	V(kBetweenExpr) \
	V(kExistsExpr) \
	V(kInExpr) \
	V(kCastExpr) \
	V(kLogicExpr) \
	V(kArrayIndex) \
	V(kScalarExpr) \
	V(kUnaryExpr) \
	V(kBinaryExpr) \
	V(kCaseExpr) \
	V(kExtractExpr) \
	V(kArrayExpr) \
	V(kFunctionExpr) \
	V(kExprColumnName) \
	V(kLiteral) \
	V(kCompExpr) \
	V(kBinaryOp) \
	V(kOptNot) \
	V(kCaseList) \
	V(kFunctionName) \
	V(kOptOverClause) \
	V(kOptDistinct) \
	V(kCaseClause) \
	V(kDatetimeField) \
	V(kIntLiteral) \
	V(kStringLiteral) \
	V(kBoolLiteral) \
	V(kNumLiteral) \
	V(kFloatLiteral) \
	V(kNumericType) \
	V(kCharacterType) \
	V(kCharacterConflicta) \
	V(kOptLength) \
	V(kUnknown) \
	V(kUnknown0) \
	V(kUnknown1) \
	V(kUnknown2) \
	V(kUnknown3) \
	V(kUnknown4) \
	V(kUnknown5) \
	V(kUnknown6) \
	V(kUnknown7) \
	V(kUnknown8) \
	V(kUnknown9) \
	V(kUnknown10) \
	V(kUnknown11) \
	V(kUnknown12) \
	V(kUnknown13) \
	V(kUnknown14) \
	V(kUnknown15) \
	V(kUnknown16) \
	V(kUnknown17) \
	V(kUnknown18) \
	V(kUnknown19) \
	V(kUnknown20) \
	V(kUnknown21) \
	V(kUnknown22) \
	V(kUnknown23) \
	V(kUnknown24) \
	V(kUnknown25) \
	V(kUnknown26) \
	V(kUnknown27) \
	V(kUnknown28) \
	V(kUnknown29) \
	V(kUnknown30) \
	V(kUnknown31) \
	V(kUnknown32) \
	V(kUnknown33) \
	V(kUnknown34) \
	V(kUnknown35) \
	V(kUnknown36) \
	V(kUnknown37) \
	V(kUnknown38) \
	V(kUnknown39) \
	V(kUnknown40) \
	V(kUnknown41) \
	V(kUnknown42) \
	V(kUnknown43) \
	V(kUnknown44) \
	V(kUnknown45) \
	V(kUnknown46) \
	V(kUnknown47) \
	V(kUnknown48) \
	V(kUnknown49) \
	V(kUnknown50) \
	V(kUnknown51) \
	V(kUnknown52) \
	V(kUnknown53) \
	V(kUnknown54) \
	V(kUnknown55) \
	V(kUnknown56) \
	V(kUnknown57) \
	V(kUnknown58) \
	V(kUnknown59) \
	V(kUnknown60) \
	V(kUnknown61) \
	V(kUnknown62) \
	V(kUnknown63) \
	V(kUnknown64) \
	V(kUnknown65) \
	V(kUnknown66) \
	V(kUnknown67) \
	V(kUnknown68) \
	V(kUnknown69) \
	V(kUnknown70) \
	V(kUnknown71) \
	V(kUnknown72) \
	V(kUnknown73) \
	V(kUnknown74) \
	V(kUnknown75) \
	V(kUnknown76) \
	V(kUnknown77) \
	V(kUnknown78) \
	V(kUnknown79) \
	V(kUnknown80) \
	V(kUnknown81) \
	V(kUnknown82) \
	V(kUnknown83) \
	V(kUnknown84) \
	V(kUnknown85) \
	V(kUnknown86) \
	V(kUnknown87) \
	V(kUnknown88) \
	V(kUnknown89) \
	V(kUnknown90) \
	V(kUnknown91) \
	V(kUnknown92) \
	V(kUnknown93) \
	V(kUnknown94) \
	V(kUnknown95) \
	V(kUnknown96) \
	V(kUnknown97) \
	V(kUnknown98) \
	V(kUnknown99) \
	V(kUnknown100) \
	V(kUnknown101) \
	V(kUnknown102) \
	V(kUnknown103) \
	V(kUnknown104) \
	V(kUnknown105) \
	V(kUnknown106) \
	V(kUnknown107) \
	V(kUnknown108) \
	V(kUnknown109) \
	V(kUnknown110) \
	V(kUnknown111) \
	V(kUnknown112) \
	V(kUnknown113) \
	V(kUnknown114) \
	V(kUnknown115) \
	V(kUnknown116) \


static char* ALLTYPE_enum_to_String[] = { 
	"kProgram", 
	"kStmtlist", 
	"kStmt", 
	"kCreateStmt", 
	"kDropStmt", 
	"kSelectStmt", 
	"kUpdateStmt", 
	"kInsertStmt", 
	"kAlterStmt", 
	"kCreateTableStmt", 
	"kCreateIndexStmt", 
	"kCreateTriggerStmt", 
	"kCreateViewStmt", 
	"kDropIndexStmt", 
	"kDropTableStmt", 
	"kDropTriggerStmt", 
	"kDropViewStmt", 
	"kTableName", 
	"kAlterAction", 
	"kSelectNoParens", 
	"kSelectWithParens", 
	"kOptWithClause", 
	"kSelectClauseList", 
	"kOptOrderClause", 
	"kOptLimitClause", 
	"kSelectClause", 
	"kCombineClause", 
	"kOptAllOrDistinct", 
	"kSelectTarget", 
	"kOptFromClause", 
	"kOptWhereClause", 
	"kOptGroupClause", 
	"kOptWindowClause", 
	"kFromClause", 
	"kExprList", 
	"kWindowClause", 
	"kWindowDefList", 
	"kWindowDef", 
	"kWindowName", 
	"kWindow", 
	"kIdentifier", 
	"kOptExistWindowName", 
	"kOptPartition", 
	"kOptFrameClause", 
	"kRangeOrRows", 
	"kFrameBoundStart", 
	"kFrameBoundEnd", 
	"kFrameBound", 
	"kExpr", 
	"kOptHavingClause", 
	"kWhereClause", 
	"kTableRef", 
	"kOptTablePrefix", 
	"kOptAsAlias", 
	"kOptIndex", 
	"kOptOn", 
	"kOptUsing", 
	"kColumnName", 
	"kColumnNameList", 
	"kJoinOp", 
	"kOptJoinType", 
	"kLimitClause", 
	"kOptLimitRowCount", 
	"kOrderItemList", 
	"kOrderItem", 
	"kOptOrderBehavior", 
	"kCteTableList", 
	"kCteTable", 
	"kCteTableName", 
	"kOptColumnNameListP", 
	"kOptTemp", 
	"kOptIfNotExist", 
	"kCreateDefinitionList", 
	"kOptTableOptionList", 
	"kOptCreateDefinitionListP", 
	"kOptIgnoreOrReplace", 
	"kOptAs", 
	"kLikeField", 
	"kOptIndexType", 
	"kIndexType", 
	"kOptIndexKeyword", 
	"kIndexName", 
	"kKeyPartList", 
	"kOptIndexOption", 
	"kOptExtraOption", 
	"kTriggerName", 
	"kTriggerActionTime", 
	"kTriggerEvents", 
	"kTriggerBody", 
	"kOptViewAlgorithm", 
	"kOptSqlSecurity", 
	"kViewName", 
	"kOptCheckOption", 
	"kTableOptionList", 
	"kTableOption", 
	"kOptOpComma", 
	"kOptOpEqual", 
	"kInsertMethod", 
	"kRowFormat", 
	"kVisibleInvisible", 
	"kIndexAlgorithmOption", 
	"kLockOption", 
	"kOptIfExist", 
	"kTableNameList", 
	"kOptRestrictOrCascade", 
	"kOptPriority", 
	"kOptIgnore", 
	"kOptInto", 
	"kValueOrValues", 
	"kSuperValueList", 
	"kOptAsRowAlias", 
	"kOptOnDuplicate", 
	"kAssignmentList", 
	"kOptLowPriority", 
	"kValueList", 
	"kValue", 
	"kRowAlias", 
	"kOptColAlias", 
	"kColAliasList", 
	"kColAlias", 
	"kKeyPart", 
	"kOptColumn", 
	"kColumnDef", 
	"kAlterConstantAction", 
	"kColumnDefList", 
	"kCreateDefinition", 
	"kColumnDefinition", 
	"kIndexOrKey", 
	"kOptIndexName", 
	"kFulltextOrSpatial", 
	"kOptIndexOrKey", 
	"kOptConstraintSymbol", 
	"kReferenceDefinition", 
	"kCheckConstraintDefinition", 
	"kDataType", 
	"kOptNullNotNull", 
	"kOptVisibleInvisible", 
	"kOptAutoIncrement", 
	"kOptUniquePrimary", 
	"kOptColumnFormat", 
	"kOptStorage", 
	"kOptReferenceDefinition", 
	"kOptCheckConstraintDefinition", 
	"kColumnFormat", 
	"kStorage", 
	"kOptMatch", 
	"kOptOnDelete", 
	"kOptOnUpdate", 
	"kReferenceOption", 
	"kOptEnforced", 
	"kSymbol", 
	"kAssignment", 
	"kAsAlias", 
	"kOperand", 
	"kBetweenExpr", 
	"kExistsExpr", 
	"kInExpr", 
	"kCastExpr", 
	"kLogicExpr", 
	"kArrayIndex", 
	"kScalarExpr", 
	"kUnaryExpr", 
	"kBinaryExpr", 
	"kCaseExpr", 
	"kExtractExpr", 
	"kArrayExpr", 
	"kFunctionExpr", 
	"kExprColumnName", 
	"kLiteral", 
	"kCompExpr", 
	"kBinaryOp", 
	"kOptNot", 
	"kCaseList", 
	"kFunctionName", 
	"kOptOverClause", 
	"kOptDistinct", 
	"kCaseClause", 
	"kDatetimeField", 
	"kIntLiteral", 
	"kStringLiteral", 
	"kBoolLiteral", 
	"kNumLiteral", 
	"kFloatLiteral", 
	"kNumericType", 
	"kCharacterType", 
	"kCharacterConflicta", 
	"kOptLength", 
	"kUnknown", 
	"kUnknown0", 
	"kUnknown1", 
	"kUnknown2", 
	"kUnknown3", 
	"kUnknown4", 
	"kUnknown5", 
	"kUnknown6", 
	"kUnknown7", 
	"kUnknown8", 
	"kUnknown9", 
	"kUnknown10", 
	"kUnknown11", 
	"kUnknown12", 
	"kUnknown13", 
	"kUnknown14", 
	"kUnknown15", 
	"kUnknown16", 
	"kUnknown17", 
	"kUnknown18", 
	"kUnknown19", 
	"kUnknown20", 
	"kUnknown21", 
	"kUnknown22", 
	"kUnknown23", 
	"kUnknown24", 
	"kUnknown25", 
	"kUnknown26", 
	"kUnknown27", 
	"kUnknown28", 
	"kUnknown29", 
	"kUnknown30", 
	"kUnknown31", 
	"kUnknown32", 
	"kUnknown33", 
	"kUnknown34", 
	"kUnknown35", 
	"kUnknown36", 
	"kUnknown37", 
	"kUnknown38", 
	"kUnknown39", 
	"kUnknown40", 
	"kUnknown41", 
	"kUnknown42", 
	"kUnknown43", 
	"kUnknown44", 
	"kUnknown45", 
	"kUnknown46", 
	"kUnknown47", 
	"kUnknown48", 
	"kUnknown49", 
	"kUnknown50", 
	"kUnknown51", 
	"kUnknown52", 
	"kUnknown53", 
	"kUnknown54", 
	"kUnknown55", 
	"kUnknown56", 
	"kUnknown57", 
	"kUnknown58", 
	"kUnknown59", 
	"kUnknown60", 
	"kUnknown61", 
	"kUnknown62", 
	"kUnknown63", 
	"kUnknown64", 
	"kUnknown65", 
	"kUnknown66", 
	"kUnknown67", 
	"kUnknown68", 
	"kUnknown69", 
	"kUnknown70", 
	"kUnknown71", 
	"kUnknown72", 
	"kUnknown73", 
	"kUnknown74", 
	"kUnknown75", 
	"kUnknown76", 
	"kUnknown77", 
	"kUnknown78", 
	"kUnknown79", 
	"kUnknown80", 
	"kUnknown81", 
	"kUnknown82", 
	"kUnknown83", 
	"kUnknown84", 
	"kUnknown85", 
	"kUnknown86", 
	"kUnknown87", 
	"kUnknown88", 
	"kUnknown89", 
	"kUnknown90", 
	"kUnknown91", 
	"kUnknown92", 
	"kUnknown93", 
	"kUnknown94", 
	"kUnknown95", 
	"kUnknown96", 
	"kUnknown97", 
	"kUnknown98", 
	"kUnknown99", 
	"kUnknown100", 
	"kUnknown101", 
	"kUnknown102", 
	"kUnknown103", 
	"kUnknown104", 
	"kUnknown105", 
	"kUnknown106", 
	"kUnknown107", 
	"kUnknown108", 
	"kUnknown109", 
	"kUnknown110", 
	"kUnknown111", 
	"kUnknown112", 
	"kUnknown113", 
	"kUnknown114", 
	"kUnknown115", 
	"kUnknown116", 
}; 




#define ALLCLASS(V) \
	V(Program) \
	V(Stmtlist) \
	V(Stmt) \
	V(CreateStmt) \
	V(DropStmt) \
	V(SelectStmt) \
	V(UpdateStmt) \
	V(InsertStmt) \
	V(AlterStmt) \
	V(CreateTableStmt) \
	V(CreateIndexStmt) \
	V(CreateTriggerStmt) \
	V(CreateViewStmt) \
	V(DropIndexStmt) \
	V(DropTableStmt) \
	V(DropTriggerStmt) \
	V(DropViewStmt) \
	V(TableName) \
	V(AlterAction) \
	V(SelectNoParens) \
	V(SelectWithParens) \
	V(OptWithClause) \
	V(SelectClauseList) \
	V(OptOrderClause) \
	V(OptLimitClause) \
	V(SelectClause) \
	V(CombineClause) \
	V(OptAllOrDistinct) \
	V(SelectTarget) \
	V(OptFromClause) \
	V(OptWhereClause) \
	V(OptGroupClause) \
	V(OptWindowClause) \
	V(FromClause) \
	V(ExprList) \
	V(WindowClause) \
	V(WindowDefList) \
	V(WindowDef) \
	V(WindowName) \
	V(Window) \
	V(Identifier) \
	V(OptExistWindowName) \
	V(OptPartition) \
	V(OptFrameClause) \
	V(RangeOrRows) \
	V(FrameBoundStart) \
	V(FrameBoundEnd) \
	V(FrameBound) \
	V(Expr) \
	V(OptHavingClause) \
	V(WhereClause) \
	V(TableRef) \
	V(OptTablePrefix) \
	V(OptAsAlias) \
	V(OptIndex) \
	V(OptOn) \
	V(OptUsing) \
	V(ColumnName) \
	V(ColumnNameList) \
	V(JoinOp) \
	V(OptJoinType) \
	V(LimitClause) \
	V(OptLimitRowCount) \
	V(OrderItemList) \
	V(OrderItem) \
	V(OptOrderBehavior) \
	V(CteTableList) \
	V(CteTable) \
	V(CteTableName) \
	V(OptColumnNameListP) \
	V(OptTemp) \
	V(OptIfNotExist) \
	V(CreateDefinitionList) \
	V(OptTableOptionList) \
	V(OptCreateDefinitionListP) \
	V(OptIgnoreOrReplace) \
	V(OptAs) \
	V(LikeField) \
	V(OptIndexType) \
	V(IndexType) \
	V(OptIndexKeyword) \
	V(IndexName) \
	V(KeyPartList) \
	V(OptIndexOption) \
	V(OptExtraOption) \
	V(TriggerName) \
	V(TriggerActionTime) \
	V(TriggerEvents) \
	V(TriggerBody) \
	V(OptViewAlgorithm) \
	V(OptSqlSecurity) \
	V(ViewName) \
	V(OptCheckOption) \
	V(TableOptionList) \
	V(TableOption) \
	V(OptOpComma) \
	V(OptOpEqual) \
	V(InsertMethod) \
	V(RowFormat) \
	V(VisibleInvisible) \
	V(IndexAlgorithmOption) \
	V(LockOption) \
	V(OptIfExist) \
	V(TableNameList) \
	V(OptRestrictOrCascade) \
	V(OptPriority) \
	V(OptIgnore) \
	V(OptInto) \
	V(ValueOrValues) \
	V(SuperValueList) \
	V(OptAsRowAlias) \
	V(OptOnDuplicate) \
	V(AssignmentList) \
	V(OptLowPriority) \
	V(ValueList) \
	V(Value) \
	V(RowAlias) \
	V(OptColAlias) \
	V(ColAliasList) \
	V(ColAlias) \
	V(KeyPart) \
	V(OptColumn) \
	V(ColumnDef) \
	V(AlterConstantAction) \
	V(ColumnDefList) \
	V(CreateDefinition) \
	V(ColumnDefinition) \
	V(IndexOrKey) \
	V(OptIndexName) \
	V(FulltextOrSpatial) \
	V(OptIndexOrKey) \
	V(OptConstraintSymbol) \
	V(ReferenceDefinition) \
	V(CheckConstraintDefinition) \
	V(DataType) \
	V(OptNullNotNull) \
	V(OptVisibleInvisible) \
	V(OptAutoIncrement) \
	V(OptUniquePrimary) \
	V(OptColumnFormat) \
	V(OptStorage) \
	V(OptReferenceDefinition) \
	V(OptCheckConstraintDefinition) \
	V(ColumnFormat) \
	V(Storage) \
	V(OptMatch) \
	V(OptOnDelete) \
	V(OptOnUpdate) \
	V(ReferenceOption) \
	V(OptEnforced) \
	V(Symbol) \
	V(Assignment) \
	V(AsAlias) \
	V(Operand) \
	V(BetweenExpr) \
	V(ExistsExpr) \
	V(InExpr) \
	V(CastExpr) \
	V(LogicExpr) \
	V(ArrayIndex) \
	V(ScalarExpr) \
	V(UnaryExpr) \
	V(BinaryExpr) \
	V(CaseExpr) \
	V(ExtractExpr) \
	V(ArrayExpr) \
	V(FunctionExpr) \
	V(ExprColumnName) \
	V(Literal) \
	V(CompExpr) \
	V(BinaryOp) \
	V(OptNot) \
	V(CaseList) \
	V(FunctionName) \
	V(OptOverClause) \
	V(OptDistinct) \
	V(CaseClause) \
	V(DatetimeField) \
	V(IntLiteral) \
	V(StringLiteral) \
	V(BoolLiteral) \
	V(NumLiteral) \
	V(FloatLiteral) \
	V(NumericType) \
	V(CharacterType) \
	V(CharacterConflicta) \
	V(OptLength) \


/* MARK FOR GENERATE END: DO NOT REMOVE */
#define ALLDATATYPE(V) \
	V(DataWhatever) \
	V(DataTableName) \
	V(DataColumnName) \
	V(DataViewName) \
	V(DataFunctionName) \
	V(DataPragmaKey) \
	V(DataPragmaValue) \
	V(DataTableSpaceName) \
	V(DataSequenceName) \
	V(DataExtensionName) \
	V(DataRoleName) \
	V(DataSchemaName) \
	V(DataDatabase) \
	V(DataTriggerName) \
	V(DataWindowName) \
	V(DataTriggerFunction) \
	V(DataDomainName) \
	V(DataAliasName) \



#define SWITCHSTART \
    switch(case_idx_){ 

#define SWITCHEND \
    default: \
        \
        assert(0); \
        \
    }

#define CASESTART(idx) \
    case CASE##idx: {\


#define CASEEND \
            break;\
        }

#define TRANSLATESTART \
    IR *res = NULL; 

#define GENERATESTART(len) \
    case_idx_ = rand() % len ;

#define GENERATEEND \
    return ;

#define TRANSLATEEND \
     v_ir_collector.push_back(res); \
        \
     return res; 

#define TRANSLATEENDNOPUSH \
     return res; 

#define SAFETRANSLATE(a) \
    (assert(a != NULL), a->translate(v_ir_collector))

#define SAFEDELETE(a) \
    if(a != NULL) a->deep_delete()

#define SAFEDELETELIST(a) \
    for(auto _i: a) \
        SAFEDELETE(_i)

#define OP1(a) \
    new IROperator(a) 

#define OP2(a, b) \
    new IROperator(a,b)

#define OP3(a,b,c) \
    new IROperator(a,b,c)

#define OPSTART(a) \
    new IROperator(a)

#define OPMID(a) \
new IROperator("", a, "")

#define OPEND(a) \
    new IROperator("", "", a)

#define OP0() \
    new IROperator()


#define TRANSLATELIST(t, a, b) \
    res = SAFETRANSLATE(a[0]); \
    res = new IR(t, OP0(), res) ; \
    v_ir_collector.push_back(res); \
    for(int i = 1; i < a.size(); i++){ \
        IR * tmp = SAFETRANSLATE(a[i]); \
        res = new IR(t, OPMID(b), res, tmp); \
        v_ir_collector.push_back(res); \
    }

#define PUSH(a) \
    v_ir_collector.push_back(a)

#define MUTATESTART \
    IR * res = NULL;       \
    auto randint = get_rand_int(3); \
    switch(randint) { \

#define DOLEFT \
    case 0:{ \

#define DORIGHT \
    break; \
    } \
    \
    case 1: { \
     
#define DOBOTH  \
    break; }  \
    case 2:{ \

#define MUTATEEND \
    } \
    } \
    \
    return res; \
    
#endif
