function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/S-Function Builder1 */
	this.urlHashMap["TestI2C:95"] = "msg=rtwMsg_notTraceable&block=TestI2C:95";
	/* <Root>/S-Function Builder9 */
	this.urlHashMap["TestI2C:6"] = "msg=rtwMsg_notTraceable&block=TestI2C:6";
	/* <Root>/S-Function1 */
	this.urlHashMap["TestI2C:5"] = "msg=rtwMsg_notTraceable&block=TestI2C:5";
	/* <S1>/S-Function Builder12 */
	this.urlHashMap["TestI2C:97:104"] = "TestI2C.c:33,36,52&TestI2C.h:45";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "TestI2C"};
	this.sidHashMap["TestI2C"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "TestI2C:97"};
	this.sidHashMap["TestI2C:97"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/S-Function Builder1"] = {sid: "TestI2C:95"};
	this.sidHashMap["TestI2C:95"] = {rtwname: "<Root>/S-Function Builder1"};
	this.rtwnameHashMap["<Root>/S-Function Builder9"] = {sid: "TestI2C:6"};
	this.sidHashMap["TestI2C:6"] = {rtwname: "<Root>/S-Function Builder9"};
	this.rtwnameHashMap["<Root>/S-Function1"] = {sid: "TestI2C:5"};
	this.sidHashMap["TestI2C:5"] = {rtwname: "<Root>/S-Function1"};
	this.rtwnameHashMap["<Root>/Subsystem2"] = {sid: "TestI2C:97"};
	this.sidHashMap["TestI2C:97"] = {rtwname: "<Root>/Subsystem2"};
	this.rtwnameHashMap["<S1>/S-Function Builder12"] = {sid: "TestI2C:97:104"};
	this.sidHashMap["TestI2C:97:104"] = {rtwname: "<S1>/S-Function Builder12"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
