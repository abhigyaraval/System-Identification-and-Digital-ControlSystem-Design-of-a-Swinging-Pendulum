function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Data Type Conversion */
	this.urlHashMap["pHSystem:3"] = "msg=rtwMsg_reducedBlock&block=pHSystem:3";
	/* <Root>/Quantizer */
	this.urlHashMap["pHSystem:10"] = "pHSystem.c:187&pHSystem.h:54,89&pHSystem_data.c:50";
	/* <Root>/Random
Number */
	this.urlHashMap["pHSystem:9"] = "pHSystem.c:182,206,293,317&pHSystem.h:61,62,77,80,83&pHSystem_data.c:38,41,44";
	/* <Root>/S-Function */
	this.urlHashMap["pHSystem:1"] = "pHSystem.c:202,213,322&pHSystem.h:60,92&pHSystem_data.c:53";
	/* <Root>/Scope */
	this.urlHashMap["pHSystem:13"] = "msg=rtwMsg_reducedBlock&block=pHSystem:13";
	/* <Root>/Sum */
	this.urlHashMap["pHSystem:4"] = "pHSystem.c:181&pHSystem.h:53";
	/* <Root>/Sum1 */
	this.urlHashMap["pHSystem:12"] = "pHSystem.c:193";
	/* <Root>/Unit Delay */
	this.urlHashMap["pHSystem:6"] = "pHSystem.c:183,210,319&pHSystem.h:59,86&pHSystem_data.c:47";
	/* <S1>/Clock */
	this.urlHashMap["pHSystem:11:167"] = "pHSystem.c:188";
	/* <S1>/Constant */
	this.urlHashMap["pHSystem:11:168"] = "pHSystem.c:189&pHSystem.h:71&pHSystem_data.c:30";
	/* <S1>/Look-Up Table1 */
	this.urlHashMap["pHSystem:11:223"] = "pHSystem.c:190&pHSystem.h:68,74&pHSystem_data.c:26,34";
	/* <S1>/Math
Function */
	this.urlHashMap["pHSystem:11:170"] = "pHSystem.c:191";
	/* <S1>/Output */
	this.urlHashMap["pHSystem:11:171"] = "msg=rtwMsg_reducedBlock&block=pHSystem:11:171";
	/* <S1>/Sum */
	this.urlHashMap["pHSystem:11:172"] = "pHSystem.c:194";
	/* <S1>/startTime */
	this.urlHashMap["pHSystem:11:173"] = "pHSystem.c:192";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "pHSystem"};
	this.sidHashMap["pHSystem"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "pHSystem:11"};
	this.sidHashMap["pHSystem:11"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Data Type Conversion"] = {sid: "pHSystem:3"};
	this.sidHashMap["pHSystem:3"] = {rtwname: "<Root>/Data Type Conversion"};
	this.rtwnameHashMap["<Root>/Quantizer"] = {sid: "pHSystem:10"};
	this.sidHashMap["pHSystem:10"] = {rtwname: "<Root>/Quantizer"};
	this.rtwnameHashMap["<Root>/Random Number"] = {sid: "pHSystem:9"};
	this.sidHashMap["pHSystem:9"] = {rtwname: "<Root>/Random Number"};
	this.rtwnameHashMap["<Root>/Repeating Sequence"] = {sid: "pHSystem:11"};
	this.sidHashMap["pHSystem:11"] = {rtwname: "<Root>/Repeating Sequence"};
	this.rtwnameHashMap["<Root>/S-Function"] = {sid: "pHSystem:1"};
	this.sidHashMap["pHSystem:1"] = {rtwname: "<Root>/S-Function"};
	this.rtwnameHashMap["<Root>/Scope"] = {sid: "pHSystem:13"};
	this.sidHashMap["pHSystem:13"] = {rtwname: "<Root>/Scope"};
	this.rtwnameHashMap["<Root>/Sum"] = {sid: "pHSystem:4"};
	this.sidHashMap["pHSystem:4"] = {rtwname: "<Root>/Sum"};
	this.rtwnameHashMap["<Root>/Sum1"] = {sid: "pHSystem:12"};
	this.sidHashMap["pHSystem:12"] = {rtwname: "<Root>/Sum1"};
	this.rtwnameHashMap["<Root>/Unit Delay"] = {sid: "pHSystem:6"};
	this.sidHashMap["pHSystem:6"] = {rtwname: "<Root>/Unit Delay"};
	this.rtwnameHashMap["<S1>/Clock"] = {sid: "pHSystem:11:167"};
	this.sidHashMap["pHSystem:11:167"] = {rtwname: "<S1>/Clock"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "pHSystem:11:168"};
	this.sidHashMap["pHSystem:11:168"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/Look-Up Table1"] = {sid: "pHSystem:11:223"};
	this.sidHashMap["pHSystem:11:223"] = {rtwname: "<S1>/Look-Up Table1"};
	this.rtwnameHashMap["<S1>/Math Function"] = {sid: "pHSystem:11:170"};
	this.sidHashMap["pHSystem:11:170"] = {rtwname: "<S1>/Math Function"};
	this.rtwnameHashMap["<S1>/Output"] = {sid: "pHSystem:11:171"};
	this.sidHashMap["pHSystem:11:171"] = {rtwname: "<S1>/Output"};
	this.rtwnameHashMap["<S1>/Sum"] = {sid: "pHSystem:11:172"};
	this.sidHashMap["pHSystem:11:172"] = {rtwname: "<S1>/Sum"};
	this.rtwnameHashMap["<S1>/startTime"] = {sid: "pHSystem:11:173"};
	this.sidHashMap["pHSystem:11:173"] = {rtwname: "<S1>/startTime"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "pHSystem:11:174"};
	this.sidHashMap["pHSystem:11:174"] = {rtwname: "<S1>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
