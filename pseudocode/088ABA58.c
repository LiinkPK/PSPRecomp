/* Entry 0x088ABA58 | file offset 0x000A8A30 | FUN_088aba58 | bytes 68 */

void FUN_088aba58(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = sceKernelGetSystemTimeWide();
  uVar1 = FUN_0899924c((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),1000000,0);
  *(undefined4 *)(param_1 + 0xea8) = uVar1;
  return;
}

