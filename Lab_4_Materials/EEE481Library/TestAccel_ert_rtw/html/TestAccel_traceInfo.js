function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Constant */
	this.urlHashMap["TestAccel:4"] = "msg=rtwMsg_notTraceable&block=TestAccel:4";
	/* <Root>/Data Type Conversion */
	this.urlHashMap["TestAccel:3"] = "msg=rtwMsg_notTraceable&block=TestAccel:3";
	/* <Root>/I2C Read */
	this.urlHashMap["TestAccel:7"] = "msg=rtwMsg_notTraceable&block=TestAccel:7";
	/* <Root>/Random
Number */
	this.urlHashMap["TestAccel:9"] = "msg=rtwMsg_notTraceable&block=TestAccel:9";
	/* <Root>/S-Function */
	this.urlHashMap["TestAccel:1"] = "msg=rtwMsg_notTraceable&block=TestAccel:1";
	/* <Root>/S-Function Builder1 */
	this.urlHashMap["TestAccel:8"] = "msg=rtwMsg_notTraceable&block=TestAccel:8";
	/* <Root>/S-Function Builder2 */
	this.urlHashMap["TestAccel:10"] = "msg=rtwMsg_notTraceable&block=TestAccel:10";
	/* <Root>/S-Function Builder4 */
	this.urlHashMap["TestAccel:15"] = "msg=rtwMsg_notTraceable&block=TestAccel:15";
	/* <Root>/S-Function Builder9 */
	this.urlHashMap["TestAccel:6"] = "TestAccel.c:36,42,65&TestAccel.h:45,46,47,52,58,61&TestAccel_data.c:26,29";
	/* <Root>/S-Function1 */
	this.urlHashMap["TestAccel:5"] = "msg=rtwMsg_notTraceable&block=TestAccel:5";
	/* <S1>/Data Type Conversion1 */
	this.urlHashMap["TestAccel:61:69"] = "msg=rtwMsg_notTraceable&block=TestAccel:61:69";
	/* <S1>/Data Type Conversion2 */
	this.urlHashMap["TestAccel:61:82"] = "msg=rtwMsg_notTraceable&block=TestAccel:61:82";
	/* <S1>/S-Function */
	this.urlHashMap["TestAccel:61:80"] = "msg=rtwMsg_notTraceable&block=TestAccel:61:80";
	/* <S1>/Unit Delay */
	this.urlHashMap["TestAccel:61:90"] = "msg=rtwMsg_notTraceable&block=TestAccel:61:90";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "TestAccel"};
	this.sidHashMap["TestAccel"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "TestAccel:61"};
	this.sidHashMap["TestAccel:61"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "TestAccel:4"};
	this.sidHashMap["TestAccel:4"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Data Type Conversion"] = {sid: "TestAccel:3"};
	this.sidHashMap["TestAccel:3"] = {rtwname: "<Root>/Data Type Conversion"};
	this.rtwnameHashMap["<Root>/I2C Read"] = {sid: "TestAccel:7"};
	this.sidHashMap["TestAccel:7"] = {rtwname: "<Root>/I2C Read"};
	this.rtwnameHashMap["<Root>/Random Number"] = {sid: "TestAccel:9"};
	this.sidHashMap["TestAccel:9"] = {rtwname: "<Root>/Random Number"};
	this.rtwnameHashMap["<Root>/S-Function"] = {sid: "TestAccel:1"};
	this.sidHashMap["TestAccel:1"] = {rtwname: "<Root>/S-Function"};
	this.rtwnameHashMap["<Root>/S-Function Builder1"] = {sid: "TestAccel:8"};
	this.sidHashMap["TestAccel:8"] = {rtwname: "<Root>/S-Function Builder1"};
	this.rtwnameHashMap["<Root>/S-Function Builder2"] = {sid: "TestAccel:10"};
	this.sidHashMap["TestAccel:10"] = {rtwname: "<Root>/S-Function Builder2"};
	this.rtwnameHashMap["<Root>/S-Function Builder4"] = {sid: "TestAccel:15"};
	this.sidHashMap["TestAccel:15"] = {rtwname: "<Root>/S-Function Builder4"};
	this.rtwnameHashMap["<Root>/S-Function Builder9"] = {sid: "TestAccel:6"};
	this.sidHashMap["TestAccel:6"] = {rtwname: "<Root>/S-Function Builder9"};
	this.rtwnameHashMap["<Root>/S-Function1"] = {sid: "TestAccel:5"};
	this.sidHashMap["TestAccel:5"] = {rtwname: "<Root>/S-Function1"};
	this.rtwnameHashMap["<Root>/Subsystem"] = {sid: "TestAccel:61"};
	this.sidHashMap["TestAccel:61"] = {rtwname: "<Root>/Subsystem"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "TestAccel:61:66"};
	this.sidHashMap["TestAccel:61:66"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/In2"] = {sid: "TestAccel:61:67"};
	this.sidHashMap["TestAccel:61:67"] = {rtwname: "<S1>/In2"};
	this.rtwnameHashMap["<S1>/In3"] = {sid: "TestAccel:61:68"};
	this.sidHashMap["TestAccel:61:68"] = {rtwname: "<S1>/In3"};
	this.rtwnameHashMap["<S1>/In4"] = {sid: "TestAccel:61:72"};
	this.sidHashMap["TestAccel:61:72"] = {rtwname: "<S1>/In4"};
	this.rtwnameHashMap["<S1>/In5"] = {sid: "TestAccel:61:73"};
	this.sidHashMap["TestAccel:61:73"] = {rtwname: "<S1>/In5"};
	this.rtwnameHashMap["<S1>/In6"] = {sid: "TestAccel:61:74"};
	this.sidHashMap["TestAccel:61:74"] = {rtwname: "<S1>/In6"};
	this.rtwnameHashMap["<S1>/In7"] = {sid: "TestAccel:61:75"};
	this.sidHashMap["TestAccel:61:75"] = {rtwname: "<S1>/In7"};
	this.rtwnameHashMap["<S1>/In8"] = {sid: "TestAccel:61:76"};
	this.sidHashMap["TestAccel:61:76"] = {rtwname: "<S1>/In8"};
	this.rtwnameHashMap["<S1>/In9"] = {sid: "TestAccel:61:77"};
	this.sidHashMap["TestAccel:61:77"] = {rtwname: "<S1>/In9"};
	this.rtwnameHashMap["<S1>/Data Type Conversion1"] = {sid: "TestAccel:61:69"};
	this.sidHashMap["TestAccel:61:69"] = {rtwname: "<S1>/Data Type Conversion1"};
	this.rtwnameHashMap["<S1>/Data Type Conversion2"] = {sid: "TestAccel:61:82"};
	this.sidHashMap["TestAccel:61:82"] = {rtwname: "<S1>/Data Type Conversion2"};
	this.rtwnameHashMap["<S1>/Demux"] = {sid: "TestAccel:61:89"};
	this.sidHashMap["TestAccel:61:89"] = {rtwname: "<S1>/Demux"};
	this.rtwnameHashMap["<S1>/Mux"] = {sid: "TestAccel:61:70"};
	this.sidHashMap["TestAccel:61:70"] = {rtwname: "<S1>/Mux"};
	this.rtwnameHashMap["<S1>/S-Function"] = {sid: "TestAccel:61:80"};
	this.sidHashMap["TestAccel:61:80"] = {rtwname: "<S1>/S-Function"};
	this.rtwnameHashMap["<S1>/Unit Delay"] = {sid: "TestAccel:61:90"};
	this.sidHashMap["TestAccel:61:90"] = {rtwname: "<S1>/Unit Delay"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "TestAccel:61:81"};
	this.sidHashMap["TestAccel:61:81"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S1>/Out2"] = {sid: "TestAccel:61:87"};
	this.sidHashMap["TestAccel:61:87"] = {rtwname: "<S1>/Out2"};
	this.rtwnameHashMap["<S1>/Out3"] = {sid: "TestAccel:61:88"};
	this.sidHashMap["TestAccel:61:88"] = {rtwname: "<S1>/Out3"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
