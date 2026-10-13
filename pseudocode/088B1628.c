/* Entry 0x088B1628 | file offset 0x000AE600 | FUN_088b1628 | bytes 100 */

void FUN_088b1628(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = sceKernelCreateCallback("UTILITY",&LAB_088b1a04,0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  scePowerRegisterCallback(0,uVar1);
  uVar1 = FUN_08867b90();
  uVar2 = FUN_08867bb0();
  sceImposeSetLanguageMode(uVar1,uVar2);
  return;
}

