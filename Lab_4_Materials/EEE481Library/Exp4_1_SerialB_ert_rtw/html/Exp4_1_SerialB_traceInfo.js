function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Constant1 */
	this.urlHashMap["Exp4_1_SerialB:127"] = "Exp4_1_SerialB.c:76&Exp4_1_SerialB.h:62&Exp4_1_SerialB_data.c:26";
	/* <S1>/Data Type Conversion4 */
	this.urlHashMap["Exp4_1_SerialB:129"] = "Exp4_1_SerialB.c:43,47";
	/* <S1>/S-Function */
	this.urlHashMap["Exp4_1_SerialB:130"] = "Exp4_1_SerialB.c:39,67,116&Exp4_1_SerialB.h:45,53,68&Exp4_1_SerialB_data.c:32";
	/* <S2>/Data Type Conversion1 */
	this.urlHashMap["Exp4_1_SerialB:134"] = "Exp4_1_SerialB.c:46&Exp4_1_SerialB.h:46";
	/* <S2>/S-Function */
	this.urlHashMap["Exp4_1_SerialB:135"] = "Exp4_1_SerialB.c:51,71,128&Exp4_1_SerialB.h:54,71&Exp4_1_SerialB_data.c:35";
	/* <S3>/Data Type Conversion1 */
	this.urlHashMap["Exp4_1_SerialB:137:69"] = "Exp4_1_SerialB.c:77";
	/* <S3>/Data Type Conversion2 */
	this.urlHashMap["Exp4_1_SerialB:137:82"] = "msg=rtwMsg_SimulationReducedBlock&block=Exp4_1_SerialB:137:82";
	/* <S3>/S-Function */
	this.urlHashMap["Exp4_1_SerialB:137:80"] = "Exp4_1_SerialB.c:62,91,148&Exp4_1_SerialB.h:48,55,74,77&Exp4_1_SerialB_data.c:38,41";
	/* <S3>/Unit Delay */
	this.urlHashMap["Exp4_1_SerialB:137:90"] = "Exp4_1_SerialB.c:55,60,75,140,146&Exp4_1_SerialB.h:47,56,65&Exp4_1_SerialB_data.c:29";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Exp4_1_SerialB"};
	this.sidHashMap["Exp4_1_SerialB"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Exp4_1_SerialB:128"};
	this.sidHashMap["Exp4_1_SerialB:128"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "Exp4_1_SerialB:132"};
	this.sidHashMap["Exp4_1_SerialB:132"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "Exp4_1_SerialB:137"};
	this.sidHashMap["Exp4_1_SerialB:137"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<Root>/Constant1"] = {sid: "Exp4_1_SerialB:127"};
	this.sidHashMap["Exp4_1_SerialB:127"] = {rtwname: "<Root>/Constant1"};
	this.rtwnameHashMap["<Root>/SerialRead1"] = {sid: "Exp4_1_SerialB:128"};
	this.sidHashMap["Exp4_1_SerialB:128"] = {rtwname: "<Root>/SerialRead1"};
	this.rtwnameHashMap["<Root>/SerialWrite"] = {sid: "Exp4_1_SerialB:132"};
	this.sidHashMap["Exp4_1_SerialB:132"] = {rtwname: "<Root>/SerialWrite"};
	this.rtwnameHashMap["<Root>/Subsystem"] = {sid: "Exp4_1_SerialB:137"};
	this.sidHashMap["Exp4_1_SerialB:137"] = {rtwname: "<Root>/Subsystem"};
	this.rtwnameHashMap["<S1>/Data Type Conversion4"] = {sid: "Exp4_1_SerialB:129"};
	this.sidHashMap["Exp4_1_SerialB:129"] = {rtwname: "<S1>/Data Type Conversion4"};
	this.rtwnameHashMap["<S1>/S-Function"] = {sid: "Exp4_1_SerialB:130"};
	this.sidHashMap["Exp4_1_SerialB:130"] = {rtwname: "<S1>/S-Function"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "Exp4_1_SerialB:131"};
	this.sidHashMap["Exp4_1_SerialB:131"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "Exp4_1_SerialB:133"};
	this.sidHashMap["Exp4_1_SerialB:133"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/Data Type Conversion1"] = {sid: "Exp4_1_SerialB:134"};
	this.sidHashMap["Exp4_1_SerialB:134"] = {rtwname: "<S2>/Data Type Conversion1"};
	this.rtwnameHashMap["<S2>/S-Function"] = {sid: "Exp4_1_SerialB:135"};
	this.sidHashMap["Exp4_1_SerialB:135"] = {rtwname: "<S2>/S-Function"};
	this.rtwnameHashMap["<S3>/In1"] = {sid: "Exp4_1_SerialB:137:66"};
	this.sidHashMap["Exp4_1_SerialB:137:66"] = {rtwname: "<S3>/In1"};
	this.rtwnameHashMap["<S3>/In2"] = {sid: "Exp4_1_SerialB:137:67"};
	this.sidHashMap["Exp4_1_SerialB:137:67"] = {rtwname: "<S3>/In2"};
	this.rtwnameHashMap["<S3>/In3"] = {sid: "Exp4_1_SerialB:137:68"};
	this.sidHashMap["Exp4_1_SerialB:137:68"] = {rtwname: "<S3>/In3"};
	this.rtwnameHashMap["<S3>/In4"] = {sid: "Exp4_1_SerialB:137:72"};
	this.sidHashMap["Exp4_1_SerialB:137:72"] = {rtwname: "<S3>/In4"};
	this.rtwnameHashMap["<S3>/In5"] = {sid: "Exp4_1_SerialB:137:73"};
	this.sidHashMap["Exp4_1_SerialB:137:73"] = {rtwname: "<S3>/In5"};
	this.rtwnameHashMap["<S3>/In6"] = {sid: "Exp4_1_SerialB:137:74"};
	this.sidHashMap["Exp4_1_SerialB:137:74"] = {rtwname: "<S3>/In6"};
	this.rtwnameHashMap["<S3>/In7"] = {sid: "Exp4_1_SerialB:137:75"};
	this.sidHashMap["Exp4_1_SerialB:137:75"] = {rtwname: "<S3>/In7"};
	this.rtwnameHashMap["<S3>/In8"] = {sid: "Exp4_1_SerialB:137:76"};
	this.sidHashMap["Exp4_1_SerialB:137:76"] = {rtwname: "<S3>/In8"};
	this.rtwnameHashMap["<S3>/In9"] = {sid: "Exp4_1_SerialB:137:77"};
	this.sidHashMap["Exp4_1_SerialB:137:77"] = {rtwname: "<S3>/In9"};
	this.rtwnameHashMap["<S3>/Data Type Conversion1"] = {sid: "Exp4_1_SerialB:137:69"};
	this.sidHashMap["Exp4_1_SerialB:137:69"] = {rtwname: "<S3>/Data Type Conversion1"};
	this.rtwnameHashMap["<S3>/Data Type Conversion2"] = {sid: "Exp4_1_SerialB:137:82"};
	this.sidHashMap["Exp4_1_SerialB:137:82"] = {rtwname: "<S3>/Data Type Conversion2"};
	this.rtwnameHashMap["<S3>/Demux"] = {sid: "Exp4_1_SerialB:137:89"};
	this.sidHashMap["Exp4_1_SerialB:137:89"] = {rtwname: "<S3>/Demux"};
	this.rtwnameHashMap["<S3>/Mux"] = {sid: "Exp4_1_SerialB:137:70"};
	this.sidHashMap["Exp4_1_SerialB:137:70"] = {rtwname: "<S3>/Mux"};
	this.rtwnameHashMap["<S3>/S-Function"] = {sid: "Exp4_1_SerialB:137:80"};
	this.sidHashMap["Exp4_1_SerialB:137:80"] = {rtwname: "<S3>/S-Function"};
	this.rtwnameHashMap["<S3>/Unit Delay"] = {sid: "Exp4_1_SerialB:137:90"};
	this.sidHashMap["Exp4_1_SerialB:137:90"] = {rtwname: "<S3>/Unit Delay"};
	this.rtwnameHashMap["<S3>/Out1"] = {sid: "Exp4_1_SerialB:137:81"};
	this.sidHashMap["Exp4_1_SerialB:137:81"] = {rtwname: "<S3>/Out1"};
	this.rtwnameHashMap["<S3>/Out2"] = {sid: "Exp4_1_SerialB:137:87"};
	this.sidHashMap["Exp4_1_SerialB:137:87"] = {rtwname: "<S3>/Out2"};
	this.rtwnameHashMap["<S3>/Out3"] = {sid: "Exp4_1_SerialB:137:88"};
	this.sidHashMap["Exp4_1_SerialB:137:88"] = {rtwname: "<S3>/Out3"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
