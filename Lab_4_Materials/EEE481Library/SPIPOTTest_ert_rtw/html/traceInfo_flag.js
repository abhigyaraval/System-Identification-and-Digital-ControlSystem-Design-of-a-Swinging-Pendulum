function TraceInfoFlag() {
    this.traceFlag = new Array();
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["SPIPOTTest.c:34"]=1;
    this.lineTraceFlag["SPIPOTTest.c:35"]=1;
    this.lineTraceFlag["SPIPOTTest.c:36"]=1;
    this.lineTraceFlag["SPIPOTTest.c:39"]=1;
    this.lineTraceFlag["SPIPOTTest.c:40"]=1;
    this.lineTraceFlag["SPIPOTTest.c:42"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
