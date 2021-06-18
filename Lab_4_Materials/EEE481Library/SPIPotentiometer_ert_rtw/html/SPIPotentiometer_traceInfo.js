function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Clock */
	this.urlHashMap["SPIPotentiometer:111"] = "SPIPotentiometer.c:140";
	/* <Root>/Constant */
	this.urlHashMap["SPIPotentiometer:113"] = "SPIPotentiometer.c:91&SPIPotentiometer.h:97&SPIPotentiometer_data.c:53";
	/* <Root>/Step1 */
	this.urlHashMap["SPIPotentiometer:119"] = "SPIPotentiometer.c:44,52&SPIPotentiometer.h:82,85,88&SPIPotentiometer_data.c:38,41,44";
	/* <S1>/12bit to voltage conversion */
	this.urlHashMap["SPIPotentiometer:110:31"] = "SPIPotentiometer.c:142&SPIPotentiometer.h:106&SPIPotentiometer_data.c:62";
	/* <S1>/AnalogInp1 */
	this.urlHashMap["SPIPotentiometer:110:146"] = "msg=&block=SPIPotentiometer:110:146";
	/* <S1>/Data Type Conversion2 */
	this.urlHashMap["SPIPotentiometer:110:30"] = "SPIPotentiometer.c:141";
	/* <S1>/S-Function Builder5 */
	this.urlHashMap["SPIPotentiometer:110:148"] = "SPIPotentiometer.c:134,178,269&SPIPotentiometer.h:54,62,115&SPIPotentiometer_data.c:71";
	/* <S2>/Data Type Conversion1 */
	this.urlHashMap["SPIPotentiometer:109:69"] = "SPIPotentiometer.c:139";
	/* <S2>/Data Type Conversion2 */
	this.urlHashMap["SPIPotentiometer:109:82"] = "msg=rtwMsg_SimulationReducedBlock&block=SPIPotentiometer:109:82";
	/* <S2>/S-Function */
	this.urlHashMap["SPIPotentiometer:109:80"] = "SPIPotentiometer.c:163,190,289&SPIPotentiometer.h:53,63,118,121&SPIPotentiometer_data.c:74,77";
	/* <S2>/Unit Delay */
	this.urlHashMap["SPIPotentiometer:109:90"] = "SPIPotentiometer.c:156,161,183,188,281,287&SPIPotentiometer.h:52,64,109&SPIPotentiometer_data.c:65";
	/* <S3>/Constant */
	this.urlHashMap["SPIPotentiometer:108:121"] = "SPIPotentiometer.c:55&SPIPotentiometer.h:79&SPIPotentiometer_data.c:35";
	/* <S3>/Constant1 */
	this.urlHashMap["SPIPotentiometer:108:123"] = "SPIPotentiometer.c:66&SPIPotentiometer.h:76&SPIPotentiometer_data.c:32";
	/* <S3>/Constant2 */
	this.urlHashMap["SPIPotentiometer:108:126"] = "SPIPotentiometer.c:92&SPIPotentiometer.h:73&SPIPotentiometer_data.c:29";
	/* <S3>/Constant3 */
	this.urlHashMap["SPIPotentiometer:108:127"] = "SPIPotentiometer.c:104&SPIPotentiometer.h:70&SPIPotentiometer_data.c:26";
	/* <S3>/Data Type Conversion1 */
	this.urlHashMap["SPIPotentiometer:108:124"] = "SPIPotentiometer.c:74,88&SPIPotentiometer.h:55";
	/* <S3>/Data Type Conversion2 */
	this.urlHashMap["SPIPotentiometer:108:128"] = "SPIPotentiometer.c:112,126&SPIPotentiometer.h:56";
	/* <S3>/S-Function Builder5 */
	this.urlHashMap["SPIPotentiometer:108:112"] = "SPIPotentiometer.c:128,172,257&SPIPotentiometer.h:61,112&SPIPotentiometer_data.c:68";
	/* <S3>/Scope */
	this.urlHashMap["SPIPotentiometer:108:149"] = "msg=&block=SPIPotentiometer:108:149";
	/* <S3>/Switch */
	this.urlHashMap["SPIPotentiometer:108:120"] = "SPIPotentiometer.c:54,63&SPIPotentiometer.h:91&SPIPotentiometer_data.c:47";
	/* <S3>/Switch1 */
	this.urlHashMap["SPIPotentiometer:108:122"] = "SPIPotentiometer.c:65,72&SPIPotentiometer.h:94&SPIPotentiometer_data.c:50";
	/* <S3>/Switch3 */
	this.urlHashMap["SPIPotentiometer:108:129"] = "SPIPotentiometer.c:90,101&SPIPotentiometer.h:100&SPIPotentiometer_data.c:56";
	/* <S3>/Switch4 */
	this.urlHashMap["SPIPotentiometer:108:130"] = "SPIPotentiometer.c:103,110&SPIPotentiometer.h:103&SPIPotentiometer_data.c:59";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "SPIPotentiometer"};
	this.sidHashMap["SPIPotentiometer"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "SPIPotentiometer:110"};
	this.sidHashMap["SPIPotentiometer:110"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "SPIPotentiometer:109"};
	this.sidHashMap["SPIPotentiometer:109"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "SPIPotentiometer:108"};
	this.sidHashMap["SPIPotentiometer:108"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<Root>/ADC12bit"] = {sid: "SPIPotentiometer:110"};
	this.sidHashMap["SPIPotentiometer:110"] = {rtwname: "<Root>/ADC12bit"};
	this.rtwnameHashMap["<Root>/Clock"] = {sid: "SPIPotentiometer:111"};
	this.sidHashMap["SPIPotentiometer:111"] = {rtwname: "<Root>/Clock"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "SPIPotentiometer:113"};
	this.sidHashMap["SPIPotentiometer:113"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Step1"] = {sid: "SPIPotentiometer:119"};
	this.sidHashMap["SPIPotentiometer:119"] = {rtwname: "<Root>/Step1"};
	this.rtwnameHashMap["<Root>/Subsystem"] = {sid: "SPIPotentiometer:109"};
	this.sidHashMap["SPIPotentiometer:109"] = {rtwname: "<Root>/Subsystem"};
	this.rtwnameHashMap["<Root>/Subsystem4"] = {sid: "SPIPotentiometer:108"};
	this.sidHashMap["SPIPotentiometer:108"] = {rtwname: "<Root>/Subsystem4"};
	this.rtwnameHashMap["<S1>/12bit to voltage conversion"] = {sid: "SPIPotentiometer:110:31"};
	this.sidHashMap["SPIPotentiometer:110:31"] = {rtwname: "<S1>/12bit to voltage conversion"};
	this.rtwnameHashMap["<S1>/AnalogInp1"] = {sid: "SPIPotentiometer:110:146"};
	this.sidHashMap["SPIPotentiometer:110:146"] = {rtwname: "<S1>/AnalogInp1"};
	this.rtwnameHashMap["<S1>/Data Type Conversion2"] = {sid: "SPIPotentiometer:110:30"};
	this.sidHashMap["SPIPotentiometer:110:30"] = {rtwname: "<S1>/Data Type Conversion2"};
	this.rtwnameHashMap["<S1>/S-Function Builder5"] = {sid: "SPIPotentiometer:110:148"};
	this.sidHashMap["SPIPotentiometer:110:148"] = {rtwname: "<S1>/S-Function Builder5"};
	this.rtwnameHashMap["<S1>/ADC Value"] = {sid: "SPIPotentiometer:110:32"};
	this.sidHashMap["SPIPotentiometer:110:32"] = {rtwname: "<S1>/ADC Value"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "SPIPotentiometer:109:66"};
	this.sidHashMap["SPIPotentiometer:109:66"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/In2"] = {sid: "SPIPotentiometer:109:67"};
	this.sidHashMap["SPIPotentiometer:109:67"] = {rtwname: "<S2>/In2"};
	this.rtwnameHashMap["<S2>/In3"] = {sid: "SPIPotentiometer:109:68"};
	this.sidHashMap["SPIPotentiometer:109:68"] = {rtwname: "<S2>/In3"};
	this.rtwnameHashMap["<S2>/In4"] = {sid: "SPIPotentiometer:109:72"};
	this.sidHashMap["SPIPotentiometer:109:72"] = {rtwname: "<S2>/In4"};
	this.rtwnameHashMap["<S2>/In5"] = {sid: "SPIPotentiometer:109:73"};
	this.sidHashMap["SPIPotentiometer:109:73"] = {rtwname: "<S2>/In5"};
	this.rtwnameHashMap["<S2>/In6"] = {sid: "SPIPotentiometer:109:74"};
	this.sidHashMap["SPIPotentiometer:109:74"] = {rtwname: "<S2>/In6"};
	this.rtwnameHashMap["<S2>/In7"] = {sid: "SPIPotentiometer:109:75"};
	this.sidHashMap["SPIPotentiometer:109:75"] = {rtwname: "<S2>/In7"};
	this.rtwnameHashMap["<S2>/In8"] = {sid: "SPIPotentiometer:109:76"};
	this.sidHashMap["SPIPotentiometer:109:76"] = {rtwname: "<S2>/In8"};
	this.rtwnameHashMap["<S2>/In9"] = {sid: "SPIPotentiometer:109:77"};
	this.sidHashMap["SPIPotentiometer:109:77"] = {rtwname: "<S2>/In9"};
	this.rtwnameHashMap["<S2>/Data Type Conversion1"] = {sid: "SPIPotentiometer:109:69"};
	this.sidHashMap["SPIPotentiometer:109:69"] = {rtwname: "<S2>/Data Type Conversion1"};
	this.rtwnameHashMap["<S2>/Data Type Conversion2"] = {sid: "SPIPotentiometer:109:82"};
	this.sidHashMap["SPIPotentiometer:109:82"] = {rtwname: "<S2>/Data Type Conversion2"};
	this.rtwnameHashMap["<S2>/Demux"] = {sid: "SPIPotentiometer:109:89"};
	this.sidHashMap["SPIPotentiometer:109:89"] = {rtwname: "<S2>/Demux"};
	this.rtwnameHashMap["<S2>/Mux"] = {sid: "SPIPotentiometer:109:70"};
	this.sidHashMap["SPIPotentiometer:109:70"] = {rtwname: "<S2>/Mux"};
	this.rtwnameHashMap["<S2>/S-Function"] = {sid: "SPIPotentiometer:109:80"};
	this.sidHashMap["SPIPotentiometer:109:80"] = {rtwname: "<S2>/S-Function"};
	this.rtwnameHashMap["<S2>/Unit Delay"] = {sid: "SPIPotentiometer:109:90"};
	this.sidHashMap["SPIPotentiometer:109:90"] = {rtwname: "<S2>/Unit Delay"};
	this.rtwnameHashMap["<S2>/Out1"] = {sid: "SPIPotentiometer:109:81"};
	this.sidHashMap["SPIPotentiometer:109:81"] = {rtwname: "<S2>/Out1"};
	this.rtwnameHashMap["<S2>/Out2"] = {sid: "SPIPotentiometer:109:87"};
	this.sidHashMap["SPIPotentiometer:109:87"] = {rtwname: "<S2>/Out2"};
	this.rtwnameHashMap["<S2>/Out3"] = {sid: "SPIPotentiometer:109:88"};
	this.sidHashMap["SPIPotentiometer:109:88"] = {rtwname: "<S2>/Out3"};
	this.rtwnameHashMap["<S3>/PotAddress"] = {sid: "SPIPotentiometer:108:110"};
	this.sidHashMap["SPIPotentiometer:108:110"] = {rtwname: "<S3>/PotAddress"};
	this.rtwnameHashMap["<S3>/PotLevel"] = {sid: "SPIPotentiometer:108:111"};
	this.sidHashMap["SPIPotentiometer:108:111"] = {rtwname: "<S3>/PotLevel"};
	this.rtwnameHashMap["<S3>/Constant"] = {sid: "SPIPotentiometer:108:121"};
	this.sidHashMap["SPIPotentiometer:108:121"] = {rtwname: "<S3>/Constant"};
	this.rtwnameHashMap["<S3>/Constant1"] = {sid: "SPIPotentiometer:108:123"};
	this.sidHashMap["SPIPotentiometer:108:123"] = {rtwname: "<S3>/Constant1"};
	this.rtwnameHashMap["<S3>/Constant2"] = {sid: "SPIPotentiometer:108:126"};
	this.sidHashMap["SPIPotentiometer:108:126"] = {rtwname: "<S3>/Constant2"};
	this.rtwnameHashMap["<S3>/Constant3"] = {sid: "SPIPotentiometer:108:127"};
	this.sidHashMap["SPIPotentiometer:108:127"] = {rtwname: "<S3>/Constant3"};
	this.rtwnameHashMap["<S3>/Data Type Conversion1"] = {sid: "SPIPotentiometer:108:124"};
	this.sidHashMap["SPIPotentiometer:108:124"] = {rtwname: "<S3>/Data Type Conversion1"};
	this.rtwnameHashMap["<S3>/Data Type Conversion2"] = {sid: "SPIPotentiometer:108:128"};
	this.sidHashMap["SPIPotentiometer:108:128"] = {rtwname: "<S3>/Data Type Conversion2"};
	this.rtwnameHashMap["<S3>/S-Function Builder5"] = {sid: "SPIPotentiometer:108:112"};
	this.sidHashMap["SPIPotentiometer:108:112"] = {rtwname: "<S3>/S-Function Builder5"};
	this.rtwnameHashMap["<S3>/Scope"] = {sid: "SPIPotentiometer:108:149"};
	this.sidHashMap["SPIPotentiometer:108:149"] = {rtwname: "<S3>/Scope"};
	this.rtwnameHashMap["<S3>/Switch"] = {sid: "SPIPotentiometer:108:120"};
	this.sidHashMap["SPIPotentiometer:108:120"] = {rtwname: "<S3>/Switch"};
	this.rtwnameHashMap["<S3>/Switch1"] = {sid: "SPIPotentiometer:108:122"};
	this.sidHashMap["SPIPotentiometer:108:122"] = {rtwname: "<S3>/Switch1"};
	this.rtwnameHashMap["<S3>/Switch3"] = {sid: "SPIPotentiometer:108:129"};
	this.sidHashMap["SPIPotentiometer:108:129"] = {rtwname: "<S3>/Switch3"};
	this.rtwnameHashMap["<S3>/Switch4"] = {sid: "SPIPotentiometer:108:130"};
	this.sidHashMap["SPIPotentiometer:108:130"] = {rtwname: "<S3>/Switch4"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
