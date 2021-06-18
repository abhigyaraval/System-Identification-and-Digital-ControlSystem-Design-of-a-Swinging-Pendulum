function TraceInfoFlag() {
    this.traceFlag = new Array();
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["SPIPOTTestBkp.c:38"]=1;
    this.lineTraceFlag["SPIPOTTestBkp.c:43"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
