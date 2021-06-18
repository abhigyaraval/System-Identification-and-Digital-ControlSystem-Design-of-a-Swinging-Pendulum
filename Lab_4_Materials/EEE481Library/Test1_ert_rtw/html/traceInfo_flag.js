function TraceInfoFlag() {
    this.traceFlag = new Array();
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["Test1.c:38"]=1;
    this.lineTraceFlag["Test1.c:42"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
