function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Constant */
	this.urlHashMap["TestDAC:95"] = "TestDAC.h:51&TestDAC_data.c:26";
	/* <Root>/S-Function Builder9 */
	this.urlHashMap["TestDAC:6"] = "msg=&block=TestDAC:6";
	/* <Root>/Subsystem3 */
	this.urlHashMap["TestDAC:97"] = "msg=&block=TestDAC:97";
	/* <S1>/DACValue */
	this.urlHashMap["TestDAC:97:107"] = "msg=&block=TestDAC:97:107";
	/* <S1>/S-Function Builder9 */
	this.urlHashMap["TestDAC:97:105"] = "TestDAC.c:33,37,54&TestDAC.h:45,54&TestDAC_data.c:29";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "TestDAC"};
	this.sidHashMap["TestDAC"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "TestDAC:97"};
	this.sidHashMap["TestDAC:97"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "TestDAC:95"};
	this.sidHashMap["TestDAC:95"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/S-Function Builder9"] = {sid: "TestDAC:6"};
	this.sidHashMap["TestDAC:6"] = {rtwname: "<Root>/S-Function Builder9"};
	this.rtwnameHashMap["<Root>/Subsystem3"] = {sid: "TestDAC:97"};
	this.sidHashMap["TestDAC:97"] = {rtwname: "<Root>/Subsystem3"};
	this.rtwnameHashMap["<S1>/DACValue"] = {sid: "TestDAC:97:107"};
	this.sidHashMap["TestDAC:97:107"] = {rtwname: "<S1>/DACValue"};
	this.rtwnameHashMap["<S1>/S-Function Builder9"] = {sid: "TestDAC:97:105"};
	this.sidHashMap["TestDAC:97:105"] = {rtwname: "<S1>/S-Function Builder9"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
