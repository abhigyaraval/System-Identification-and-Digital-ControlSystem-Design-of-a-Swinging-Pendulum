function TraceInfoFlag() {
    this.traceFlag = new Array();
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["TestDAC.c:34"]=1;
    this.lineTraceFlag["TestDAC.c:35"]=1;
    this.lineTraceFlag["TestDAC.c:38"]=1;
    this.lineTraceFlag["TestDAC.c:39"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
