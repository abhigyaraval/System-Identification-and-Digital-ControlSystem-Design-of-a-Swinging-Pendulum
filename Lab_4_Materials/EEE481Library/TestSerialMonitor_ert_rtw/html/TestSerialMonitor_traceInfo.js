function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Clock */
	this.urlHashMap["TestSerialMonitor:15"] = "TestSerialMonitor.c:60";
	/* <Root>/Step */
	this.urlHashMap["TestSerialMonitor:2"] = "TestSerialMonitor.c:44,65&TestSerialMonitor.h:67,70,73&TestSerialMonitor_data.c:26,29,32";
	/* <Root>/Step1 */
	this.urlHashMap["TestSerialMonitor:3"] = "TestSerialMonitor.c:47,87&TestSerialMonitor.h:76,79,82&TestSerialMonitor_data.c:35,38,41";
	/* <Root>/Step3 */
	this.urlHashMap["TestSerialMonitor:5"] = "TestSerialMonitor.c:50,109&TestSerialMonitor.h:85,88,91&TestSerialMonitor_data.c:44,47,50";
	/* <Root>/Step4 */
	this.urlHashMap["TestSerialMonitor:6"] = "TestSerialMonitor.c:53,98&TestSerialMonitor.h:94,97,100&TestSerialMonitor_data.c:53,56,59";
	/* <Root>/Step6 */
	this.urlHashMap["TestSerialMonitor:8"] = "TestSerialMonitor.c:56,76&TestSerialMonitor.h:103,106,109&TestSerialMonitor_data.c:62,65,68";
	/* <Root>/Unit Delay */
	this.urlHashMap["TestSerialMonitor:11"] = "TestSerialMonitor.c:121,163,249&TestSerialMonitor.h:59,118&TestSerialMonitor_data.c:77";
	/* <Root>/Unit Delay1 */
	this.urlHashMap["TestSerialMonitor:12"] = "TestSerialMonitor.c:122,159,245&TestSerialMonitor.h:58,115&TestSerialMonitor_data.c:74";
	/* <Root>/Unit Delay2 */
	this.urlHashMap["TestSerialMonitor:13"] = "TestSerialMonitor.c:123,155,241&TestSerialMonitor.h:57,112&TestSerialMonitor_data.c:71";
	/* <S1>/Data Type Conversion1 */
	this.urlHashMap["TestSerialMonitor:1:69"] = "TestSerialMonitor.c:59,67,71,78,82,89,93,100,104,111,115,120&TestSerialMonitor.h:50";
	/* <S1>/Data Type Conversion2 */
	this.urlHashMap["TestSerialMonitor:1:82"] = "TestSerialMonitor.c:146&TestSerialMonitor.h:51";
	/* <S1>/S-Function */
	this.urlHashMap["TestSerialMonitor:1:80"] = "TestSerialMonitor.c:140,175,261&TestSerialMonitor.h:52,60,124,127&TestSerialMonitor_data.c:83,86";
	/* <S1>/Unit Delay */
	this.urlHashMap["TestSerialMonitor:1:90"] = "TestSerialMonitor.c:132,138,167,173,253,259&TestSerialMonitor.h:49,61,121&TestSerialMonitor_data.c:80";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "TestSerialMonitor"};
	this.sidHashMap["TestSerialMonitor"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "TestSerialMonitor:1"};
	this.sidHashMap["TestSerialMonitor:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Clock"] = {sid: "TestSerialMonitor:15"};
	this.sidHashMap["TestSerialMonitor:15"] = {rtwname: "<Root>/Clock"};
	this.rtwnameHashMap["<Root>/Step"] = {sid: "TestSerialMonitor:2"};
	this.sidHashMap["TestSerialMonitor:2"] = {rtwname: "<Root>/Step"};
	this.rtwnameHashMap["<Root>/Step1"] = {sid: "TestSerialMonitor:3"};
	this.sidHashMap["TestSerialMonitor:3"] = {rtwname: "<Root>/Step1"};
	this.rtwnameHashMap["<Root>/Step3"] = {sid: "TestSerialMonitor:5"};
	this.sidHashMap["TestSerialMonitor:5"] = {rtwname: "<Root>/Step3"};
	this.rtwnameHashMap["<Root>/Step4"] = {sid: "TestSerialMonitor:6"};
	this.sidHashMap["TestSerialMonitor:6"] = {rtwname: "<Root>/Step4"};
	this.rtwnameHashMap["<Root>/Step6"] = {sid: "TestSerialMonitor:8"};
	this.sidHashMap["TestSerialMonitor:8"] = {rtwname: "<Root>/Step6"};
	this.rtwnameHashMap["<Root>/Subsystem"] = {sid: "TestSerialMonitor:1"};
	this.sidHashMap["TestSerialMonitor:1"] = {rtwname: "<Root>/Subsystem"};
	this.rtwnameHashMap["<Root>/Unit Delay"] = {sid: "TestSerialMonitor:11"};
	this.sidHashMap["TestSerialMonitor:11"] = {rtwname: "<Root>/Unit Delay"};
	this.rtwnameHashMap["<Root>/Unit Delay1"] = {sid: "TestSerialMonitor:12"};
	this.sidHashMap["TestSerialMonitor:12"] = {rtwname: "<Root>/Unit Delay1"};
	this.rtwnameHashMap["<Root>/Unit Delay2"] = {sid: "TestSerialMonitor:13"};
	this.sidHashMap["TestSerialMonitor:13"] = {rtwname: "<Root>/Unit Delay2"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "TestSerialMonitor:1:66"};
	this.sidHashMap["TestSerialMonitor:1:66"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/In2"] = {sid: "TestSerialMonitor:1:67"};
	this.sidHashMap["TestSerialMonitor:1:67"] = {rtwname: "<S1>/In2"};
	this.rtwnameHashMap["<S1>/In3"] = {sid: "TestSerialMonitor:1:68"};
	this.sidHashMap["TestSerialMonitor:1:68"] = {rtwname: "<S1>/In3"};
	this.rtwnameHashMap["<S1>/In4"] = {sid: "TestSerialMonitor:1:72"};
	this.sidHashMap["TestSerialMonitor:1:72"] = {rtwname: "<S1>/In4"};
	this.rtwnameHashMap["<S1>/In5"] = {sid: "TestSerialMonitor:1:73"};
	this.sidHashMap["TestSerialMonitor:1:73"] = {rtwname: "<S1>/In5"};
	this.rtwnameHashMap["<S1>/In6"] = {sid: "TestSerialMonitor:1:74"};
	this.sidHashMap["TestSerialMonitor:1:74"] = {rtwname: "<S1>/In6"};
	this.rtwnameHashMap["<S1>/In7"] = {sid: "TestSerialMonitor:1:75"};
	this.sidHashMap["TestSerialMonitor:1:75"] = {rtwname: "<S1>/In7"};
	this.rtwnameHashMap["<S1>/In8"] = {sid: "TestSerialMonitor:1:76"};
	this.sidHashMap["TestSerialMonitor:1:76"] = {rtwname: "<S1>/In8"};
	this.rtwnameHashMap["<S1>/In9"] = {sid: "TestSerialMonitor:1:77"};
	this.sidHashMap["TestSerialMonitor:1:77"] = {rtwname: "<S1>/In9"};
	this.rtwnameHashMap["<S1>/Data Type Conversion1"] = {sid: "TestSerialMonitor:1:69"};
	this.sidHashMap["TestSerialMonitor:1:69"] = {rtwname: "<S1>/Data Type Conversion1"};
	this.rtwnameHashMap["<S1>/Data Type Conversion2"] = {sid: "TestSerialMonitor:1:82"};
	this.sidHashMap["TestSerialMonitor:1:82"] = {rtwname: "<S1>/Data Type Conversion2"};
	this.rtwnameHashMap["<S1>/Demux"] = {sid: "TestSerialMonitor:1:89"};
	this.sidHashMap["TestSerialMonitor:1:89"] = {rtwname: "<S1>/Demux"};
	this.rtwnameHashMap["<S1>/Mux"] = {sid: "TestSerialMonitor:1:70"};
	this.sidHashMap["TestSerialMonitor:1:70"] = {rtwname: "<S1>/Mux"};
	this.rtwnameHashMap["<S1>/S-Function"] = {sid: "TestSerialMonitor:1:80"};
	this.sidHashMap["TestSerialMonitor:1:80"] = {rtwname: "<S1>/S-Function"};
	this.rtwnameHashMap["<S1>/Unit Delay"] = {sid: "TestSerialMonitor:1:90"};
	this.sidHashMap["TestSerialMonitor:1:90"] = {rtwname: "<S1>/Unit Delay"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "TestSerialMonitor:1:81"};
	this.sidHashMap["TestSerialMonitor:1:81"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S1>/Out2"] = {sid: "TestSerialMonitor:1:87"};
	this.sidHashMap["TestSerialMonitor:1:87"] = {rtwname: "<S1>/Out2"};
	this.rtwnameHashMap["<S1>/Out3"] = {sid: "TestSerialMonitor:1:88"};
	this.sidHashMap["TestSerialMonitor:1:88"] = {rtwname: "<S1>/Out3"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
