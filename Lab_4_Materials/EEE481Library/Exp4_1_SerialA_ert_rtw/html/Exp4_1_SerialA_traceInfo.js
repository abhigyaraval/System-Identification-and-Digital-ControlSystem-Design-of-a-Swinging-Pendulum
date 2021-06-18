function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Constant1 */
	this.urlHashMap["Exp4_1_SerialA:115"] = "Exp4_1_SerialA.c:130&Exp4_1_SerialA.h:83&Exp4_1_SerialA_data.c:38";
	/* <Root>/Pulse
Generator */
	this.urlHashMap["Exp4_1_SerialA:8"] = "Exp4_1_SerialA.c:81,93,170&Exp4_1_SerialA.h:65,71,74,77,80&Exp4_1_SerialA_data.c:26,29,32,35";
	/* <S1>/Data Type Conversion4 */
	this.urlHashMap["Exp4_1_SerialA:109"] = "Exp4_1_SerialA.c:106";
	/* <S1>/S-Function */
	this.urlHashMap["Exp4_1_SerialA:110"] = "Exp4_1_SerialA.c:102,125,185&Exp4_1_SerialA.h:54,62,92&Exp4_1_SerialA_data.c:47";
	/* <S2>/Data Type Conversion1 */
	this.urlHashMap["Exp4_1_SerialA:100"] = "Exp4_1_SerialA.c:95&Exp4_1_SerialA.h:53";
	/* <S2>/S-Function */
	this.urlHashMap["Exp4_1_SerialA:99"] = "Exp4_1_SerialA.c:98,121,173&Exp4_1_SerialA.h:61,89&Exp4_1_SerialA_data.c:44";
	/* <S3>/Data Type Conversion1 */
	this.urlHashMap["Exp4_1_SerialA:118:69"] = "Exp4_1_SerialA.c:131";
	/* <S3>/Data Type Conversion2 */
	this.urlHashMap["Exp4_1_SerialA:118:82"] = "msg=rtwMsg_SimulationReducedBlock&block=Exp4_1_SerialA:118:82";
	/* <S3>/S-Function */
	this.urlHashMap["Exp4_1_SerialA:118:80"] = "Exp4_1_SerialA.c:116,144,205&Exp4_1_SerialA.h:56,63,95,98&Exp4_1_SerialA_data.c:50,53";
	/* <S3>/Unit Delay */
	this.urlHashMap["Exp4_1_SerialA:118:90"] = "Exp4_1_SerialA.c:109,114,129,197,203&Exp4_1_SerialA.h:55,64,86&Exp4_1_SerialA_data.c:41";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Exp4_1_SerialA"};
	this.sidHashMap["Exp4_1_SerialA"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Exp4_1_SerialA:108"};
	this.sidHashMap["Exp4_1_SerialA:108"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "Exp4_1_SerialA:80"};
	this.sidHashMap["Exp4_1_SerialA:80"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "Exp4_1_SerialA:118"};
	this.sidHashMap["Exp4_1_SerialA:118"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<Root>/Constant1"] = {sid: "Exp4_1_SerialA:115"};
	this.sidHashMap["Exp4_1_SerialA:115"] = {rtwname: "<Root>/Constant1"};
	this.rtwnameHashMap["<Root>/Pulse Generator"] = {sid: "Exp4_1_SerialA:8"};
	this.sidHashMap["Exp4_1_SerialA:8"] = {rtwname: "<Root>/Pulse Generator"};
	this.rtwnameHashMap["<Root>/SerialRead1"] = {sid: "Exp4_1_SerialA:108"};
	this.sidHashMap["Exp4_1_SerialA:108"] = {rtwname: "<Root>/SerialRead1"};
	this.rtwnameHashMap["<Root>/SerialWrite"] = {sid: "Exp4_1_SerialA:80"};
	this.sidHashMap["Exp4_1_SerialA:80"] = {rtwname: "<Root>/SerialWrite"};
	this.rtwnameHashMap["<Root>/Subsystem"] = {sid: "Exp4_1_SerialA:118"};
	this.sidHashMap["Exp4_1_SerialA:118"] = {rtwname: "<Root>/Subsystem"};
	this.rtwnameHashMap["<S1>/Data Type Conversion4"] = {sid: "Exp4_1_SerialA:109"};
	this.sidHashMap["Exp4_1_SerialA:109"] = {rtwname: "<S1>/Data Type Conversion4"};
	this.rtwnameHashMap["<S1>/S-Function"] = {sid: "Exp4_1_SerialA:110"};
	this.sidHashMap["Exp4_1_SerialA:110"] = {rtwname: "<S1>/S-Function"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "Exp4_1_SerialA:111"};
	this.sidHashMap["Exp4_1_SerialA:111"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "Exp4_1_SerialA:81"};
	this.sidHashMap["Exp4_1_SerialA:81"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/Data Type Conversion1"] = {sid: "Exp4_1_SerialA:100"};
	this.sidHashMap["Exp4_1_SerialA:100"] = {rtwname: "<S2>/Data Type Conversion1"};
	this.rtwnameHashMap["<S2>/S-Function"] = {sid: "Exp4_1_SerialA:99"};
	this.sidHashMap["Exp4_1_SerialA:99"] = {rtwname: "<S2>/S-Function"};
	this.rtwnameHashMap["<S3>/In1"] = {sid: "Exp4_1_SerialA:118:66"};
	this.sidHashMap["Exp4_1_SerialA:118:66"] = {rtwname: "<S3>/In1"};
	this.rtwnameHashMap["<S3>/In2"] = {sid: "Exp4_1_SerialA:118:67"};
	this.sidHashMap["Exp4_1_SerialA:118:67"] = {rtwname: "<S3>/In2"};
	this.rtwnameHashMap["<S3>/In3"] = {sid: "Exp4_1_SerialA:118:68"};
	this.sidHashMap["Exp4_1_SerialA:118:68"] = {rtwname: "<S3>/In3"};
	this.rtwnameHashMap["<S3>/In4"] = {sid: "Exp4_1_SerialA:118:72"};
	this.sidHashMap["Exp4_1_SerialA:118:72"] = {rtwname: "<S3>/In4"};
	this.rtwnameHashMap["<S3>/In5"] = {sid: "Exp4_1_SerialA:118:73"};
	this.sidHashMap["Exp4_1_SerialA:118:73"] = {rtwname: "<S3>/In5"};
	this.rtwnameHashMap["<S3>/In6"] = {sid: "Exp4_1_SerialA:118:74"};
	this.sidHashMap["Exp4_1_SerialA:118:74"] = {rtwname: "<S3>/In6"};
	this.rtwnameHashMap["<S3>/In7"] = {sid: "Exp4_1_SerialA:118:75"};
	this.sidHashMap["Exp4_1_SerialA:118:75"] = {rtwname: "<S3>/In7"};
	this.rtwnameHashMap["<S3>/In8"] = {sid: "Exp4_1_SerialA:118:76"};
	this.sidHashMap["Exp4_1_SerialA:118:76"] = {rtwname: "<S3>/In8"};
	this.rtwnameHashMap["<S3>/In9"] = {sid: "Exp4_1_SerialA:118:77"};
	this.sidHashMap["Exp4_1_SerialA:118:77"] = {rtwname: "<S3>/In9"};
	this.rtwnameHashMap["<S3>/Data Type Conversion1"] = {sid: "Exp4_1_SerialA:118:69"};
	this.sidHashMap["Exp4_1_SerialA:118:69"] = {rtwname: "<S3>/Data Type Conversion1"};
	this.rtwnameHashMap["<S3>/Data Type Conversion2"] = {sid: "Exp4_1_SerialA:118:82"};
	this.sidHashMap["Exp4_1_SerialA:118:82"] = {rtwname: "<S3>/Data Type Conversion2"};
	this.rtwnameHashMap["<S3>/Demux"] = {sid: "Exp4_1_SerialA:118:89"};
	this.sidHashMap["Exp4_1_SerialA:118:89"] = {rtwname: "<S3>/Demux"};
	this.rtwnameHashMap["<S3>/Mux"] = {sid: "Exp4_1_SerialA:118:70"};
	this.sidHashMap["Exp4_1_SerialA:118:70"] = {rtwname: "<S3>/Mux"};
	this.rtwnameHashMap["<S3>/S-Function"] = {sid: "Exp4_1_SerialA:118:80"};
	this.sidHashMap["Exp4_1_SerialA:118:80"] = {rtwname: "<S3>/S-Function"};
	this.rtwnameHashMap["<S3>/Unit Delay"] = {sid: "Exp4_1_SerialA:118:90"};
	this.sidHashMap["Exp4_1_SerialA:118:90"] = {rtwname: "<S3>/Unit Delay"};
	this.rtwnameHashMap["<S3>/Out1"] = {sid: "Exp4_1_SerialA:118:81"};
	this.sidHashMap["Exp4_1_SerialA:118:81"] = {rtwname: "<S3>/Out1"};
	this.rtwnameHashMap["<S3>/Out2"] = {sid: "Exp4_1_SerialA:118:87"};
	this.sidHashMap["Exp4_1_SerialA:118:87"] = {rtwname: "<S3>/Out2"};
	this.rtwnameHashMap["<S3>/Out3"] = {sid: "Exp4_1_SerialA:118:88"};
	this.sidHashMap["Exp4_1_SerialA:118:88"] = {rtwname: "<S3>/Out3"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
