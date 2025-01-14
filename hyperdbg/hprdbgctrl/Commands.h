/**
 * @file commands.h
 * @author Sina Karvandi (sina@rayanfam.com)
 * @brief The hyperdbg command interpreter and driver connector
 * @details
 * @version 0.1
 * @date 2020-04-11
 *
 * @copyright This project is released under the GNU Public License v3.
 *
 */
#pragma once

using namespace std;

//////////////////////////////////////////////////
//                    Externs                   //
//////////////////////////////////////////////////

extern HANDLE g_DeviceHandle;

//////////////////////////////////////////////////
//                  Functions                   //
//////////////////////////////////////////////////

int ReadCpuDetails();

string ReadVendorString();

VOID ShowMessages(const char *Fmt, ...);

int CommandLm(vector<string> SplittedCommand);

VOID HyperDbgReadMemoryAndDisassemble(DEBUGGER_SHOW_MEMORY_STYLE Style,
                                      UINT64 Address,
                                      DEBUGGER_READ_MEMORY_TYPE MemoryType,
                                      DEBUGGER_READ_READING_TYPE ReadingType,
                                      UINT32 Pid, UINT Size);
string SeparateTo64BitValue(UINT64 Value);

int HyperDbgDisassembler64(unsigned char *BufferToDisassemble,
                           UINT64 BaseAddress, UINT64 Size);

int HyperDbgDisassembler32(unsigned char *BufferToDisassemble,
                           UINT64 BaseAddress, UINT64 Size);

VOID HyperDbgReadMemoryAndDisassemble(DEBUGGER_SHOW_MEMORY_STYLE Style,
                                      UINT64 Address,
                                      DEBUGGER_READ_MEMORY_TYPE MemoryType,
                                      DEBUGGER_READ_READING_TYPE ReadingType,
                                      UINT32 Pid, UINT Size);

VOID CommandTest(vector<string> SplittedCommand);

VOID CommandClearScreen();

VOID CommandReadMemoryAndDisassembler(vector<string> SplittedCommand);

VOID CommandConnect(vector<string> SplittedCommand);

VOID CommandConnect(vector<string> SplittedCommand);

VOID CommandLoad(vector<string> SplittedCommand);

VOID CommandUnload(vector<string> SplittedCommand);

VOID CommandScript(vector<string> SplittedCommand, string Command);

VOID CommandCpu(vector<string> SplittedCommand);

VOID CommandExit(vector<string> SplittedCommand);

VOID CommandDisconnect(vector<string> SplittedCommand);

VOID CommandFormats(vector<string> SplittedCommand);

VOID CommandRdmsr(vector<string> SplittedCommand);

VOID CommandWrmsr(vector<string> SplittedCommand);

VOID CommandPte(vector<string> SplittedCommand);

VOID CommandMonitor(vector<string> SplittedCommand);

VOID CommandSyscallAndSysret(vector<string> SplittedCommand);

VOID CommandEptHook(vector<string> SplittedCommand);

VOID CommandEptHook2(vector<string> SplittedCommand);

VOID CommandCpuid(vector<string> SplittedCommand);

VOID CommandMsrread(vector<string> SplittedCommand);

VOID CommandMsrwrite(vector<string> SplittedCommand);

VOID CommandTsc(vector<string> SplittedCommand);

VOID CommandPmc(vector<string> SplittedCommand);

VOID CommandException(vector<string> SplittedCommand);

VOID CommandDr(vector<string> SplittedCommand);

VOID CommandInterrupt(vector<string> SplittedCommand);

VOID CommandIoin(vector<string> SplittedCommand);

VOID CommandIoout(vector<string> SplittedCommand);

VOID CommandVmcall(vector<string> SplittedCommand);

VOID CommandHide(vector<string> SplittedCommand, string Command);

VOID CommandUnhide(vector<string> SplittedCommand);

VOID CommandLogopen(vector<string> SplittedCommand, string Command);

VOID CommandLogclose(vector<string> SplittedCommand);

VOID CommandVa2pa(vector<string> SplittedCommand);

VOID CommandPa2va(vector<string> SplittedCommand);

VOID CommandEvents(vector<string> SplittedCommand);

VOID CommandG(vector<string> SplittedCommand);

VOID CommandSleep(vector<string> SplittedCommand);

VOID CommandEditMemory(vector<string> SplittedCommand);

VOID CommandSearchMemory(vector<string> SplittedCommand);

VOID CommandMeasure(vector<string> SplittedCommand);

VOID CommandSettings(vector<string> SplittedCommand);

VOID CommandFlush(vector<string> SplittedCommand);

VOID CommandPause(vector<string> SplittedCommand);

VOID CommandListen(vector<string> SplittedCommand);

VOID CommandStatus(vector<string> SplittedCommand);

VOID CommandAttach(vector<string> SplittedCommand);

VOID CommandDetach(vector<string> SplittedCommand);

VOID CommandT(vector<string> SplittedCommand);

VOID CommandPrint(vector<string> SplittedCommand, string Expr);

VOID CommandOutput(vector<string> SplittedCommand, string Command);
