function TraceInfoFlag() {
    this.traceFlag = new Array();
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["TestAccel.c:39"]=1;
    this.lineTraceFlag["TestAccel.c:40"]=1;
    this.lineTraceFlag["TestAccel.c:45"]=1;
    this.lineTraceFlag["TestAccel.c:46"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
