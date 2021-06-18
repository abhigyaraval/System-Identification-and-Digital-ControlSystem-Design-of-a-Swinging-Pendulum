function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/S-Function Builder5 */
	this.urlHashMap["SPIPOTTestBkp:95"] = "msg=rtwMsg_notTraceable&block=SPIPOTTestBkp:95";
	/* <Root>/S-Function2 */
	this.urlHashMap["SPIPOTTestBkp:97"] = "SPIPOTTestBkp.c:35,40,58&SPIPOTTestBkp.h:45,51,54&SPIPOTTestBkp_data.c:26,29";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "SPIPOTTestBkp"};
	this.sidHashMap["SPIPOTTestBkp"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/S-Function Builder5"] = {sid: "SPIPOTTestBkp:95"};
	this.sidHashMap["SPIPOTTestBkp:95"] = {rtwname: "<Root>/S-Function Builder5"};
	this.rtwnameHashMap["<Root>/S-Function2"] = {sid: "SPIPOTTestBkp:97"};
	this.sidHashMap["SPIPOTTestBkp:97"] = {rtwname: "<Root>/S-Function2"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
