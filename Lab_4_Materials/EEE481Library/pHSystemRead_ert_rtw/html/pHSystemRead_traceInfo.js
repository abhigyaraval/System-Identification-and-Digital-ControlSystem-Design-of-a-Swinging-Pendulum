function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Clock */
	this.urlHashMap["pHSystemRead:9"] = "pHSystemRead.c:43";
	/* <Root>/MATLAB Function */
	this.urlHashMap["pHSystemRead:10"] = "pHSystemRead.c:46,72&pHSystemRead.h:52,53";
	/* <Root>/S-Function1 */
	this.urlHashMap["pHSystemRead:19"] = "msg=rtwMsg_notTraceable&block=pHSystemRead:19";
	/* <S1>:1 */
	this.urlHashMap["pHSystemRead:10:1"] = "pHSystemRead.c:47";
	/* <S1>:1:3 */
	this.urlHashMap["pHSystemRead:10:1:3"] = "pHSystemRead.c:48";
	/* <S1>:1:4 */
	this.urlHashMap["pHSystemRead:10:1:4"] = "pHSystemRead.c:50";
	/* <S1>:1:5 */
	this.urlHashMap["pHSystemRead:10:1:5"] = "pHSystemRead.c:53";
	/* <S1>:1:6 */
	this.urlHashMap["pHSystemRead:10:1:6"] = "pHSystemRead.c:54";
	/* <S1>:1:7 */
	this.urlHashMap["pHSystemRead:10:1:7"] = "pHSystemRead.c:57";
	/* <S1>:1:8 */
	this.urlHashMap["pHSystemRead:10:1:8"] = "pHSystemRead.c:58";
	/* <S1>:1:10 */
	this.urlHashMap["pHSystemRead:10:1:10"] = "pHSystemRead.c:62";
	/* <S1>:1:11 */
	this.urlHashMap["pHSystemRead:10:1:11"] = "pHSystemRead.c:64";
	/* <S1>:1:12 */
	this.urlHashMap["pHSystemRead:10:1:12"] = "pHSystemRead.c:67";
	/* <S1>:1:13 */
	this.urlHashMap["pHSystemRead:10:1:13"] = "pHSystemRead.c:68";
	/* <S2>/Data Type Conversion1 */
	this.urlHashMap["pHSystemRead:14:69"] = "pHSystemRead.c:79";
	/* <S2>/Data Type Conversion2 */
	this.urlHashMap["pHSystemRead:14:82"] = "msg=rtwMsg_SimulationReducedBlock&block=pHSystemRead:14:82";
	/* <S2>/S-Function */
	this.urlHashMap["pHSystemRead:14:80"] = "pHSystemRead.c:97,119,203&pHSystemRead.h:51,59,72,75&pHSystemRead_data.c:32,35";
	/* <S2>/Unit Delay */
	this.urlHashMap["pHSystemRead:14:90"] = "pHSystemRead.c:90,95,112,117,195,201&pHSystemRead.h:50,60,66&pHSystemRead_data.c:26";
	/* <S3>/S-Function3 */
	this.urlHashMap["pHSystemRead:18:94"] = "pHSystemRead.c:74,106,182&pHSystemRead.h:49,58,69&pHSystemRead_data.c:29";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "pHSystemRead"};
	this.sidHashMap["pHSystemRead"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "pHSystemRead:10"};
	this.sidHashMap["pHSystemRead:10"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "pHSystemRead:14"};
	this.sidHashMap["pHSystemRead:14"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "pHSystemRead:18"};
	this.sidHashMap["pHSystemRead:18"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<Root>/Clock"] = {sid: "pHSystemRead:9"};
	this.sidHashMap["pHSystemRead:9"] = {rtwname: "<Root>/Clock"};
	this.rtwnameHashMap["<Root>/MATLAB Function"] = {sid: "pHSystemRead:10"};
	this.sidHashMap["pHSystemRead:10"] = {rtwname: "<Root>/MATLAB Function"};
	this.rtwnameHashMap["<Root>/S-Function1"] = {sid: "pHSystemRead:19"};
	this.sidHashMap["pHSystemRead:19"] = {rtwname: "<Root>/S-Function1"};
	this.rtwnameHashMap["<Root>/Subsystem"] = {sid: "pHSystemRead:14"};
	this.sidHashMap["pHSystemRead:14"] = {rtwname: "<Root>/Subsystem"};
	this.rtwnameHashMap["<Root>/Subsystem1"] = {sid: "pHSystemRead:18"};
	this.sidHashMap["pHSystemRead:18"] = {rtwname: "<Root>/Subsystem1"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "pHSystemRead:10:1"};
	this.sidHashMap["pHSystemRead:10:1"] = {rtwname: "<S1>:1"};
	this.rtwnameHashMap["<S1>:1:3"] = {sid: "pHSystemRead:10:1:3"};
	this.sidHashMap["pHSystemRead:10:1:3"] = {rtwname: "<S1>:1:3"};
	this.rtwnameHashMap["<S1>:1:4"] = {sid: "pHSystemRead:10:1:4"};
	this.sidHashMap["pHSystemRead:10:1:4"] = {rtwname: "<S1>:1:4"};
	this.rtwnameHashMap["<S1>:1:5"] = {sid: "pHSystemRead:10:1:5"};
	this.sidHashMap["pHSystemRead:10:1:5"] = {rtwname: "<S1>:1:5"};
	this.rtwnameHashMap["<S1>:1:6"] = {sid: "pHSystemRead:10:1:6"};
	this.sidHashMap["pHSystemRead:10:1:6"] = {rtwname: "<S1>:1:6"};
	this.rtwnameHashMap["<S1>:1:7"] = {sid: "pHSystemRead:10:1:7"};
	this.sidHashMap["pHSystemRead:10:1:7"] = {rtwname: "<S1>:1:7"};
	this.rtwnameHashMap["<S1>:1:8"] = {sid: "pHSystemRead:10:1:8"};
	this.sidHashMap["pHSystemRead:10:1:8"] = {rtwname: "<S1>:1:8"};
	this.rtwnameHashMap["<S1>:1:10"] = {sid: "pHSystemRead:10:1:10"};
	this.sidHashMap["pHSystemRead:10:1:10"] = {rtwname: "<S1>:1:10"};
	this.rtwnameHashMap["<S1>:1:11"] = {sid: "pHSystemRead:10:1:11"};
	this.sidHashMap["pHSystemRead:10:1:11"] = {rtwname: "<S1>:1:11"};
	this.rtwnameHashMap["<S1>:1:12"] = {sid: "pHSystemRead:10:1:12"};
	this.sidHashMap["pHSystemRead:10:1:12"] = {rtwname: "<S1>:1:12"};
	this.rtwnameHashMap["<S1>:1:13"] = {sid: "pHSystemRead:10:1:13"};
	this.sidHashMap["pHSystemRead:10:1:13"] = {rtwname: "<S1>:1:13"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "pHSystemRead:14:66"};
	this.sidHashMap["pHSystemRead:14:66"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/In2"] = {sid: "pHSystemRead:14:67"};
	this.sidHashMap["pHSystemRead:14:67"] = {rtwname: "<S2>/In2"};
	this.rtwnameHashMap["<S2>/In3"] = {sid: "pHSystemRead:14:68"};
	this.sidHashMap["pHSystemRead:14:68"] = {rtwname: "<S2>/In3"};
	this.rtwnameHashMap["<S2>/In4"] = {sid: "pHSystemRead:14:72"};
	this.sidHashMap["pHSystemRead:14:72"] = {rtwname: "<S2>/In4"};
	this.rtwnameHashMap["<S2>/In5"] = {sid: "pHSystemRead:14:73"};
	this.sidHashMap["pHSystemRead:14:73"] = {rtwname: "<S2>/In5"};
	this.rtwnameHashMap["<S2>/In6"] = {sid: "pHSystemRead:14:74"};
	this.sidHashMap["pHSystemRead:14:74"] = {rtwname: "<S2>/In6"};
	this.rtwnameHashMap["<S2>/In7"] = {sid: "pHSystemRead:14:75"};
	this.sidHashMap["pHSystemRead:14:75"] = {rtwname: "<S2>/In7"};
	this.rtwnameHashMap["<S2>/In8"] = {sid: "pHSystemRead:14:76"};
	this.sidHashMap["pHSystemRead:14:76"] = {rtwname: "<S2>/In8"};
	this.rtwnameHashMap["<S2>/In9"] = {sid: "pHSystemRead:14:77"};
	this.sidHashMap["pHSystemRead:14:77"] = {rtwname: "<S2>/In9"};
	this.rtwnameHashMap["<S2>/Data Type Conversion1"] = {sid: "pHSystemRead:14:69"};
	this.sidHashMap["pHSystemRead:14:69"] = {rtwname: "<S2>/Data Type Conversion1"};
	this.rtwnameHashMap["<S2>/Data Type Conversion2"] = {sid: "pHSystemRead:14:82"};
	this.sidHashMap["pHSystemRead:14:82"] = {rtwname: "<S2>/Data Type Conversion2"};
	this.rtwnameHashMap["<S2>/Demux"] = {sid: "pHSystemRead:14:89"};
	this.sidHashMap["pHSystemRead:14:89"] = {rtwname: "<S2>/Demux"};
	this.rtwnameHashMap["<S2>/Mux"] = {sid: "pHSystemRead:14:70"};
	this.sidHashMap["pHSystemRead:14:70"] = {rtwname: "<S2>/Mux"};
	this.rtwnameHashMap["<S2>/S-Function"] = {sid: "pHSystemRead:14:80"};
	this.sidHashMap["pHSystemRead:14:80"] = {rtwname: "<S2>/S-Function"};
	this.rtwnameHashMap["<S2>/Unit Delay"] = {sid: "pHSystemRead:14:90"};
	this.sidHashMap["pHSystemRead:14:90"] = {rtwname: "<S2>/Unit Delay"};
	this.rtwnameHashMap["<S2>/Out1"] = {sid: "pHSystemRead:14:81"};
	this.sidHashMap["pHSystemRead:14:81"] = {rtwname: "<S2>/Out1"};
	this.rtwnameHashMap["<S2>/Out2"] = {sid: "pHSystemRead:14:87"};
	this.sidHashMap["pHSystemRead:14:87"] = {rtwname: "<S2>/Out2"};
	this.rtwnameHashMap["<S2>/Out3"] = {sid: "pHSystemRead:14:88"};
	this.sidHashMap["pHSystemRead:14:88"] = {rtwname: "<S2>/Out3"};
	this.rtwnameHashMap["<S3>/Command"] = {sid: "pHSystemRead:18:97"};
	this.sidHashMap["pHSystemRead:18:97"] = {rtwname: "<S3>/Command"};
	this.rtwnameHashMap["<S3>/trigger"] = {sid: "pHSystemRead:18:99"};
	this.sidHashMap["pHSystemRead:18:99"] = {rtwname: "<S3>/trigger"};
	this.rtwnameHashMap["<S3>/S-Function3"] = {sid: "pHSystemRead:18:94"};
	this.sidHashMap["pHSystemRead:18:94"] = {rtwname: "<S3>/S-Function3"};
	this.rtwnameHashMap["<S3>/Out1"] = {sid: "pHSystemRead:18:98"};
	this.sidHashMap["pHSystemRead:18:98"] = {rtwname: "<S3>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
